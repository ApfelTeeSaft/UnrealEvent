// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonRotator_generated_h
#error "CommonRotator.generated.h already included, missing '#pragma once' in CommonRotator.h"
#endif
#define COMMONUI_CommonRotator_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectedIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSelectedText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopulateTextLabels) \
	{ \
		P_GET_TARRAY(FText,Z_Param_Labels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopulateTextLabels(Z_Param_Labels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedItem(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftTextLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftTextLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftTextRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftTextRight(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSelectedText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopulateTextLabels) \
	{ \
		P_GET_TARRAY(FText,Z_Param_Labels); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopulateTextLabels(Z_Param_Labels); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedItem(Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftTextLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftTextLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShiftTextRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShiftTextRight(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonRotator(); \
	friend struct Z_Construct_UClass_UCommonRotator_Statics; \
public: \
	DECLARE_CLASS(UCommonRotator, UCommonButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonRotator)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCommonRotator(); \
	friend struct Z_Construct_UClass_UCommonRotator_Statics; \
public: \
	DECLARE_CLASS(UCommonRotator, UCommonButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonRotator)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonRotator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonRotator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonRotator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonRotator(UCommonRotator&&); \
	NO_API UCommonRotator(const UCommonRotator&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonRotator(UCommonRotator&&); \
	NO_API UCommonRotator(const UCommonRotator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonRotator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonRotator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonRotator)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyText() { return STRUCT_OFFSET(UCommonRotator, MyText); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_9_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonRotator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
