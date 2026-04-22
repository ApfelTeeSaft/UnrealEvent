// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_CommonWidgetCarousel_generated_h
#error "CommonWidgetCarousel.generated.h already included, missing '#pragma once' in CommonWidgetCarousel.h"
#endif
#define COMMONUI_CommonWidgetCarousel_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginAutoScrolling) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginAutoScrolling(Z_Param_ScrollInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAutoScrolling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndAutoScrolling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveWidgetIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidgetIndex(Z_Param_Index); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginAutoScrolling) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollInterval); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginAutoScrolling(Z_Param_ScrollInterval); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndAutoScrolling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndAutoScrolling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActiveWidgetIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetActiveWidgetIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetAtIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetWidgetAtIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreviousPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreviousPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActiveWidgetIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActiveWidgetIndex(Z_Param_Index); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarousel(); \
	friend struct Z_Construct_UClass_UCommonWidgetCarousel_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetCarousel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetCarousel)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCommonWidgetCarousel(); \
	friend struct Z_Construct_UClass_UCommonWidgetCarousel_Statics; \
public: \
	DECLARE_CLASS(UCommonWidgetCarousel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonWidgetCarousel)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonWidgetCarousel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonWidgetCarousel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetCarousel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarousel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetCarousel(UCommonWidgetCarousel&&); \
	NO_API UCommonWidgetCarousel(const UCommonWidgetCarousel&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonWidgetCarousel(UCommonWidgetCarousel&&); \
	NO_API UCommonWidgetCarousel(const UCommonWidgetCarousel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonWidgetCarousel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonWidgetCarousel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonWidgetCarousel)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_10_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonWidgetCarousel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
