// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_OnRotatedDelegate_generated_h
#error "OnRotatedDelegate.generated.h already included, missing '#pragma once' in OnRotatedDelegate.h"
#endif
#define COMMONUI_OnRotatedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnRotatedDelegate_h_5_DELEGATE \
struct _Script_CommonUI_eventOnRotated_Parms \
{ \
	int32 Value; \
}; \
static inline void FOnRotated_DelegateWrapper(const FMulticastScriptDelegate& OnRotated, int32 Value) \
{ \
	_Script_CommonUI_eventOnRotated_Parms Parms; \
	Parms.Value=Value; \
	OnRotated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnRotatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
