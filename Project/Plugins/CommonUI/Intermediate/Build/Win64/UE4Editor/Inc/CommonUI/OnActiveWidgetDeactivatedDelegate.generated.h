// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatablePanel;
#ifdef COMMONUI_OnActiveWidgetDeactivatedDelegate_generated_h
#error "OnActiveWidgetDeactivatedDelegate.generated.h already included, missing '#pragma once' in OnActiveWidgetDeactivatedDelegate.h"
#endif
#define COMMONUI_OnActiveWidgetDeactivatedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnActiveWidgetDeactivatedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventOnActiveWidgetDeactivated_Parms \
{ \
	UCommonActivatablePanel* DeactivatedWidget; \
}; \
static inline void FOnActiveWidgetDeactivated_DelegateWrapper(const FMulticastScriptDelegate& OnActiveWidgetDeactivated, UCommonActivatablePanel* DeactivatedWidget) \
{ \
	_Script_CommonUI_eventOnActiveWidgetDeactivated_Parms Parms; \
	Parms.DeactivatedWidget=DeactivatedWidget; \
	OnActiveWidgetDeactivated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnActiveWidgetDeactivatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
