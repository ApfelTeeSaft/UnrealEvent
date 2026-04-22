// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
struct FSlateBrush;
class UCommonTextStyle;
#ifdef COMMONUI_CommonButtonStyle_generated_h
#error "CommonButtonStyle.generated.h already included, missing '#pragma once' in CommonButtonStyle.h"
#endif
#define COMMONUI_CommonButtonStyle_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetButtonPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutButtonPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetButtonPadding(Z_Param_Out_OutButtonPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutCustomPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCustomPadding(Z_Param_Out_OutCustomPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisabledBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetDisabledBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisabledTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetDisabledTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMaterialBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalBaseBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormalBaseBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalHoveredBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormalHoveredBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalHoveredTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetNormalHoveredTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalPressedBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormalPressedBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetNormalTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedBaseBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectedBaseBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedHoveredBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectedHoveredBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedHoveredTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetSelectedHoveredTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedPressedBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectedPressedBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetSelectedTextStyle(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetButtonPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutButtonPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetButtonPadding(Z_Param_Out_OutButtonPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutCustomPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCustomPadding(Z_Param_Out_OutCustomPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisabledBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetDisabledBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisabledTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetDisabledTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMaterialBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalBaseBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormalBaseBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalHoveredBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormalHoveredBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalHoveredTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetNormalHoveredTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalPressedBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetNormalPressedBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetNormalTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedBaseBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectedBaseBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedHoveredBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectedHoveredBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedHoveredTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetSelectedHoveredTextStyle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedPressedBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSelectedPressedBrush(Z_Param_Out_Brush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedTextStyle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetSelectedTextStyle(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonButtonStyle(); \
	friend struct Z_Construct_UClass_UCommonButtonStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCommonButtonStyle(); \
	friend struct Z_Construct_UClass_UCommonButtonStyle_Statics; \
public: \
	DECLARE_CLASS(UCommonButtonStyle, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonButtonStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonButtonStyle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonButtonStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonStyle(UCommonButtonStyle&&); \
	NO_API UCommonButtonStyle(const UCommonButtonStyle&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonButtonStyle(UCommonButtonStyle&&); \
	NO_API UCommonButtonStyle(const UCommonButtonStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonButtonStyle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonButtonStyle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonButtonStyle)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_13_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonButtonStyle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
