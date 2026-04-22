// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMeshNetworkNodeType : uint8;
struct FMeshMetaDataStruct;
#ifdef MESHNETWORK_MeshNetworkSubsystem_generated_h
#error "MeshNetworkSubsystem.generated.h already included, missing '#pragma once' in MeshNetworkSubsystem.h"
#endif
#define MESHNETWORK_MeshNetworkSubsystem_generated_h

#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConnectedToRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetConnectedToRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameServerNodeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMeshNetworkNodeType*)Z_Param__Result=P_THIS->GetGameServerNodeType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshNetworkNodeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMeshNetworkNodeType*)Z_Param__Result=P_THIS->GetMeshNetworkNodeType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadata) \
	{ \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMetadata(Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaDataWithKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMetaDataWithKey(Z_Param_Key,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetaData) \
	{ \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetaData(Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetaDataWithKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetaDataWithKey(Z_Param_Key,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConnectedToRoot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetConnectedToRoot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGameServerNodeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMeshNetworkNodeType*)Z_Param__Result=P_THIS->GetGameServerNodeType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshNetworkNodeType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EMeshNetworkNodeType*)Z_Param__Result=P_THIS->GetMeshNetworkNodeType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadata) \
	{ \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMetadata(Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaDataWithKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMetaDataWithKey(Z_Param_Key,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetaData) \
	{ \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetaData(Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetaDataWithKey) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_STRUCT_REF(FMeshMetaDataStruct,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetaDataWithKey(Z_Param_Key,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	}


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshNetworkSubsystem(); \
	friend struct Z_Construct_UClass_UMeshNetworkSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMeshNetworkSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshNetwork"), NO_API) \
	DECLARE_SERIALIZER(UMeshNetworkSubsystem)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMeshNetworkSubsystem(); \
	friend struct Z_Construct_UClass_UMeshNetworkSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMeshNetworkSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshNetwork"), NO_API) \
	DECLARE_SERIALIZER(UMeshNetworkSubsystem)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshNetworkSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshNetworkSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshNetworkSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshNetworkSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshNetworkSubsystem(UMeshNetworkSubsystem&&); \
	NO_API UMeshNetworkSubsystem(const UMeshNetworkSubsystem&); \
public:


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshNetworkSubsystem(UMeshNetworkSubsystem&&); \
	NO_API UMeshNetworkSubsystem(const UMeshNetworkSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshNetworkSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshNetworkSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshNetworkSubsystem)


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeType() { return STRUCT_OFFSET(UMeshNetworkSubsystem, NodeType); } \
	FORCEINLINE static uint32 __PPO__GameServerNodeType() { return STRUCT_OFFSET(UMeshNetworkSubsystem, GameServerNodeType); } \
	FORCEINLINE static uint32 __PPO__bConnectedToRoot() { return STRUCT_OFFSET(UMeshNetworkSubsystem, bConnectedToRoot); }


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_12_PROLOG
#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_RPC_WRAPPERS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_INCLASS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_MeshNetworkSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
