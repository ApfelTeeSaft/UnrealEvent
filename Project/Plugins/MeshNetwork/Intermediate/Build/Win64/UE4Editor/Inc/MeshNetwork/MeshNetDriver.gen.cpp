// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNetDriver() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshNetDriver_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshNetDriver();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
// End Cross Module References
	void UMeshNetDriver::StaticRegisterNativesUMeshNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UMeshNetDriver_NoRegister()
	{
		return UMeshNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UMeshNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetDriver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshNetDriver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshNetDriver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshNetDriver_Statics::ClassParams = {
		&UMeshNetDriver::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000ACu,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshNetDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshNetDriver, 620484495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshNetDriver(Z_Construct_UClass_UMeshNetDriver, &UMeshNetDriver::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("UMeshNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
