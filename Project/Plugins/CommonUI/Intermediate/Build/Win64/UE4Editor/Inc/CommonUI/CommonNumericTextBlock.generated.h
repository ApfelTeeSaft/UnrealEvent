// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonNumericTextBlock;
enum class ECommonNumericType : uint8;
#ifdef COMMONUI_CommonNumericTextBlock_generated_h
#error "CommonNumericTextBlock.generated.h already included, missing '#pragma once' in CommonNumericTextBlock.h"
#endif
#define COMMONUI_CommonNumericTextBlock_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_15_DELEGATE \
struct CommonNumericTextBlock_eventOnInterpolationEnded_Parms \
{ \
	UCommonNumericTextBlock* NumericTextBlock; \
	bool HadCompleted; \
}; \
static inline void FOnInterpolationEnded_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationEnded, UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted) \
{ \
	CommonNumericTextBlock_eventOnInterpolationEnded_Parms Parms; \
	Parms.NumericTextBlock=NumericTextBlock; \
	Parms.HadCompleted=HadCompleted ? true : false; \
	OnInterpolationEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_14_DELEGATE \
struct CommonNumericTextBlock_eventOnOutro_Parms \
{ \
	UCommonNumericTextBlock* NumericTextBlock; \
}; \
static inline void FOnOutro_DelegateWrapper(const FMulticastScriptDelegate& OnOutro, UCommonNumericTextBlock* NumericTextBlock) \
{ \
	CommonNumericTextBlock_eventOnOutro_Parms Parms; \
	Parms.NumericTextBlock=NumericTextBlock; \
	OnOutro.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInterpolateToValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TargetValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaximumInterpolationDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumChangeRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutroOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InterpolateToValue(Z_Param_TargetValue,Z_Param_MaximumInterpolationDuration,Z_Param_MinimumChangeRate,Z_Param_OutroOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterpolatingNumericValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInterpolatingNumericValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumericType) \
	{ \
		P_GET_ENUM(ECommonNumericType,Z_Param_InNumericType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumericType(ECommonNumericType(Z_Param_InNumericType)); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInterpolateToValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TargetValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaximumInterpolationDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumChangeRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutroOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InterpolateToValue(Z_Param_TargetValue,Z_Param_MaximumInterpolationDuration,Z_Param_MinimumChangeRate,Z_Param_OutroOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterpolatingNumericValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInterpolatingNumericValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNumericType) \
	{ \
		P_GET_ENUM(ECommonNumericType,Z_Param_InNumericType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNumericType(ECommonNumericType(Z_Param_InNumericType)); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonNumericTextBlock(); \
	friend struct Z_Construct_UClass_UCommonNumericTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonNumericTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonNumericTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCommonNumericTextBlock(); \
	friend struct Z_Construct_UClass_UCommonNumericTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonNumericTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonNumericTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonNumericTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonNumericTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonNumericTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonNumericTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonNumericTextBlock(UCommonNumericTextBlock&&); \
	NO_API UCommonNumericTextBlock(const UCommonNumericTextBlock&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonNumericTextBlock(UCommonNumericTextBlock&&); \
	NO_API UCommonNumericTextBlock(const UCommonNumericTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonNumericTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonNumericTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonNumericTextBlock)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsPercentage() { return STRUCT_OFFSET(UCommonNumericTextBlock, IsPercentage); }


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_10_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
