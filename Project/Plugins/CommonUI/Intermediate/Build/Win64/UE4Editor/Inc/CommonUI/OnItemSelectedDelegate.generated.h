// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef COMMONUI_OnItemSelectedDelegate_generated_h
#error "OnItemSelectedDelegate.generated.h already included, missing '#pragma once' in OnItemSelectedDelegate.h"
#endif
#define COMMONUI_OnItemSelectedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnItemSelectedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventOnItemSelected_Parms \
{ \
	UUserWidget* Widget; \
	bool Selected; \
}; \
static inline void FOnItemSelected_DelegateWrapper(const FScriptDelegate& OnItemSelected, UUserWidget* Widget, bool Selected) \
{ \
	_Script_CommonUI_eventOnItemSelected_Parms Parms; \
	Parms.Widget=Widget; \
	Parms.Selected=Selected ? true : false; \
	OnItemSelected.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnItemSelectedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
