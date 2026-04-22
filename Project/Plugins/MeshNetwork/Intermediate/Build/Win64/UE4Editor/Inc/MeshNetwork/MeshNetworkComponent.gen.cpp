// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshNetworkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNetworkComponent() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshNetworkComponent_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshNetworkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType();
	MESHNETWORK_API UEnum* Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType();
	MESHNETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAggregatedFunction();
	MESHNETWORK_API UEnum* Z_Construct_UEnum_MeshNetwork_EMeshNetworkRelevancy();
// End Cross Module References
	void UMeshNetworkComponent::StaticRegisterNativesUMeshNetworkComponent()
	{
		UClass* Class = UMeshNetworkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeshNetworkNodeType", &UMeshNetworkComponent::execGetMeshNetworkNodeType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics
	{
		struct MeshNetworkComponent_eventGetMeshNetworkNodeType_Parms
		{
			EMeshNetworkNodeType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshNetworkComponent_eventGetMeshNetworkNodeType_Parms, ReturnValue), Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkComponent, "GetMeshNetworkNodeType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshNetworkComponent_eventGetMeshNetworkNodeType_Parms), Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshNetworkComponent_NoRegister()
	{
		return UMeshNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMeshNetworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregatedFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AggregatedFunctions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AggregatedFunctions_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AggregatedFunctions_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggregationTimeouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AggregationTimeouts;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AggregationTimeouts_Key_KeyProp;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_AggregationTimeouts_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshRelevancy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshRelevancy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshRelevancy_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshNetworkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshNetworkComponent_GetMeshNetworkNodeType, "GetMeshNetworkNodeType" }, // 1400342259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MeshNetworkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshNetworkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkComponent" },
		{ "ModuleRelativePath", "Public/MeshNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions = { UE4CodeGen_Private::EPropertyClass::Map, "AggregatedFunctions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkComponent, AggregatedFunctions), METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AggregatedFunctions_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "AggregatedFunctions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FAggregatedFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkComponent" },
		{ "ModuleRelativePath", "Public/MeshNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts = { UE4CodeGen_Private::EPropertyClass::Map, "AggregationTimeouts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMeshNetworkComponent, AggregationTimeouts), METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AggregationTimeouts_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_ValueProp = { UE4CodeGen_Private::EPropertyClass::Double, "AggregationTimeouts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkComponent" },
		{ "ModuleRelativePath", "Public/MeshNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy = { UE4CodeGen_Private::EPropertyClass::Enum, "MeshRelevancy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkComponent, MeshRelevancy), Z_Construct_UEnum_MeshNetwork_EMeshNetworkRelevancy, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshNetworkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregatedFunctions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_AggregationTimeouts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkComponent_Statics::NewProp_MeshRelevancy_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshNetworkComponent_Statics::ClassParams = {
		&UMeshNetworkComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMeshNetworkComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshNetworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshNetworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshNetworkComponent, 1084004744);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshNetworkComponent(Z_Construct_UClass_UMeshNetworkComponent, &UMeshNetworkComponent::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("UMeshNetworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshNetworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
