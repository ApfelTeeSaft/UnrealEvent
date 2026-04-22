// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef COMMONUI_OnItemClickedDelegate_generated_h
#error "OnItemClickedDelegate.generated.h already included, missing '#pragma once' in OnItemClickedDelegate.h"
#endif
#define COMMONUI_OnItemClickedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnItemClickedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventOnItemClicked_Parms \
{ \
	UUserWidget* Widget; \
}; \
static inline void FOnItemClicked_DelegateWrapper(const FScriptDelegate& OnItemClicked, UUserWidget* Widget) \
{ \
	_Script_CommonUI_eventOnItemClicked_Parms Parms; \
	Parms.Widget=Widget; \
	OnItemClicked.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnItemClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
