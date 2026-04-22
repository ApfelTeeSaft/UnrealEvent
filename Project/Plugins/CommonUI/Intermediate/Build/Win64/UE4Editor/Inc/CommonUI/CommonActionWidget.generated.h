// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
struct FDataTableRowHandle;
#ifdef COMMONUI_CommonActionWidget_generated_h
#error "CommonActionWidget.generated.h already included, missing '#pragma once' in CommonActionWidget.h"
#endif
#define COMMONUI_CommonActionWidget_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_16_DELEGATE \
struct CommonActionWidget_eventOnInputMethodChanged_Parms \
{ \
	bool bUsingGamepad; \
}; \
static inline void FOnInputMethodChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInputMethodChanged, bool bUsingGamepad) \
{ \
	CommonActionWidget_eventOnInputMethodChanged_Parms Parms; \
	Parms.bUsingGamepad=bUsingGamepad ? true : false; \
	OnInputMethodChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisplayText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIcon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetIcon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeldAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHeldAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconRimBrush) \
	{ \
		P_GET_STRUCT(FSlateBrush,Z_Param_InIconRimBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIconRimBrush(Z_Param_InIconRimBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputAction) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputAction(Z_Param_InputActionRow); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisplayText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIcon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=P_THIS->GetIcon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHeldAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHeldAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconRimBrush) \
	{ \
		P_GET_STRUCT(FSlateBrush,Z_Param_InIconRimBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIconRimBrush(Z_Param_InIconRimBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputAction) \
	{ \
		P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputActionRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputAction(Z_Param_InputActionRow); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonActionWidget(); \
	friend struct Z_Construct_UClass_UCommonActionWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonActionWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActionWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCommonActionWidget(); \
	friend struct Z_Construct_UClass_UCommonActionWidget_Statics; \
public: \
	DECLARE_CLASS(UCommonActionWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActionWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActionWidget(UCommonActionWidget&&); \
	NO_API UCommonActionWidget(const UCommonActionWidget&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActionWidget(UCommonActionWidget&&); \
	NO_API UCommonActionWidget(const UCommonActionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonActionWidget)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProgressDynamicMaterial() { return STRUCT_OFFSET(UCommonActionWidget, ProgressDynamicMaterial); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_12_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonActionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
