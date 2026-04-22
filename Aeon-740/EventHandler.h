#pragma once
#include "framework.h"

// Custom Live Event System
//
// Architecture overview:
//   - Reuses AFortGameStateAthena's existing replicated timestamp fields for the
//     HUD countdown. WarmupCountdownEndTime is a Net-replicated float; the client
//     HUD reads (WarmupCountdownEndTime - GetTimeSeconds()) to display remaining
//     seconds. The server sets this once and never needs to push tick-by-tick
//     updates – replication handles the rest.
//   - Uses ALevelSequenceActor + ULevelSequencePlayer (SDK) for cinematics.
//     bReplicatePlayback = true means all clients mirror play/stop automatically.
//   - Uses APlayerController::ClientPlaySound (reliable replicated RPC) for audio.
//   - Uses APlayerController::SetIgnoreMoveInput / SetIgnoreLookInput to lock players.
//   - A dedicated Win32 thread drives the timeline. During the countdown phase the
//     thread polls GetTimeSeconds() every 100 ms instead of calling Sleep() for the
//     full duration, so the server wakes up exactly when the timestamp is reached.

namespace EventHandler
{

	enum class ECustomEventPhase : uint8
	{
		Idle,        // No event scheduled yet
		Waiting,     // Grace period – players are finished their loading screens
		Countdown,   // HUD countdown is live; server polls until timestamp reached
		EventStart,  // Players teleported, movement locked
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

	// World-space event staging location
	static FVector  EventStagingLocation = { 0.0f, 0.0f, 5000.0f };
	static FRotator EventStagingRotation = { 0.0f, 0.0f, 0.0f };


	// Returns the current server world time in seconds.
	static float GetWorldTime()
	{
		return UGameplayStatics::GetDefaultObj()->GetTimeSeconds(Globals::GetWorld());
	}

	// Set the centralized countdown on AFortGameStateAthena and return the
	// absolute end timestamp.  WarmupCountdownStartTime / WarmupCountdownEndTime
	// are Net-replicated floats; clients read them every tick to drive the HUD
	// display without any additional server -> client messaging.
	static float BeginCountdown(float DurationSeconds)
	{
		float Now       = GetWorldTime();
		float EndTime   = Now + DurationSeconds;

		AFortGameStateAthena* GS = Globals::GetGameState();
		if (GS)
		{
			GS->WarmupCountdownStartTime = Now;
			GS->WarmupCountdownEndTime   = EndTime;  // <- clients read this for the timer
			GS->bIsInCountdown           = true;
		}

		LogInfo("EventHandler: Countdown set. EndTime={:.1f} (in {:.0f}s)", EndTime, DurationSeconds);
		return EndTime;
	}

	// Block the calling thread until the world clock reaches the given timestamp.
	static void WaitUntil(float Timestamp)
	{
		while (GetWorldTime() < Timestamp)
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

		LogInfo("EventHandler: Teleported {} players to staging area.", Players.Num());
	}

	static void BroadcastSound(const string& SoundPath)
	{
		USoundBase* Sound = SDKUtils::FindObject<USoundBase>(SoundPath);
		if (!Sound)
			Sound = SDKUtils::LoadObject<USoundBase>(SoundPath);

		if (!Sound)
		{
			LogInfo("EventHandler: Sound asset not found ({})", SoundPath);
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
		Settings.LoopCount.Value = 0;      // play once; set to -1 for infinite loop
		Settings.StartTime       = 0.0f;

		ALevelSequenceActor* OutActor = nullptr;
		ULevelSequencePlayer* Player = ULevelSequencePlayer::CreateLevelSequencePlayer(
			Globals::GetWorld(),
			Sequence,
			Settings,
			&OutActor
		);

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

		// Phase: Waiting – 10 s grace period for loading screens to clear
		CurrentPhase = ECustomEventPhase::Waiting;
		LogInfo("EventHandler: [Waiting] 10 s grace period...");
		Sleep(10000);

		// Phase: Countdown
		// BeginCountdown() writes WarmupCountdownEndTime onto the GameState.
		// That field is Net-replicated; clients poll it each tick to drive the
		// HUD timer without any extra server messaging.
		// WaitUntil() blocks this thread until the timestamp is reached.
		CurrentPhase = ECustomEventPhase::Countdown;
		LogInfo("EventHandler: [Countdown] Starting 30 s timestamp countdown...");
		float EventStartTimestamp = BeginCountdown(30.0f);
		WaitUntil(EventStartTimestamp);    // server advances exactly when timer hits 0
		EndCountdown();

		// Phase: Event Start
		CurrentPhase = ECustomEventPhase::EventStart;
		bEventActive  = true;
		LogInfo("EventHandler: [EventStart] Teleporting and locking players.");

		TeleportAllToStagingArea();
		Sleep(2000);            // brief settle time after teleport RPC propagates
		SetAllPlayersLocked(true);

		// Phase 1 – Opening cinematic (15 s)
		CurrentPhase = ECustomEventPhase::Phase1;
		LogInfo("EventHandler: [Phase1] Opening cinematic.");

		ALevelSequenceActor* SeqActor = PlaySequence(SequencePath_Phase1);
		BroadcastSound(SoundPath_Intro);
		Sleep(15000);
		StopSequence(SeqActor);

		// Phase 2 – Main event sequence (30 s)
		CurrentPhase = ECustomEventPhase::Phase2;
		LogInfo("EventHandler: [Phase2] Main event sequence.");

		SeqActor = PlaySequence(SequencePath_Phase2);
		BroadcastSound(SoundPath_Main);
		Sleep(30000);
		StopSequence(SeqActor);

		// Phase 3 – Finale (20 s)
		CurrentPhase = ECustomEventPhase::Phase3;
		LogInfo("EventHandler: [Phase3] Finale.");

		SeqActor = PlaySequence(SequencePath_Phase3);
		BroadcastSound(SoundPath_Finale);
		Sleep(20000);
		StopSequence(SeqActor);

		// Phase: Event End – restore players, clear countdown state
		CurrentPhase = ECustomEventPhase::EventEnd;
		LogInfo("EventHandler: [EventEnd] Restoring players.");

		SetAllPlayersLocked(false);

		AFortGameStateAthena* GS = Globals::GetGameState();
		if (GS)
		{
			GS->bIsInCountdown      = false;
			GS->bIsInFinalCountdown = false;
		}

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
