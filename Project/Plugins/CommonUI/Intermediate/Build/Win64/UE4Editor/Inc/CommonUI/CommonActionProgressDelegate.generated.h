// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonActionProgressDelegate_generated_h
#error "CommonActionProgressDelegate.generated.h already included, missing '#pragma once' in CommonActionProgressDelegate.h"
#endif
#define COMMONUI_CommonActionProgressDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionProgressDelegate_h_5_DELEGATE \
struct _Script_CommonUI_eventCommonActionProgress_Parms \
{ \
	float HeldPercent; \
}; \
static inline void FCommonActionProgress_DelegateWrapper(const FMulticastScriptDelegate& CommonActionProgress, float HeldPercent) \
{ \
	_Script_CommonUI_eventCommonActionProgress_Parms Parms; \
	Parms.HeldPercent=HeldPercent; \
	CommonActionProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionProgressDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
