// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UMaterialInterface;
class UTexture2D;
#ifdef COMMONUI_CommonLazyImage_generated_h
#error "CommonLazyImage.generated.h already included, missing '#pragma once' in CommonLazyImage.h"
#endif
#define COMMONUI_CommonLazyImage_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromLazyDisplayAsset) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_LazyObject); \
		P_GET_UBOOL(Z_Param_bMatchTextureSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromLazyDisplayAsset(Z_Param_Out_LazyObject,Z_Param_bMatchTextureSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromLazyMaterial) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UMaterialInterface>,Z_Param_Out_LazyMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromLazyMaterial(Z_Param_Out_LazyMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromLazyTexture) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_LazyTexture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromLazyTexture(Z_Param_Out_LazyTexture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialTextureParamName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TextureParamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialTextureParamName(Z_Param_TextureParamName); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromLazyDisplayAsset) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_LazyObject); \
		P_GET_UBOOL(Z_Param_bMatchTextureSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromLazyDisplayAsset(Z_Param_Out_LazyObject,Z_Param_bMatchTextureSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromLazyMaterial) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UMaterialInterface>,Z_Param_Out_LazyMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromLazyMaterial(Z_Param_Out_LazyMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrushFromLazyTexture) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_LazyTexture); \
		P_GET_UBOOL(Z_Param_bMatchSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrushFromLazyTexture(Z_Param_Out_LazyTexture,Z_Param_bMatchSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterialTextureParamName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_TextureParamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaterialTextureParamName(Z_Param_TextureParamName); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLazyImage(); \
	friend struct Z_Construct_UClass_UCommonLazyImage_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyImage)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLazyImage(); \
	friend struct Z_Construct_UClass_UCommonLazyImage_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyImage, UImage, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyImage)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLazyImage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyImage(UCommonLazyImage&&); \
	NO_API UCommonLazyImage(const UCommonLazyImage&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyImage(UCommonLazyImage&&); \
	NO_API UCommonLazyImage(const UCommonLazyImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonLazyImage)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingBackgroundBrush() { return STRUCT_OFFSET(UCommonLazyImage, LoadingBackgroundBrush); } \
	FORCEINLINE static uint32 __PPO__MaterialTextureParamName() { return STRUCT_OFFSET(UCommonLazyImage, MaterialTextureParamName); } \
	FORCEINLINE static uint32 __PPO__BP_OnLoadingStateChanged() { return STRUCT_OFFSET(UCommonLazyImage, BP_OnLoadingStateChanged); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_13_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
