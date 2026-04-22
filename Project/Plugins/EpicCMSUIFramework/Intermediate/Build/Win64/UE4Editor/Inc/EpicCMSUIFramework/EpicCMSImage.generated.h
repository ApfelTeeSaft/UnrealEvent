// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EPICCMSUIFRAMEWORK_EpicCMSImage_generated_h
#error "EpicCMSImage.generated.h already included, missing '#pragma once' in EpicCMSImage.h"
#endif
#define EPICCMSUIFRAMEWORK_EpicCMSImage_generated_h

#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMediaURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MediaUrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaURL(Z_Param_MediaUrl); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMediaURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MediaUrl); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMediaURL(Z_Param_MediaUrl); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEpicCMSImage(); \
	friend struct Z_Construct_UClass_UEpicCMSImage_Statics; \
public: \
	DECLARE_CLASS(UEpicCMSImage, UCommonLazyImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicCMSUIFramework"), NO_API) \
	DECLARE_SERIALIZER(UEpicCMSImage)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEpicCMSImage(); \
	friend struct Z_Construct_UClass_UEpicCMSImage_Statics; \
public: \
	DECLARE_CLASS(UEpicCMSImage, UCommonLazyImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicCMSUIFramework"), NO_API) \
	DECLARE_SERIALIZER(UEpicCMSImage)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEpicCMSImage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEpicCMSImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicCMSImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicCMSImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicCMSImage(UEpicCMSImage&&); \
	NO_API UEpicCMSImage(const UEpicCMSImage&); \
public:


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEpicCMSImage(UEpicCMSImage&&); \
	NO_API UEpicCMSImage(const UEpicCMSImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEpicCMSImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEpicCMSImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEpicCMSImage)


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingFailFallback() { return STRUCT_OFFSET(UEpicCMSImage, LoadingFailFallback); } \
	FORCEINLINE static uint32 __PPO__ExternalMedia() { return STRUCT_OFFSET(UEpicCMSImage, ExternalMedia); } \
	FORCEINLINE static uint32 __PPO__bDownloadingExternalMedia() { return STRUCT_OFFSET(UEpicCMSImage, bDownloadingExternalMedia); }


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_10_PROLOG
#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_INCLASS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EpicCMSUIFramework_Source_EpicCMSUIFramework_Public_EpicCMSImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
