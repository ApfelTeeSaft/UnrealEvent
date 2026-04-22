// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_OnActiveWidgetChangedDelegate_generated_h
#error "OnActiveWidgetChangedDelegate.generated.h already included, missing '#pragma once' in OnActiveWidgetChangedDelegate.h"
#endif
#define COMMONUI_OnActiveWidgetChangedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnActiveWidgetChangedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventOnActiveWidgetChanged_Parms \
{ \
	UWidget* ActiveWidget; \
	int32 ActiveWidgetIndex; \
}; \
static inline void FOnActiveWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnActiveWidgetChanged, UWidget* ActiveWidget, int32 ActiveWidgetIndex) \
{ \
	_Script_CommonUI_eventOnActiveWidgetChanged_Parms Parms; \
	Parms.ActiveWidget=ActiveWidget; \
	Parms.ActiveWidgetIndex=ActiveWidgetIndex; \
	OnActiveWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnActiveWidgetChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
