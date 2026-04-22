// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRASHLYTICS_CrashlyticsBlueprintLibrary_generated_h
#error "CrashlyticsBlueprintLibrary.generated.h already included, missing '#pragma once' in CrashlyticsBlueprintLibrary.h"
#endif
#define CRASHLYTICS_CrashlyticsBlueprintLibrary_generated_h

#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogException) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MESSAGE); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::LogException(Z_Param_MESSAGE); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MESSAGE); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::LogMessage(Z_Param_MESSAGE); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBooleanKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetBooleanKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetFloatKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntegerKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetIntegerKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetStringKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserEmail) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetUserEmail(Z_Param_Email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserIdentifier) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetUserIdentifier(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetUserName(Z_Param_Name); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogException) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MESSAGE); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::LogException(Z_Param_MESSAGE); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MESSAGE); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::LogMessage(Z_Param_MESSAGE); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBooleanKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetBooleanKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFloatKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetFloatKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIntegerKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetIntegerKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetStringKey(Z_Param_Key,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserEmail) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Email); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetUserEmail(Z_Param_Email); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserIdentifier) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetUserIdentifier(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUserName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCrashlyticsBlueprintLibrary::SetUserName(Z_Param_Name); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrashlyticsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCrashlyticsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Crashlytics"), NO_API) \
	DECLARE_SERIALIZER(UCrashlyticsBlueprintLibrary)


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUCrashlyticsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UCrashlyticsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Crashlytics"), NO_API) \
	DECLARE_SERIALIZER(UCrashlyticsBlueprintLibrary)


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrashlyticsBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrashlyticsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrashlyticsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashlyticsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrashlyticsBlueprintLibrary(UCrashlyticsBlueprintLibrary&&); \
	NO_API UCrashlyticsBlueprintLibrary(const UCrashlyticsBlueprintLibrary&); \
public:


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrashlyticsBlueprintLibrary(UCrashlyticsBlueprintLibrary&&); \
	NO_API UCrashlyticsBlueprintLibrary(const UCrashlyticsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrashlyticsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrashlyticsBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrashlyticsBlueprintLibrary)


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_PRIVATE_PROPERTY_OFFSET
#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_6_PROLOG
#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_INCLASS \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_Runtime_Crashlytics_Source_Crashlytics_Public_CrashlyticsBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
