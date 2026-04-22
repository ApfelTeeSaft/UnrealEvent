// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EPICCMSUIFRAMEWORK_OnCMSTileConfirmedDelegate_generated_h
#error "OnCMSTileConfirmedDelegate.generated.h already included, missing '#pragma once' in OnCMSTileConfirmedDelegate.h"
#endif
#define EPICCMSUIFRAMEWORK_OnCMSTileConfirmedDelegate_generated_h

#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_OnCMSTileConfirmedDelegate_h_5_DELEGATE \
struct _Script_EpicCMSUIFramework_eventOnCMSTileConfirmed_Parms \
{ \
	bool bSuccess; \
}; \
static inline void FOnCMSTileConfirmed_DelegateWrapper(const FMulticastScriptDelegate& OnCMSTileConfirmed, bool bSuccess) \
{ \
	_Script_EpicCMSUIFramework_eventOnCMSTileConfirmed_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	OnCMSTileConfirmed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_OnCMSTileConfirmedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
