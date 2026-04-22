// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_OnLoadGuardStateChangedDynamicDelegate_generated_h
#error "OnLoadGuardStateChangedDynamicDelegate.generated.h already included, missing '#pragma once' in OnLoadGuardStateChangedDynamicDelegate.h"
#endif
#define COMMONUI_OnLoadGuardStateChangedDynamicDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnLoadGuardStateChangedDynamicDelegate_h_5_DELEGATE \
struct _Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms \
{ \
	bool bIsLoading; \
}; \
static inline void FOnLoadGuardStateChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnLoadGuardStateChangedDynamic, bool bIsLoading) \
{ \
	_Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms Parms; \
	Parms.bIsLoading=bIsLoading ? true : false; \
	OnLoadGuardStateChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnLoadGuardStateChangedDynamicDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
