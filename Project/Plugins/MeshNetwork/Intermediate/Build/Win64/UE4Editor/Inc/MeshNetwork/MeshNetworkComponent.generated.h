// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMeshNetworkNodeType : uint8;
#ifdef MESHNETWORK_MeshNetworkComponent_generated_h
#error "MeshNetworkComponent.generated.h already included, missing '#pragma once' in MeshNetworkComponent.h"
#endif
#define MESHNETWORK_MeshNetworkComponent_generated_h

#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeshNetworkNodeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMeshNetworkNodeType*)Z_Param__Result=P_THIS->GetMeshNetworkNodeType(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeshNetworkNodeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMeshNetworkNodeType*)Z_Param__Result=P_THIS->GetMeshNetworkNodeType(); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshNetworkComponent(); \
	friend struct Z_Construct_UClass_UMeshNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshNetworkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshNetwork"), NO_API) \
	DECLARE_SERIALIZER(UMeshNetworkComponent)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMeshNetworkComponent(); \
	friend struct Z_Construct_UClass_UMeshNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshNetworkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeshNetwork"), NO_API) \
	DECLARE_SERIALIZER(UMeshNetworkComponent)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshNetworkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshNetworkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshNetworkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshNetworkComponent(UMeshNetworkComponent&&); \
	NO_API UMeshNetworkComponent(const UMeshNetworkComponent&); \
public:


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshNetworkComponent(UMeshNetworkComponent&&); \
	NO_API UMeshNetworkComponent(const UMeshNetworkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshNetworkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshNetworkComponent)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AggregatedFunctions() { return STRUCT_OFFSET(UMeshNetworkComponent, AggregatedFunctions); }


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_9_PROLOG
#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_INCLASS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
