// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUINavigation : uint8;
#ifdef COMMONUI_CommonCustomNavigation_generated_h
#error "CommonCustomNavigation.generated.h already included, missing '#pragma once' in CommonCustomNavigation.h"
#endif
#define COMMONUI_CommonCustomNavigation_generated_h

#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_11_DELEGATE \
struct CommonCustomNavigation_eventOnCustomNavigationEvent_Parms \
{ \
	EUINavigation NavigationType; \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	CommonCustomNavigation_eventOnCustomNavigationEvent_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FOnCustomNavigationEvent_DelegateWrapper(const FScriptDelegate& OnCustomNavigationEvent, EUINavigation NavigationType) \
{ \
	CommonCustomNavigation_eventOnCustomNavigationEvent_Parms Parms; \
	Parms.NavigationType=NavigationType; \
	OnCustomNavigationEvent.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_RPC_WRAPPERS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonCustomNavigation(); \
	friend struct Z_Construct_UClass_UCommonCustomNavigation_Statics; \
public: \
	DECLARE_CLASS(UCommonCustomNavigation, UBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonCustomNavigation) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCommonCustomNavigation(); \
	friend struct Z_Construct_UClass_UCommonCustomNavigation_Statics; \
public: \
	DECLARE_CLASS(UCommonCustomNavigation, UBorder, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonCustomNavigation) \
	static const TCHAR* StaticConfigName() {return TEXT("CommonUI");} \



#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonCustomNavigation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonCustomNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonCustomNavigation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonCustomNavigation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonCustomNavigation(UCommonCustomNavigation&&); \
	NO_API UCommonCustomNavigation(const UCommonCustomNavigation&); \
public:


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonCustomNavigation(UCommonCustomNavigation&&); \
	NO_API UCommonCustomNavigation(const UCommonCustomNavigation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonCustomNavigation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonCustomNavigation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonCustomNavigation)


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_7_PROLOG
#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_INCLASS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_CommonUI_Source_CommonUI_Public_CommonCustomNavigation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
