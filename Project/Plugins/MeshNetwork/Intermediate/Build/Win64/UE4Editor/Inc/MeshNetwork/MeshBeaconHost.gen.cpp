// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshBeaconHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBeaconHost() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_AMeshBeaconHost_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_AMeshBeaconHost();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
// End Cross Module References
	void AMeshBeaconHost::StaticRegisterNativesAMeshBeaconHost()
	{
	}
	UClass* Z_Construct_UClass_AMeshBeaconHost_NoRegister()
	{
		return AMeshBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_AMeshBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConnections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHost,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshBeaconHost.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshBeaconHost.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshBeaconHost_Statics::NewProp_MaxConnections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshBeaconHost" },
		{ "ModuleRelativePath", "Public/MeshBeaconHost.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMeshBeaconHost_Statics::NewProp_MaxConnections = { UE4CodeGen_Private::EPropertyClass::Int, "MaxConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(AMeshBeaconHost, MaxConnections), METADATA_PARAMS(Z_Construct_UClass_AMeshBeaconHost_Statics::NewProp_MaxConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconHost_Statics::NewProp_MaxConnections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeshBeaconHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeshBeaconHost_Statics::NewProp_MaxConnections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshBeaconHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeshBeaconHost_Statics::ClassParams = {
		&AMeshBeaconHost::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_AMeshBeaconHost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconHost_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeshBeaconHost_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeshBeaconHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeshBeaconHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeshBeaconHost, 3129160796);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshBeaconHost(Z_Construct_UClass_AMeshBeaconHost, &AMeshBeaconHost::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("AMeshBeaconHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshBeaconHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
