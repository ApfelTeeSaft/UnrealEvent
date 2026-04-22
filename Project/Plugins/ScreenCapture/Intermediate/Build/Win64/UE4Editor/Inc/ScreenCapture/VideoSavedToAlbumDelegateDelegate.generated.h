// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCREENCAPTURE_VideoSavedToAlbumDelegateDelegate_generated_h
#error "VideoSavedToAlbumDelegateDelegate.generated.h already included, missing '#pragma once' in VideoSavedToAlbumDelegateDelegate.h"
#endif
#define SCREENCAPTURE_VideoSavedToAlbumDelegateDelegate_generated_h

#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_VideoSavedToAlbumDelegateDelegate_h_5_DELEGATE \
struct _Script_ScreenCapture_eventVideoSavedToAlbumDelegate_Parms \
{ \
	bool bSuccess; \
	FString LocalFilePath; \
}; \
static inline void FVideoSavedToAlbumDelegate_DelegateWrapper(const FMulticastScriptDelegate& VideoSavedToAlbumDelegate, bool bSuccess, const FString& LocalFilePath) \
{ \
	_Script_ScreenCapture_eventVideoSavedToAlbumDelegate_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	Parms.LocalFilePath=LocalFilePath; \
	VideoSavedToAlbumDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_VideoSavedToAlbumDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
