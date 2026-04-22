// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
#ifdef COMMONUI_CommonSelectedStateChangedDelegate_generated_h
#error "CommonSelectedStateChangedDelegate.generated.h already included, missing '#pragma once' in CommonSelectedStateChangedDelegate.h"
#endif
#define COMMONUI_CommonSelectedStateChangedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonSelectedStateChangedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventCommonSelectedStateChanged_Parms \
{ \
	UCommonButton* Button; \
	bool Selected; \
}; \
static inline void FCommonSelectedStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CommonSelectedStateChanged, UCommonButton* Button, bool Selected) \
{ \
	_Script_CommonUI_eventCommonSelectedStateChanged_Parms Parms; \
	Parms.Button=Button; \
	Parms.Selected=Selected ? true : false; \
	CommonSelectedStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonSelectedStateChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
