// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntPoint;
class UTexture2D;
#ifdef SCREENCAPTURE_ScreenCaptureFinishedDelegateDelegate_generated_h
#error "ScreenCaptureFinishedDelegateDelegate.generated.h already included, missing '#pragma once' in ScreenCaptureFinishedDelegateDelegate.h"
#endif
#define SCREENCAPTURE_ScreenCaptureFinishedDelegateDelegate_generated_h

#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureFinishedDelegateDelegate_h_8_DELEGATE \
struct _Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms \
{ \
	bool bSuccess; \
	FString LocalFilePath; \
	FIntPoint VideoResolution; \
	UTexture2D* PreviewImage; \
}; \
static inline void FScreenCaptureFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ScreenCaptureFinishedDelegate, bool bSuccess, const FString& LocalFilePath, FIntPoint VideoResolution, UTexture2D* PreviewImage) \
{ \
	_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.LocalFilePath=LocalFilePath; \
	Parms.VideoResolution=VideoResolution; \
	Parms.PreviewImage=PreviewImage; \
	ScreenCaptureFinishedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureFinishedDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
