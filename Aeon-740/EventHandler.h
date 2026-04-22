#pragma once
#include "framework.h"
#include <ctime>

// Custom Live Event System
//
// Scheduling
//   The event fires at a predefined wall-clock UTC timestamp defined by the
//   six constants at the top of this namespace.  On startup the server computes
//   how many seconds remain until that moment (via _mkgmtime / difftime),
//   converts that duration into an equivalent world-time end stamp, and writes
//   it into the replicated AFortGameStateAthena::WarmupCountdownEndTime field.
//   Clients read that field each tick and display the remaining time.
//   The BP_EventCountdownDisplay Blueprint Actor (documented in Pak.MD) reads
//   the system clock directly against the same hardcoded target date and shows
//   a DAYS / HOURS / MINUTES / SECONDS breakdown in world space.
//
// Cinematics
//   Uses ALevelSequenceActor + ULevelSequencePlayer (SDK, no hooks).
//   bReplicatePlayback = true makes the engine replicate playback state to
//   every client automatically.  The server thread blocks on IsPlaying() so
//   each phase lasts exactly as long as the sequence asset, no hardcoded Sleep.
//
// Audio
//   APlayerController::ClientPlaySound is a reliable replicated RPC.
//   The server fires it once per connected player; each client plays locally.
//
// Player management
//   APlayerController::SetIgnoreMoveInput / SetIgnoreLookInput for locking.
//   APawn::K2_SetActorLocation + ClientSetLocation RPC for teleport.

namespace EventHandler
{
	// Event target time
	// All values are interpreted as UTC.
	static constexpr int TargetYear   = 2026;
	static constexpr int TargetMonth  = 4;    // 1 – 12
	static constexpr int TargetDay    = 22;
	static constexpr int TargetHour   = 12;   // 24-hour clock
	static constexpr int TargetMinute = 0;
	static constexpr int TargetSecond = 0;

	enum class ECustomEventPhase : uint8
	{
		Idle,        // No event running
		Countdown,   // Waiting for the wall-clock target timestamp
		EventStart,  // Players teleported and locked
		Phase1,      // Opening cinematic
		Phase2,      // Main event sequence
		Phase3,      // Finale
		EventEnd,    // Cleanup, movement restored
	};

	static ECustomEventPhase CurrentPhase = ECustomEventPhase::Idle;
	static bool               bEventActive = false;

	static const string SequencePath_Phase1 =
		"/Game/Apfel/Cinematics/LevelSequences/LS_CustomEvent_Phase1.LS_CustomEvent_Phase1";
	static const string SequencePath_Phase2 =
		"/Game/Apfel/Cinematics/LevelSequences/LS_CustomEvent_Phase2.LS_CustomEvent_Phase2";
	static const string SequencePath_Phase3 =
		"/Game/Apfel/Cinematics/LevelSequences/LS_CustomEvent_Phase3.LS_CustomEvent_Phase3";

	static const string SoundPath_Intro  = "/Game/Apfel/Audio/SC_EventIntro.SC_EventIntro";
	static const string SoundPath_Main   = "/Game/Apfel/Audio/SC_EventMain.SC_EventMain";
	static const string SoundPath_Finale = "/Game/Apfel/Audio/SC_EventFinale.SC_EventFinale";

	static FVector  EventStagingLocation = { 349.57f, 509.0f, 68.0f };
	static FRotator EventStagingRotation = { 0.0f, 0.0f, 0.0f };

	// Current server world time in seconds (same value the Sequencer and the
	// client HUD use when they read WarmupCountdownEndTime).
	static float GetWorldTime()
	{
		return UGameplayStatics::GetDefaultObj()->GetTimeSeconds(Globals::GetWorld());
	}

	// Seconds remaining until the target UTC timestamp.
	// Returns a negative value if the target time has already passed.
	// _mkgmtime is the Windows CRT function that treats struct tm as UTC;
	static double GetSecondsUntilEvent()
	{
		std::tm target{};
		target.tm_year  = TargetYear  - 1900;
		target.tm_mon   = TargetMonth - 1;   // tm_mon is 0-indexed
		target.tm_mday  = TargetDay;
		target.tm_hour  = TargetHour;
		target.tm_min   = TargetMinute;
		target.tm_sec   = TargetSecond;
		target.tm_isdst = 0;

		std::time_t targetEpoch = _mkgmtime(&target);
		std::time_t nowEpoch    = std::time(nullptr);

		return std::difftime(targetEpoch, nowEpoch);
	}

