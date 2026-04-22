// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonActionProgressSingleDelegate_generated_h
#error "CommonActionProgressSingleDelegate.generated.h already included, missing '#pragma once' in CommonActionProgressSingleDelegate.h"
#endif
#define COMMONUI_CommonActionProgressSingleDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionProgressSingleDelegate_h_5_DELEGATE \
struct _Script_CommonUI_eventCommonActionProgressSingle_Parms \
{ \
	float HeldPercent; \
}; \
static inline void FCommonActionProgressSingle_DelegateWrapper(const FScriptDelegate& CommonActionProgressSingle, float HeldPercent) \
{ \
	_Script_CommonUI_eventCommonActionProgressSingle_Parms Parms; \
	Parms.HeldPercent=HeldPercent; \
	CommonActionProgressSingle.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionProgressSingleDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
