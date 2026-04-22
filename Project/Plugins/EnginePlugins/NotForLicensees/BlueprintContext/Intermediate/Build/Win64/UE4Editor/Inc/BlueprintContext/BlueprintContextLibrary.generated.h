// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USubsystem;
#ifdef BLUEPRINTCONTEXT_BlueprintContextLibrary_generated_h
#error "BlueprintContextLibrary.generated.h already included, missing '#pragma once' in BlueprintContextLibrary.h"
#endif
#define BLUEPRINTCONTEXT_BlueprintContextLibrary_generated_h

#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetContext) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubsystem**)Z_Param__Result=UBlueprintContextLibrary::GetContext(Z_Param_ContextObject,Z_Param_Class); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetContext) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ContextObject); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USubsystem**)Z_Param__Result=UBlueprintContextLibrary::GetContext(Z_Param_ContextObject,Z_Param_Class); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintContextLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintContextLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintContextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintContext"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintContextLibrary)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintContextLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintContextLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintContextLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintContext"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintContextLibrary)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintContextLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintContextLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintContextLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintContextLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintContextLibrary(UBlueprintContextLibrary&&); \
	NO_API UBlueprintContextLibrary(const UBlueprintContextLibrary&); \
public:


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintContextLibrary(UBlueprintContextLibrary&&); \
	NO_API UBlueprintContextLibrary(const UBlueprintContextLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintContextLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintContextLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintContextLibrary)


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_10_PROLOG
#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_INCLASS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EnginePlugins_NotForLicensees_BlueprintContext_Source_BlueprintContext_Public_BlueprintContextLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
