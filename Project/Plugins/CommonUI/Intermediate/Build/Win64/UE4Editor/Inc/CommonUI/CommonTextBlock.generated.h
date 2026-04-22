// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonTextStyle;
#ifdef COMMONUI_CommonTextBlock_generated_h
#error "CommonTextBlock.generated.h already included, missing '#pragma once' in CommonTextBlock.h"
#endif
#define COMMONUI_CommonTextBlock_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetScrollState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetScrollState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStyle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStyle(Z_Param_InStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextCase) \
	{ \
		P_GET_UBOOL(Z_Param_bUseAllCaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextCase(Z_Param_bUseAllCaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWrapTextWidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InWrapTextAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWrapTextWidth(Z_Param_InWrapTextAt); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetScrollState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetScrollState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStyle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStyle(Z_Param_InStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextCase) \
	{ \
		P_GET_UBOOL(Z_Param_bUseAllCaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextCase(Z_Param_bUseAllCaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWrapTextWidth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InWrapTextAt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWrapTextWidth(Z_Param_InWrapTextAt); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTextBlock(); \
	friend struct Z_Construct_UClass_UCommonTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonTextBlock, UTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextBlock) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTextBlock(); \
	friend struct Z_Construct_UClass_UCommonTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonTextBlock, UTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextBlock) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextBlock(UCommonTextBlock&&); \
	NO_API UCommonTextBlock(const UCommonTextBlock&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextBlock(UCommonTextBlock&&); \
	NO_API UCommonTextBlock(const UCommonTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Style() { return STRUCT_OFFSET(UCommonTextBlock, Style); } \
	FORCEINLINE static uint32 __PPO__ScrollStyle() { return STRUCT_OFFSET(UCommonTextBlock, ScrollStyle); } \
	FORCEINLINE static uint32 __PPO__bDisplayAllCaps() { return STRUCT_OFFSET(UCommonTextBlock, bDisplayAllCaps); } \
	FORCEINLINE static uint32 __PPO__bAutoCollapseWithEmptyText() { return STRUCT_OFFSET(UCommonTextBlock, bAutoCollapseWithEmptyText); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_11_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
