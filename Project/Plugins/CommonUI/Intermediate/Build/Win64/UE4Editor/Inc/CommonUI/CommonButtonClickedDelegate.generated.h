// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
#ifdef COMMONUI_CommonButtonClickedDelegate_generated_h
#error "CommonButtonClickedDelegate.generated.h already included, missing '#pragma once' in CommonButtonClickedDelegate.h"
#endif
#define COMMONUI_CommonButtonClickedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonClickedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventCommonButtonClicked_Parms \
{ \
	UCommonButton* Button; \
}; \
static inline void FCommonButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& CommonButtonClicked, UCommonButton* Button) \
{ \
	_Script_CommonUI_eventCommonButtonClicked_Parms Parms; \
	Parms.Button=Button; \
	CommonButtonClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonClickedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
