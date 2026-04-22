// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayStatTag;
#ifdef EPICGAMEPLAYSTATSRUNTIME_BlueprintGameplayStatsLibrary_generated_h
#error "BlueprintGameplayStatsLibrary.generated.h already included, missing '#pragma once' in BlueprintGameplayStatsLibrary.h"
#endif
#define EPICGAMEPLAYSTATSRUNTIME_BlueprintGameplayStatsLibrary_generated_h

#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEqualEqual_GameplayStatTagGameplayStatTag) \
	{ \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayStatsLibrary::EqualEqual_GameplayStatTagGameplayStatTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayStatTagGameplayStatTag) \
	{ \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayStatsLibrary::NotEqual_GameplayStatTagGameplayStatTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEqualEqual_GameplayStatTagGameplayStatTag) \
	{ \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayStatsLibrary::EqualEqual_GameplayStatTagGameplayStatTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayStatTagGameplayStatTag) \
	{ \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_A); \
		P_GET_STRUCT(FGameplayStatTag,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UBlueprintGameplayStatsLibrary::NotEqual_GameplayStatTagGameplayStatTag(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayStatsLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayStatsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicGameplayStatsRuntime"), EPICGAMEPLAYSTATSRUNTIME_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayStatsLibrary)


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayStatsLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayStatsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EpicGameplayStatsRuntime"), EPICGAMEPLAYSTATSRUNTIME_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayStatsLibrary)


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EPICGAMEPLAYSTATSRUNTIME_API UBlueprintGameplayStatsLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGameplayStatsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EPICGAMEPLAYSTATSRUNTIME_API, UBlueprintGameplayStatsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayStatsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EPICGAMEPLAYSTATSRUNTIME_API UBlueprintGameplayStatsLibrary(UBlueprintGameplayStatsLibrary&&); \
	EPICGAMEPLAYSTATSRUNTIME_API UBlueprintGameplayStatsLibrary(const UBlueprintGameplayStatsLibrary&); \
public:


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EPICGAMEPLAYSTATSRUNTIME_API UBlueprintGameplayStatsLibrary(UBlueprintGameplayStatsLibrary&&); \
	EPICGAMEPLAYSTATSRUNTIME_API UBlueprintGameplayStatsLibrary(const UBlueprintGameplayStatsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EPICGAMEPLAYSTATSRUNTIME_API, UBlueprintGameplayStatsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayStatsLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlueprintGameplayStatsLibrary)


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_7_PROLOG
#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_INCLASS \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_EpicGameplayStats_Source_EpicGameplayStatsRuntime_Public_BlueprintGameplayStatsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
