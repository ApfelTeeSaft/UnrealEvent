// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_CommonWidgetGroupBase_generated_h
#error "CommonWidgetGroupBase.generated.h already included, missing '#pragma once' in CommonWidgetGroupBase.h"
#endif
#define COMMONUI_CommonWidgetGroupBase_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddWidget(Z_Param_InWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveWidget(Z_Param_InWidget); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddWidget(Z_Param_InWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveWidget(Z_Param_InWidget); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetGroupBase(); \
	friend struct Z_Construct_UClass_UCommonWidgetGroupBase_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetGroupBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetGroupBase)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetGroupBase(); \
	friend struct Z_Construct_UClass_UCommonWidgetGroupBase_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetGroupBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetGroupBase)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetGroupBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetGroupBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetGroupBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetGroupBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetGroupBase(UCommonWidgetGroupBase&&); \
	NO_API UCommonWidgetGroupBase(const UCommonWidgetGroupBase&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetGroupBase(UCommonWidgetGroupBase&&); \
	NO_API UCommonWidgetGroupBase(const UCommonWidgetGroupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetGroupBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetGroupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonWidgetGroupBase)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_8_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetGroupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
