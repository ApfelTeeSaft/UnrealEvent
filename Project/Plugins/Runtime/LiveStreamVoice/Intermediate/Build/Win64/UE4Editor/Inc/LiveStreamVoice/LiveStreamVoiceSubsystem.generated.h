// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVoiceSettings;
#ifdef LIVESTREAMVOICE_LiveStreamVoiceSubsystem_generated_h
#error "LiveStreamVoiceSubsystem.generated.h already included, missing '#pragma once' in LiveStreamVoiceSubsystem.h"
#endif
#define LIVESTREAMVOICE_LiveStreamVoiceSubsystem_generated_h

#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearVoiceSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearVoiceSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLocalVoiceProcessing) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocalUserNum); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableLocalVoiceProcessing(Z_Param_LocalUserNum,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoiceSettings) \
	{ \
		P_GET_STRUCT_REF(FVoiceSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVoiceSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearVoiceSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearVoiceSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableLocalVoiceProcessing) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_LocalUserNum); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableLocalVoiceProcessing(Z_Param_LocalUserNum,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoiceSettings) \
	{ \
		P_GET_STRUCT_REF(FVoiceSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVoiceSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveStreamVoiceSubsystem(); \
	friend struct Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULiveStreamVoiceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreamVoice"), NO_API) \
	DECLARE_SERIALIZER(ULiveStreamVoiceSubsystem)


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_INCLASS \
private: \
	static void StaticRegisterNativesULiveStreamVoiceSubsystem(); \
	friend struct Z_Construct_UClass_ULiveStreamVoiceSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULiveStreamVoiceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveStreamVoice"), NO_API) \
	DECLARE_SERIALIZER(ULiveStreamVoiceSubsystem)


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveStreamVoiceSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveStreamVoiceSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveStreamVoiceSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveStreamVoiceSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveStreamVoiceSubsystem(ULiveStreamVoiceSubsystem&&); \
	NO_API ULiveStreamVoiceSubsystem(const ULiveStreamVoiceSubsystem&); \
public:


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveStreamVoiceSubsystem(ULiveStreamVoiceSubsystem&&); \
	NO_API ULiveStreamVoiceSubsystem(const ULiveStreamVoiceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveStreamVoiceSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveStreamVoiceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveStreamVoiceSubsystem)


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaybackSettings() { return STRUCT_OFFSET(ULiveStreamVoiceSubsystem, PlaybackSettings); }


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_7_PROLOG
#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_INCLASS \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_Runtime_LiveStreamVoice_Source_LiveStreamVoice_Public_LiveStreamVoiceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
