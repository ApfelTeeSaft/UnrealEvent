// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef COMMONUI_CommonLazyWidget_generated_h
#error "CommonLazyWidget.generated.h already included, missing '#pragma once' in CommonLazyWidget.h"
#endif
#define COMMONUI_CommonLazyWidget_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLazyContent) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UUserWidget> ,Z_Param_SoftWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLazyContent(Z_Param_SoftWidget); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLoading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLazyContent) \
	{ \
		P_GET_SOFTCLASS(TSoftClassPtr<UUserWidget> ,Z_Param_SoftWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLazyContent(Z_Param_SoftWidget); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonLazyWidget(); \
	friend struct Z_Construct_UClass_UCommonLazyWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCommonLazyWidget(); \
	friend struct Z_Construct_UClass_UCommonLazyWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonLazyWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonLazyWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonLazyWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonLazyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyWidget(UCommonLazyWidget&&); \
	NO_API UCommonLazyWidget(const UCommonLazyWidget&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonLazyWidget(UCommonLazyWidget&&); \
	NO_API UCommonLazyWidget(const UCommonLazyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonLazyWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonLazyWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonLazyWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LoadingBackgroundBrush() { return STRUCT_OFFSET(UCommonLazyWidget, LoadingBackgroundBrush); } \
	FORCEINLINE static uint32 __PPO__Content() { return STRUCT_OFFSET(UCommonLazyWidget, Content); } \
	FORCEINLINE static uint32 __PPO__BP_OnLoadingStateChanged() { return STRUCT_OFFSET(UCommonLazyWidget, BP_OnLoadingStateChanged); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_10_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonLazyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