	// BP_EventCountdownDisplay helpers
	//
	// The server writes a single replicated float (CountdownEndTime, a world-time
	// stamp) onto the placed Blueprint Actor.  Clients receive the new value via
	// normal Actor replication and compute  (CountdownEndTime - GetGameTimeInSeconds())
	// each second to derive the D/H/M/S display.
	//
	// CountdownEndTime semantics:
	//   > 0   countdown is active; value is the world-time second when it expires
	//   -1    event is live (server sets this at EventEnd to trigger "EVENT IS LIVE!")

	static AActor* FindCountdownActor()
	{
		for (int32 i = 0; i < UObject::GObjects->Num(); i++)
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);
			if (!Obj || !Obj->Class) continue;
			if (Obj->Class->GetName().find("BP_EventCountdownDisplay") != string::npos)
				return static_cast<AActor*>(Obj);
		}
		return nullptr;
	}

	static UProperty* FindClassProperty(UClass* Class, const string& PropName)
	{
		for (UStruct* S = Class; S; S = static_cast<UStruct*>(S->Super))
		{
			for (UField* F = S->Children; F; F = F->Next)
			{
				if (F->IsA(UProperty::StaticClass()) && F->GetName() == PropName)
					return static_cast<UProperty*>(F);
			}
		}
		return nullptr;
	}

	// Write a float value into the BP Actor's CountdownEndTime replicated property
	// and call ForceNetUpdate() so the engine immediately schedules a replication
	// packet rather than waiting for the next network tick.
	static void SetCountdownActorEndTime(float endTime)
	{
		AActor* Actor = FindCountdownActor();
		if (!Actor)
		{
			LogInfo("EventHandler: BP_EventCountdownDisplay actor not found in world.");
			return;
		}

		UProperty* Prop = FindClassProperty(Actor->Class, "CountdownEndTime");
		if (!Prop)
		{
			LogInfo("EventHandler: CountdownEndTime property not found on BP_EventCountdownDisplay.");
			return;
		}

		*reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(Actor) + Prop->Offset) = endTime;
		Actor->ForceNetUpdate();
		LogInfo("EventHandler: Set BP_EventCountdownDisplay::CountdownEndTime = {:.2f}", endTime);
	}

	// Countdown state helpers
	// WarmupCountdownEndTime is a Net-replicated float on AFortGameStateAthena.
	// Clients read  (WarmupCountdownEndTime - GetTimeSeconds())  each tick to
	// drive the HUD timer without any additional server -> client messaging.
	// BP_EventCountdownDisplay is kept in sync via SetCountdownActorEndTime()
	// which writes the same world-time stamp into the actor's replicated property.

	// Set the centralised countdown timestamp and return the world-time end value.
	// durationSeconds is the wall-clock delta already converted to world seconds.
	static float BeginCountdown(double durationSeconds)
	{
		float now     = GetWorldTime();
		float endTime = now + static_cast<float>(durationSeconds);

		AFortGameStateAthena* GS = Globals::GetGameState();
		if (GS)
		{
			GS->WarmupCountdownStartTime = now;
			GS->WarmupCountdownEndTime   = endTime;   // <- clients read this
			GS->bIsInCountdown           = true;
		}

		SetCountdownActorEndTime(endTime);  // replicate to BP display actor

		LogInfo("EventHandler: Countdown started. World end time = {:.1f} ({:.0f}s from now)",
			endTime, durationSeconds);
		return endTime;
	}

	// Poll until the world clock reaches the given timestamp (100 ms granularity).
	static void WaitUntil(float worldTimestamp)
	{
		while (GetWorldTime() < worldTimestamp)
			Sleep(100);
	}

	static void EndCountdown()
	{
		AFortGameStateAthena* GS = Globals::GetGameState();
		if (GS)
			GS->bIsInCountdown = false;
	}

	static void SetControllerLocked(APlayerController* PC, bool bLocked)
	{
		if (!PC) return;
		if (bLocked)
		{
			PC->SetIgnoreMoveInput(true);
			PC->SetIgnoreLookInput(true);
		}
		else
		{
			PC->ResetIgnoreMoveInput();
			PC->ResetIgnoreLookInput();
		}
	}

	static void SetAllPlayersLocked(bool bLocked)
	{
		UWorld* World = Globals::GetWorld();
		if (!World || !World->GameState) return;

		TArray<APlayerState*>& Players = World->GameState->PlayerArray;
		for (int32 i = 0; i < Players.Num(); i++)
		{
			if (!Players[i]) continue;
			APlayerController* PC = static_cast<APlayerController*>(Players[i]->GetOwner());
			SetControllerLocked(PC, bLocked);
		}
	}

	static void TeleportAllToStagingArea()
	{
		UWorld* World = Globals::GetWorld();
		if (!World || !World->GameState) return;

		TArray<APlayerState*>& Players = World->GameState->PlayerArray;
		for (int32 i = 0; i < Players.Num(); i++)
		{
			if (!Players[i]) continue;
			APlayerController* PC = static_cast<APlayerController*>(Players[i]->GetOwner());
			if (!PC) continue;

			APawn* Pawn = PC->Pawn;
			if (Pawn)
			{
				FHitResult Hit;
				Pawn->K2_SetActorLocation(EventStagingLocation, false, &Hit, true);
			}
			PC->ClientSetLocation(EventStagingLocation, EventStagingRotation);
		}

		LogInfo("EventHandler: Teleported {} players to staging area.",
			Players.Num());
	}

	static void BroadcastSound(const string& SoundPath)
	{
		USoundBase* Sound = SDKUtils::FindObject<USoundBase>(SoundPath);
		if (!Sound)
			Sound = SDKUtils::LoadObject<USoundBase>(SoundPath);

		if (!Sound)
		{
			LogInfo("EventHandler: Sound not found ({})", SoundPath);
			return;
		}

		UWorld* World = Globals::GetWorld();
		if (!World || !World->GameState) return;

		TArray<APlayerState*>& Players = World->GameState->PlayerArray;
		for (int32 i = 0; i < Players.Num(); i++)
		{
			if (!Players[i]) continue;
			APlayerController* PC = static_cast<APlayerController*>(Players[i]->GetOwner());
			if (!PC) continue;

			PC->ClientPlaySound(Sound, 1.0f, 1.0f);
		}

		LogInfo("EventHandler: Broadcast sound to {} players.", Players.Num());
	}

	static ALevelSequenceActor* PlaySequence(const string& SequencePath)
	{
		ULevelSequence* Sequence = SDKUtils::FindObject<ULevelSequence>(SequencePath);
		if (!Sequence)
			Sequence = SDKUtils::LoadObject<ULevelSequence>(SequencePath);

		if (!Sequence)
		{
			LogInfo("EventHandler: LevelSequence not found ({})", SequencePath);
			return nullptr;
		}

		FMovieSceneSequencePlaybackSettings Settings{};
		Settings.PlayRate        = 1.0f;
		Settings.LoopCount.Value = 0;
		Settings.StartTime       = 0.0f;

		ALevelSequenceActor* OutActor = nullptr;
		ULevelSequencePlayer* Player = ULevelSequencePlayer::CreateLevelSequencePlayer(
			Globals::GetWorld(), Sequence, Settings, &OutActor);

		if (OutActor)
		{
			OutActor->bReplicatePlayback = true;
			OutActor->SetReplicatePlayback(true);
		}
		if (Player)
			Player->Play();

		LogInfo("EventHandler: Started sequence: {}", SequencePath);
		return OutActor;
	}

	// Block until the sequence finishes naturally (IsPlaying() -> false).
	// 200 ms initial pause lets the engine tick Play() before the first poll.
	// Falls back to the safety timeout if the sequence never stops.
	static void WaitForSequence(ALevelSequenceActor* SeqActor,
	                            float FallbackTimeoutSeconds = 300.0f)
	{
		if (!SeqActor || !SeqActor->SequencePlayer)
		{
			LogInfo("EventHandler: WaitForSequence – no valid player, skipping.");
			return;
		}

		ULevelSequencePlayer* Player = SeqActor->SequencePlayer;
		float AbsTimeout = GetWorldTime() + FallbackTimeoutSeconds;

		Sleep(200);  // let engine process Play() on its game thread

		while (GetWorldTime() < AbsTimeout)
		{
			if (!Player->IsPlaying())
				break;
			Sleep(50);
		}

		LogInfo("EventHandler: Sequence ended at {:.2f}s / {:.2f}s",
			Player->GetPlaybackPosition(), Player->GetPlaybackEnd());
	}

	static void StopSequence(ALevelSequenceActor*& OutActor)
	{
		if (!OutActor) return;
		if (OutActor->SequencePlayer)
			OutActor->SequencePlayer->Stop();
		OutActor->K2_DestroyActor();
		OutActor = nullptr;
	}

	DWORD WINAPI EventTimeline(LPVOID)
	{
		LogInfo("EventHandler: Timeline thread started.");

		// Phase: Countdown
		// Compute how many wall-clock seconds remain until the predefined UTC
		// target.  Convert to a world-time end stamp and write it into the
		// replicated WarmupCountdownEndTime field so every connected client's
		// HUD shows the remaining time automatically.
		// The BP_EventCountdownDisplay Blueprint Actor (see Pak.MD) also reads
		// the system clock directly and displays a D/H/M/S breakdown in world
		// space without any additional server communication.
		CurrentPhase = ECustomEventPhase::Countdown;

		double secsUntil = GetSecondsUntilEvent();

		if (secsUntil > 0.0)
		{
			// Log a human-readable scheduled time
			int64_t days    = static_cast<int64_t>(secsUntil) / 86400;
			int64_t hours   = (static_cast<int64_t>(secsUntil) % 86400) / 3600;
			int64_t minutes = (static_cast<int64_t>(secsUntil) % 3600) / 60;
			int64_t seconds = static_cast<int64_t>(secsUntil) % 60;
			LogInfo("EventHandler: [Countdown] Event scheduled in {}d {}h {}m {}s "
				"({}/{}/{} {:02d}:{:02d}:{:02d} UTC)",
				days, hours, minutes, seconds,
				TargetYear, TargetMonth, TargetDay,
				TargetHour, TargetMinute, TargetSecond);

			float endWorldTime = BeginCountdown(secsUntil);
			WaitUntil(endWorldTime);
			EndCountdown();
		}
		else
		{
			// Target time already passed – start immediately with a short grace
			// period so players who are mid-load-screen still make it in.
			LogInfo("EventHandler: [Countdown] Target time already passed "
				"({:.0f}s ago). Starting in 10 s.", -secsUntil);
			Sleep(10000);
		}

		// Phase: Event Start – teleport players, lock movement
		CurrentPhase = ECustomEventPhase::EventStart;
		bEventActive  = true;
		LogInfo("EventHandler: [EventStart] Teleporting and locking players.");

		TeleportAllToStagingArea();
		Sleep(2000);
		SetAllPlayersLocked(true);

		// Phase 1 – Opening cinematic
		// Phase duration = length of LS_CustomEvent_Phase1
		CurrentPhase = ECustomEventPhase::Phase1;
		LogInfo("EventHandler: [Phase1] Opening cinematic.");

		ALevelSequenceActor* SeqActor = PlaySequence(SequencePath_Phase1);
		BroadcastSound(SoundPath_Intro);
		WaitForSequence(SeqActor);
		StopSequence(SeqActor);

		// Phase 2 – Main event sequence
		// Phase duration = length of LS_CustomEvent_Phase2
		CurrentPhase = ECustomEventPhase::Phase2;
		LogInfo("EventHandler: [Phase2] Main event sequence.");

		SeqActor = PlaySequence(SequencePath_Phase2);
		BroadcastSound(SoundPath_Main);
		WaitForSequence(SeqActor);
		StopSequence(SeqActor);

		// Phase 3 – Finale
		// Phase duration = length of LS_CustomEvent_Phase3
		CurrentPhase = ECustomEventPhase::Phase3;
		LogInfo("EventHandler: [Phase3] Finale.");

		SeqActor = PlaySequence(SequencePath_Phase3);
		BroadcastSound(SoundPath_Finale);
		WaitForSequence(SeqActor);
		StopSequence(SeqActor);

		// Phase: Event End – restore players, clear state
		CurrentPhase = ECustomEventPhase::EventEnd;
		LogInfo("EventHandler: [EventEnd] Restoring players.");

		SetAllPlayersLocked(false);

		AFortGameStateAthena* GS = Globals::GetGameState();
		if (GS)
		{
			GS->bIsInCountdown      = false;
			GS->bIsInFinalCountdown = false;
		}

		// Signal the Blueprint display actor that the event is now live.
		// Setting -1.0 causes clients to show "EVENT IS LIVE!" instead of a timer.
		SetCountdownActorEndTime(-1.0f);

		LogInfo("EventHandler: Event complete.");
		return 0;
	}

	static void BeginEvent()
	{
		if (bEventActive || CurrentPhase != ECustomEventPhase::Idle)
		{
			LogInfo("EventHandler::BeginEvent: Already running or completed, ignoring.");
			return;
		}

		LogInfo("EventHandler: Scheduling live event timeline...");
		CreateThread(nullptr, 0, EventTimeline, nullptr, 0, nullptr);
	}
}