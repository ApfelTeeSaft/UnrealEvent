// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetUI/Public/NetGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetGraph() {}
// Cross Module References
	NETUI_API UClass* Z_Construct_UClass_UNetGraph_NoRegister();
	NETUI_API UClass* Z_Construct_UClass_UNetGraph();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NetUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UNetGraph::StaticRegisterNativesUNetGraph()
	{
	}
	UClass* Z_Construct_UClass_UNetGraph_NoRegister()
	{
		return UNetGraph::StaticClass();
	}
	struct Z_Construct_UClass_UNetGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPingToGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPingToGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketLossLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PacketLossLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingLineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PingLineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NetUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NetGraph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NetGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetGraph_Statics::NewProp_MaxPingToGraph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetGraph" },
		{ "ModuleRelativePath", "Public/NetGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetGraph_Statics::NewProp_MaxPingToGraph = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPingToGraph", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNetGraph, MaxPingToGraph), METADATA_PARAMS(Z_Construct_UClass_UNetGraph_Statics::NewProp_MaxPingToGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::NewProp_MaxPingToGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetGraph_Statics::NewProp_DesiredSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetGraph" },
		{ "ModuleRelativePath", "Public/NetGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetGraph_Statics::NewProp_DesiredSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DesiredSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNetGraph, DesiredSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UNetGraph_Statics::NewProp_DesiredSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::NewProp_DesiredSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetGraph_Statics::NewProp_PacketLossLineColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetGraph" },
		{ "ModuleRelativePath", "Public/NetGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetGraph_Statics::NewProp_PacketLossLineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PacketLossLineColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNetGraph, PacketLossLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UNetGraph_Statics::NewProp_PacketLossLineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::NewProp_PacketLossLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetGraph_Statics::NewProp_PingLineColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetGraph" },
		{ "ModuleRelativePath", "Public/NetGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetGraph_Statics::NewProp_PingLineColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PingLineColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNetGraph, PingLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UNetGraph_Statics::NewProp_PingLineColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::NewProp_PingLineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetGraph_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NetGraph" },
		{ "ModuleRelativePath", "Public/NetGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetGraph_Statics::NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UNetGraph, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UNetGraph_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::NewProp_BackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGraph_Statics::NewProp_MaxPingToGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGraph_Statics::NewProp_DesiredSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGraph_Statics::NewProp_PacketLossLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGraph_Statics::NewProp_PingLineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetGraph_Statics::NewProp_BackgroundColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetGraph_Statics::ClassParams = {
		&UNetGraph::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A010A0u,
		nullptr, 0,
		Z_Construct_UClass_UNetGraph_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNetGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetGraph, 3079561787);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetGraph(Z_Construct_UClass_UNetGraph, &UNetGraph::StaticClass, TEXT("/Script/NetUI"), TEXT("UNetGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
