// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
#ifdef COMMONUI_CommonBorderStyle_generated_h
#error "CommonBorderStyle.generated.h already included, missing '#pragma once' in CommonBorderStyle.h"
#endif
#define COMMONUI_CommonBorderStyle_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBackgroundBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBackgroundBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBackgroundBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBackgroundBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonBorderStyle(); \
	friend struct Z_Construct_UClass_UCommonBorderStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonBorderStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonBorderStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCommonBorderStyle(); \
	friend struct Z_Construct_UClass_UCommonBorderStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonBorderStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonBorderStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonBorderStyle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonBorderStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonBorderStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBorderStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonBorderStyle(UCommonBorderStyle&&); \
	NO_API UCommonBorderStyle(const UCommonBorderStyle&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonBorderStyle(UCommonBorderStyle&&); \
	NO_API UCommonBorderStyle(const UCommonBorderStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonBorderStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonBorderStyle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonBorderStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_7_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonBorderStyle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
