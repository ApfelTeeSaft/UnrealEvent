// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/GameplayTagTableManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagTableManager() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UClass* Z_Construct_UClass_UGameplayTagTableManager_NoRegister();
	EPICGAMEPLAYSTATSRUNTIME_API UClass* Z_Construct_UClass_UGameplayTagTableManager();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
	EPICGAMEPLAYSTATSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem();
// End Cross Module References
	void UGameplayTagTableManager::StaticRegisterNativesUGameplayTagTableManager()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagTableManager_NoRegister()
	{
		return UGameplayTagTableManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagTableManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagTableManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagTableManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayTagTableManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayTagTableManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayTagTableManager" },
		{ "ModuleRelativePath", "Public/GameplayTagTableManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables = { UE4CodeGen_Private::EPropertyClass::Array, "Tables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UGameplayTagTableManager, Tables), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagTableManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagTableManager_Statics::NewProp_Tables_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagTableManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagTableManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagTableManager_Statics::ClassParams = {
		&UGameplayTagTableManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UGameplayTagTableManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTableManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagTableManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagTableManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagTableManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagTableManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagTableManager, 3635092776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagTableManager(Z_Construct_UClass_UGameplayTagTableManager, &UGameplayTagTableManager::StaticClass, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("UGameplayTagTableManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagTableManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
