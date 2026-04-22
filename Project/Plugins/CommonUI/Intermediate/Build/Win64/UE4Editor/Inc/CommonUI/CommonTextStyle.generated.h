// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateFontInfo;
struct FMargin;
struct FVector2D;
struct FSlateBrush;
#ifdef COMMONUI_CommonTextStyle_generated_h
#error "CommonTextStyle.generated.h already included, missing '#pragma once' in CommonTextStyle.h"
#endif
#define COMMONUI_CommonTextStyle_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetColor(Z_Param_Out_OutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFont) \
	{ \
		P_GET_STRUCT_REF(FSlateFontInfo,Z_Param_Out_OutFont); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFont(Z_Param_Out_OutFont); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLineHeightPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLineHeightPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMargin) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutMargin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMargin(Z_Param_Out_OutMargin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetShadowColor(Z_Param_Out_OutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowOffset) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetShadowOffset(Z_Param_Out_OutShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStrikeBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_OutStrikeBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStrikeBrush(Z_Param_Out_OutStrikeBrush); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetColor(Z_Param_Out_OutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFont) \
	{ \
		P_GET_STRUCT_REF(FSlateFontInfo,Z_Param_Out_OutFont); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetFont(Z_Param_Out_OutFont); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLineHeightPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLineHeightPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMargin) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutMargin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMargin(Z_Param_Out_OutMargin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowColor) \
	{ \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetShadowColor(Z_Param_Out_OutColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShadowOffset) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetShadowOffset(Z_Param_Out_OutShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStrikeBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_OutStrikeBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetStrikeBrush(Z_Param_Out_OutStrikeBrush); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonTextStyle(); \
	friend struct Z_Construct_UClass_UCommonTextStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonTextStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCommonTextStyle(); \
	friend struct Z_Construct_UClass_UCommonTextStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonTextStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonTextStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonTextStyle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonTextStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextStyle(UCommonTextStyle&&); \
	NO_API UCommonTextStyle(const UCommonTextStyle&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonTextStyle(UCommonTextStyle&&); \
	NO_API UCommonTextStyle(const UCommonTextStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonTextStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonTextStyle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonTextStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_11_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonTextStyle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
