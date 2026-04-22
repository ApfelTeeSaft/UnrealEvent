// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef COMMONUI_CommonUILibrary_generated_h
#error "CommonUILibrary.generated.h already included, missing '#pragma once' in CommonUILibrary.h"
#endif
#define COMMONUI_CommonUILibrary_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindParentWidgetOfType) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_StartingWidget); \
		P_GET_OBJECT(UClass,Z_Param_Type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UCommonUILibrary::FindParentWidgetOfType(Z_Param_StartingWidget,Z_Param_Type); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindParentWidgetOfType) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_StartingWidget); \
		P_GET_OBJECT(UClass,Z_Param_Type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UCommonUILibrary::FindParentWidgetOfType(Z_Param_StartingWidget,Z_Param_Type); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUILibrary(); \
	friend struct Z_Construct_UClass_UCommonUILibrary_Statics; \
public: \
	DECLARE_CLASS(UCommonUILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUILibrary)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUILibrary(); \
	friend struct Z_Construct_UClass_UCommonUILibrary_Statics; \
public: \
	DECLARE_CLASS(UCommonUILibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUILibrary)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUILibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUILibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUILibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUILibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUILibrary(UCommonUILibrary&&); \
	NO_API UCommonUILibrary(const UCommonUILibrary&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUILibrary(UCommonUILibrary&&); \
	NO_API UCommonUILibrary(const UCommonUILibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUILibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUILibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUILibrary)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_9_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonUILibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
