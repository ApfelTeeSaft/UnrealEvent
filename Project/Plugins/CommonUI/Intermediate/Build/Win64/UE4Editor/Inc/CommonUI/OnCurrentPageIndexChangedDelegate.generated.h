// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonWidgetCarousel;
#ifdef COMMONUI_OnCurrentPageIndexChangedDelegate_generated_h
#error "OnCurrentPageIndexChangedDelegate.generated.h already included, missing '#pragma once' in OnCurrentPageIndexChangedDelegate.h"
#endif
#define COMMONUI_OnCurrentPageIndexChangedDelegate_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnCurrentPageIndexChangedDelegate_h_7_DELEGATE \
struct _Script_CommonUI_eventOnCurrentPageIndexChanged_Parms \
{ \
	UCommonWidgetCarousel* CarouselWidget; \
	int32 CurrentPageIndex; \
}; \
static inline void FOnCurrentPageIndexChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentPageIndexChanged, UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex) \
{ \
	_Script_CommonUI_eventOnCurrentPageIndexChanged_Parms Parms; \
	Parms.CarouselWidget=CarouselWidget; \
	Parms.CurrentPageIndex=CurrentPageIndex; \
	OnCurrentPageIndexChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_OnCurrentPageIndexChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
