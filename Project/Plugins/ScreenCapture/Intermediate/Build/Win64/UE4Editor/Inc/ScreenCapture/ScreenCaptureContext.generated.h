// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UScreenCaptureContext;
#ifdef SCREENCAPTURE_ScreenCaptureContext_generated_h
#error "ScreenCaptureContext.generated.h already included, missing '#pragma once' in ScreenCaptureContext.h"
#endif
#define SCREENCAPTURE_ScreenCaptureContext_generated_h

#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateScreenCaptureContext) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UScreenCaptureContext**)Z_Param__Result=UScreenCaptureContext::CreateScreenCaptureContext(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LocalFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveFile(Z_Param_LocalFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveToAlbum) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LocalFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveToAlbum(Z_Param_LocalFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCapture) \
	{ \
		P_GET_UBOOL(Z_Param_bInRecordAppAudio); \
		P_GET_UBOOL(Z_Param_bGeneratePreviewImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCapture(Z_Param_bInRecordAppAudio,Z_Param_bGeneratePreviewImage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCapture) \
	{ \
		P_GET_UBOOL(Z_Param_bIsCaptureInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCapture(Z_Param_bIsCaptureInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeScreenshot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeScreenshot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleMicrophoneRecording) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableMicrophone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleMicrophoneRecording(Z_Param_bEnableMicrophone); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateScreenCaptureContext) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UScreenCaptureContext**)Z_Param__Result=UScreenCaptureContext::CreateScreenCaptureContext(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRecording(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LocalFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveFile(Z_Param_LocalFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveToAlbum) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LocalFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SaveToAlbum(Z_Param_LocalFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCapture) \
	{ \
		P_GET_UBOOL(Z_Param_bInRecordAppAudio); \
		P_GET_UBOOL(Z_Param_bGeneratePreviewImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCapture(Z_Param_bInRecordAppAudio,Z_Param_bGeneratePreviewImage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCapture) \
	{ \
		P_GET_UBOOL(Z_Param_bIsCaptureInterrupted); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCapture(Z_Param_bIsCaptureInterrupted); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeScreenshot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeScreenshot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleMicrophoneRecording) \
	{ \
		P_GET_UBOOL(Z_Param_bEnableMicrophone); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleMicrophoneRecording(Z_Param_bEnableMicrophone); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenCaptureContext(); \
	friend struct Z_Construct_UClass_UScreenCaptureContext_Statics; \
public: \
	DECLARE_CLASS(UScreenCaptureContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScreenCapture"), NO_API) \
	DECLARE_SERIALIZER(UScreenCaptureContext)


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUScreenCaptureContext(); \
	friend struct Z_Construct_UClass_UScreenCaptureContext_Statics; \
public: \
	DECLARE_CLASS(UScreenCaptureContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScreenCapture"), NO_API) \
	DECLARE_SERIALIZER(UScreenCaptureContext)


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenCaptureContext(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenCaptureContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenCaptureContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenCaptureContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenCaptureContext(UScreenCaptureContext&&); \
	NO_API UScreenCaptureContext(const UScreenCaptureContext&); \
public:


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenCaptureContext(UScreenCaptureContext&&); \
	NO_API UScreenCaptureContext(const UScreenCaptureContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenCaptureContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenCaptureContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenCaptureContext)


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PreviewImage() { return STRUCT_OFFSET(UScreenCaptureContext, PreviewImage); }


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_13_PROLOG
#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_INCLASS \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_ScreenCapture_Source_ScreenCapture_Public_ScreenCaptureContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
