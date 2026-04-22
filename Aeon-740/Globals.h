#pragma once
#include "framework.h"

namespace Globals
{
	static bool bPlaylistSetup   = false;
	static bool bListening       = false;
	static bool bMcp             = false;
	static bool bEventScheduled  = false;  // Guards EventHandler::BeginEvent() against duplicate calls

	UWorld* GetWorld()
	{
		return UEngine::GetEngine()->GameViewport->World;
	}

	AFortGameModeAthena* GetGameMode()
	{
		return static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
	}

	AFortGameStateAthena* GetGameState()
	{
		return static_cast<AFortGameStateAthena*>(GetWorld()->GameState);
	}
}