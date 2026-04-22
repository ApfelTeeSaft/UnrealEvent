// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshReplicationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReplicationGraph() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshReplicationGraph_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister();
// End Cross Module References
	void UMeshReplicationGraph::StaticRegisterNativesUMeshReplicationGraph()
	{
	}
	UClass* Z_Construct_UClass_UMeshReplicationGraph_NoRegister()
	{
		return UMeshReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UMeshReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysRelevantNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlwaysRelevantNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshReplicationGraph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshReplicationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshReplicationGraph" },
		{ "ModuleRelativePath", "Public/MeshReplicationGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshReplicationGraph_Statics::NewProp_AlwaysRelevantNode = { UE4CodeGen_Private::EPropertyClass::Object, "AlwaysRelevantNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMeshReplicationGraph, AlwaysRelevantNode), Z_Construct_UClass_UReplicationGraphNode_ActorList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraph_Statics::NewProp_AlwaysRelevantNode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshReplicationGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshReplicationGraph_Statics::NewProp_AlwaysRelevantNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshReplicationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshReplicationGraph_Statics::ClassParams = {
		&UMeshReplicationGraph::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000ACu,
		nullptr, 0,
		Z_Construct_UClass_UMeshReplicationGraph_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraph_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshReplicationGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshReplicationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshReplicationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshReplicationGraph, 3545903873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshReplicationGraph(Z_Construct_UClass_UMeshReplicationGraph, &UMeshReplicationGraph::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("UMeshReplicationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReplicationGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
