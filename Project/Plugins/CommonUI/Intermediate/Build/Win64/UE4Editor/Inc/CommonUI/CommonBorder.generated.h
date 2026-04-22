// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonBorderStyle;
#ifdef COMMONUI_CommonBorder_generated_h
#error "CommonBorder.generated.h already included, missing '#pragma once' in CommonBorder.h"
#endif
#define COMMONUI_CommonBorder_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStyle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStyle(Z_Param_InStyle); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStyle) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStyle(Z_Param_InStyle); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonBorder(); \
	friend struct Z_Construct_UClass_UCommonBorder_Statics; \
public: \
	DECLARE_CLASS(UCommonBorder, UBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonBorder) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCommonBorder(); \
	friend struct Z_Construct_UClass_UCommonBorder_Statics; \
public: \
	DECLARE_CLASS(UCommonBorder, UBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonBorder) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonBorder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonBorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonBorder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonBorder(UCommonBorder&&); \
	NO_API UCommonBorder(const UCommonBorder&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonBorder(UCommonBorder&&); \
	NO_API UCommonBorder(const UCommonBorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonBorder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonBorder)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_11_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
