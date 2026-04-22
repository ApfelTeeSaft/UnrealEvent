// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_CommonWidgetStack_generated_h
#error "CommonWidgetStack.generated.h already included, missing '#pragma once' in CommonWidgetStack.h"
#endif
#define COMMONUI_CommonWidgetStack_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPopWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->PopWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushWidget(Z_Param_InWidget); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPopWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->PopWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_InWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushWidget(Z_Param_InWidget); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetStack(); \
	friend struct Z_Construct_UClass_UCommonWidgetStack_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetStack, UCommonWidgetSwitcher, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetStack) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetStack(); \
	friend struct Z_Construct_UClass_UCommonWidgetStack_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetStack, UCommonWidgetSwitcher, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetStack) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetStack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetStack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetStack(UCommonWidgetStack&&); \
	NO_API UCommonWidgetStack(const UCommonWidgetStack&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetStack(UCommonWidgetStack&&); \
	NO_API UCommonWidgetStack(const UCommonWidgetStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetStack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonWidgetStack)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_8_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
