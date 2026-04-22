// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshReplicationGraphNode_AlwaysRelevant_ForConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReplicationGraphNode_AlwaysRelevant_ForConnection() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::StaticRegisterNativesUMeshReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
	}
	UClass* Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_NoRegister()
	{
		return UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass();
	}
	struct Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastViewTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastViewer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastViewer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraphNode_ActorList,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshReplicationGraphNode_AlwaysRelevant_ForConnection" },
		{ "ModuleRelativePath", "Public/MeshReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewTarget = { UE4CodeGen_Private::EPropertyClass::Object, "LastViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection, LastViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshReplicationGraphNode_AlwaysRelevant_ForConnection" },
		{ "ModuleRelativePath", "Public/MeshReplicationGraphNode_AlwaysRelevant_ForConnection.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))\n  TArray<FAlwaysRelevantActorInfo> PastRelevantActors;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewer = { UE4CodeGen_Private::EPropertyClass::Object, "LastViewer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection, LastViewer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::NewProp_LastViewer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshReplicationGraphNode_AlwaysRelevant_ForConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams = {
		&UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection, 2204712116);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection(Z_Construct_UClass_UMeshReplicationGraphNode_AlwaysRelevant_ForConnection, &UMeshReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("UMeshReplicationGraphNode_AlwaysRelevant_ForConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReplicationGraphNode_AlwaysRelevant_ForConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
