// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshBeaconHostObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshBeaconHostObject() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_AMeshBeaconHostObject_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_AMeshBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
// End Cross Module References
	void AMeshBeaconHostObject::StaticRegisterNativesAMeshBeaconHostObject()
	{
	}
	UClass* Z_Construct_UClass_AMeshBeaconHostObject_NoRegister()
	{
		return AMeshBeaconHostObject::StaticClass();
	}
	struct Z_Construct_UClass_AMeshBeaconHostObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeshBeaconHostObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeshBeaconHostObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshBeaconHostObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshBeaconHostObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeshBeaconHostObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeshBeaconHostObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeshBeaconHostObject_Statics::ClassParams = {
		&AMeshBeaconHostObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMeshBeaconHostObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMeshBeaconHostObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeshBeaconHostObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeshBeaconHostObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeshBeaconHostObject, 1137370383);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshBeaconHostObject(Z_Construct_UClass_AMeshBeaconHostObject, &AMeshBeaconHostObject::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("AMeshBeaconHostObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshBeaconHostObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
