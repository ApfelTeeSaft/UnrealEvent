// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FTimespan;
#ifdef COMMONUI_CommonDateTimeTextBlock_generated_h
#error "CommonDateTimeTextBlock.generated.h already included, missing '#pragma once' in CommonDateTimeTextBlock.h"
#endif
#define COMMONUI_CommonDateTimeTextBlock_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDateTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCountDownCompletionText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InCompletionText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCountDownCompletionText(Z_Param_InCompletionText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDateTimeValue) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_InDateTime); \
		P_GET_UBOOL(Z_Param_bShowAsCountdown); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDateTimeValue(Z_Param_InDateTime,Z_Param_bShowAsCountdown); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimespanValue) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimespanValue(Z_Param_InTimespan); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDateTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FDateTime*)Z_Param__Result=P_THIS->GetDateTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCountDownCompletionText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InCompletionText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCountDownCompletionText(Z_Param_InCompletionText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDateTimeValue) \
	{ \
		P_GET_STRUCT(FDateTime,Z_Param_InDateTime); \
		P_GET_UBOOL(Z_Param_bShowAsCountdown); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDateTimeValue(Z_Param_InDateTime,Z_Param_bShowAsCountdown); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimespanValue) \
	{ \
		P_GET_STRUCT(FTimespan,Z_Param_InTimespan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimespanValue(Z_Param_InTimespan); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonDateTimeTextBlock(); \
	friend struct Z_Construct_UClass_UCommonDateTimeTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonDateTimeTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonDateTimeTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCommonDateTimeTextBlock(); \
	friend struct Z_Construct_UClass_UCommonDateTimeTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonDateTimeTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonDateTimeTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonDateTimeTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonDateTimeTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonDateTimeTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonDateTimeTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonDateTimeTextBlock(UCommonDateTimeTextBlock&&); \
	NO_API UCommonDateTimeTextBlock(const UCommonDateTimeTextBlock&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonDateTimeTextBlock(UCommonDateTimeTextBlock&&); \
	NO_API UCommonDateTimeTextBlock(const UCommonDateTimeTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonDateTimeTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonDateTimeTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonDateTimeTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_8_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonDateTimeTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
