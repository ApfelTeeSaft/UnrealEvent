// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshConnection() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshConnection_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
// End Cross Module References
	void UMeshConnection::StaticRegisterNativesUMeshConnection()
	{
	}
	UClass* Z_Construct_UClass_UMeshConnection_NoRegister()
	{
		return UMeshConnection::StaticClass();
	}
	struct Z_Construct_UClass_UMeshConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConnection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshConnection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshConnection_Statics::ClassParams = {
		&UMeshConnection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000ACu,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshConnection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshConnection, 4064095420);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshConnection(Z_Construct_UClass_UMeshConnection, &UMeshConnection::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("UMeshConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
