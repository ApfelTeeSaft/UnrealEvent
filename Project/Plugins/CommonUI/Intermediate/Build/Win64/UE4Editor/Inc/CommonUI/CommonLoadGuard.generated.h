// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef COMMONUI_CommonLoadGuard_generated_h
#error "CommonLoadGuard.generated.h already included, missing '#pragma once' in CommonLoadGuard.h"
#endif
#define COMMONUI_CommonLoadGuard_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_20_DELEGATE \
struct CommonLoadGuard_eventOnAssetLoaded_Parms \
{ \
	UObject* Object; \
}; \
static inline void FOnAssetLoaded_DelegateWrapper(const FScriptDelegate& OnAssetLoaded, UObject* Object) \
{ \
	CommonLoadGuard_eventOnAssetLoaded_Parms Parms; \
	Parms.Object=Object; \
	OnAssetLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GuardAndLoadAsset) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_InLazyAsset); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnAssetLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GuardAndLoadAsset(Z_Param_Out_InLazyAsset,FOnAssetLoaded(Z_Param_Out_OnAssetLoaded)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsLoading) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsLoading); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsLoading(Z_Param_bInIsLoading); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoadingText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InLoadingText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLoadingText(Z_Param_Out_InLoadingText); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GuardAndLoadAsset) \
	{ \
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_InLazyAsset); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_OnAssetLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_GuardAndLoadAsset(Z_Param_Out_InLazyAsset,FOnAssetLoaded(Z_Param_Out_OnAssetLoaded)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsLoading) \
	{ \
		P_GET_UBOOL(Z_Param_bInIsLoading); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsLoading(Z_Param_bInIsLoading); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoadingText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InLoadingText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLoadingText(Z_Param_Out_InLoadingText); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLoadGuard(); \
	friend struct Z_Construct_UClass_UCommonLoadGuard_Statics; \
public: \
	DECLARE_CLASS(UCommonLoadGuard, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLoadGuard) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLoadGuard(); \
	friend struct Z_Construct_UClass_UCommonLoadGuard_Statics; \
public: \
	DECLARE_CLASS(UCommonLoadGuard, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLoadGuard) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLoadGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLoadGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLoadGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLoadGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLoadGuard(UCommonLoadGuard&&); \
	NO_API UCommonLoadGuard(const UCommonLoadGuard&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLoadGuard(UCommonLoadGuard&&); \
	NO_API UCommonLoadGuard(const UCommonLoadGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLoadGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLoadGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonLoadGuard)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingBackgroundBrush() { return STRUCT_OFFSET(UCommonLoadGuard, LoadingBackgroundBrush); } \
	FORCEINLINE static uint32 __PPO__ThrobberAlignment() { return STRUCT_OFFSET(UCommonLoadGuard, ThrobberAlignment); } \
	FORCEINLINE static uint32 __PPO__ThrobberPadding() { return STRUCT_OFFSET(UCommonLoadGuard, ThrobberPadding); } \
	FORCEINLINE static uint32 __PPO__LoadingText() { return STRUCT_OFFSET(UCommonLoadGuard, LoadingText); } \
	FORCEINLINE static uint32 __PPO__TextStyle() { return STRUCT_OFFSET(UCommonLoadGuard, TextStyle); } \
	FORCEINLINE static uint32 __PPO__BP_OnLoadingStateChanged() { return STRUCT_OFFSET(UCommonLoadGuard, BP_OnLoadingStateChanged); } \
	FORCEINLINE static uint32 __PPO__SpinnerMaterialPath() { return STRUCT_OFFSET(UCommonLoadGuard, SpinnerMaterialPath); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_16_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
