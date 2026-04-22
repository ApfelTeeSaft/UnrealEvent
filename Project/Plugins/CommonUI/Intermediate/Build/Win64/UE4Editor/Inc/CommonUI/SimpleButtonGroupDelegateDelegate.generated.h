// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonButton;
#ifdef COMMONUI_SimpleButtonGroupDelegateDelegate_generated_h
#error "SimpleButtonGroupDelegateDelegate.generated.h already included, missing '#pragma once' in SimpleButtonGroupDelegateDelegate.h"
#endif
#define COMMONUI_SimpleButtonGroupDelegateDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_SimpleButtonGroupDelegateDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventSimpleButtonGroupDelegate_Parms \
{ \
	UCommonButton* AssociatedButton; \
	int32 ButtonIndex; \
}; \
static inline void FSimpleButtonGroupDelegate_DelegateWrapper(const FMulticastScriptDelegate& SimpleButtonGroupDelegate, UCommonButton* AssociatedButton, int32 ButtonIndex) \
{ \
	_Script_CommonUI_eventSimpleButtonGroupDelegate_Parms Parms; \
	Parms.AssociatedButton=AssociatedButton; \
	Parms.ButtonIndex=ButtonIndex; \
	SimpleButtonGroupDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_SimpleButtonGroupDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
