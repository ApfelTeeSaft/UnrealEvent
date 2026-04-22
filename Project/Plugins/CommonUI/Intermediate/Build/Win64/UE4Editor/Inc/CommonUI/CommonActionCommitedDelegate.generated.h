// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonActionCommitedDelegate_generated_h
#error "CommonActionCommitedDelegate.generated.h already included, missing '#pragma once' in CommonActionCommitedDelegate.h"
#endif
#define COMMONUI_CommonActionCommitedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionCommitedDelegate_h_5_DELEGATE \
struct _Script_CommonUI_eventCommonActionCommited_Parms \
{ \
	bool bPassThrough; \
}; \
static inline void FCommonActionCommited_DelegateWrapper(const FScriptDelegate& CommonActionCommited, bool& bPassThrough) \
{ \
	_Script_CommonUI_eventCommonActionCommited_Parms Parms; \
	Parms.bPassThrough=bPassThrough ? true : false; \
	CommonActionCommited.ProcessDelegate<UObject>(&Parms); \
	bPassThrough=Parms.bPassThrough; \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionCommitedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
