// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHNETWORK_MeshBeaconClient_generated_h
#error "MeshBeaconClient.generated.h already included, missing '#pragma once' in MeshBeaconClient.h"
#endif
#define MESHNETWORK_MeshBeaconClient_generated_h

#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_RPC_WRAPPERS \
	virtual bool ServerUpdateLevelVisibility_Validate(FName , bool ); \
	virtual void ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible); \
 \
	DECLARE_FUNCTION(execOnRep_ConnectedToRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ConnectedToRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_UBOOL(Z_Param_bIsVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateLevelVisibility_Validate(Z_Param_PackageName,Z_Param_bIsVisible)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateLevelVisibility_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateLevelVisibility_Implementation(Z_Param_PackageName,Z_Param_bIsVisible); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateLevelVisibility_Validate(FName , bool ); \
	virtual void ServerUpdateLevelVisibility_Implementation(FName PackageName, bool bIsVisible); \
 \
	DECLARE_FUNCTION(execOnRep_ConnectedToRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ConnectedToRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerUpdateLevelVisibility) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PackageName); \
		P_GET_UBOOL(Z_Param_bIsVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateLevelVisibility_Validate(Z_Param_PackageName,Z_Param_bIsVisible)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateLevelVisibility_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateLevelVisibility_Implementation(Z_Param_PackageName,Z_Param_bIsVisible); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_EVENT_PARMS \
	struct MeshBeaconClient_eventServerUpdateLevelVisibility_Parms \
	{ \
		FName PackageName; \
		bool bIsVisible; \
	};


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_CALLBACK_WRAPPERS
#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeshBeaconClient(); \
	friend struct Z_Construct_UClass_AMeshBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AMeshBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshNetwork"), NO_API) \
	DECLARE_SERIALIZER(AMeshBeaconClient)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAMeshBeaconClient(); \
	friend struct Z_Construct_UClass_AMeshBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AMeshBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshNetwork"), NO_API) \
	DECLARE_SERIALIZER(AMeshBeaconClient)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeshBeaconClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeshBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeshBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeshBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeshBeaconClient(AMeshBeaconClient&&); \
	NO_API AMeshBeaconClient(const AMeshBeaconClient&); \
public:


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeshBeaconClient(AMeshBeaconClient&&); \
	NO_API AMeshBeaconClient(const AMeshBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeshBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeshBeaconClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeshBeaconClient)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bConnectedToRoot() { return STRUCT_OFFSET(AMeshBeaconClient, bConnectedToRoot); }


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_7_PROLOG \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_EVENT_PARMS


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_INCLASS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_CALLBACK_WRAPPERS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshBeaconClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
