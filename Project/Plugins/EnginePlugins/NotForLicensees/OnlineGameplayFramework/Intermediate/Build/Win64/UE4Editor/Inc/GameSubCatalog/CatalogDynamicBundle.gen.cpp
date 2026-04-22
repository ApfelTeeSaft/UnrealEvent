// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogDynamicBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogDynamicBundle() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogDynamicBundle();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogDynamicBundleItem();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType();
// End Cross Module References
class UScriptStruct* FCatalogDynamicBundle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogDynamicBundle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogDynamicBundle, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogDynamicBundle"), sizeof(FCatalogDynamicBundle), Get_Z_Construct_UScriptStruct_FCatalogDynamicBundle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogDynamicBundle(FCatalogDynamicBundle::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogDynamicBundle"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogDynamicBundle
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogDynamicBundle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogDynamicBundle")),new UScriptStruct::TCppStructOps<FCatalogDynamicBundle>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogDynamicBundle;
	struct Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BundleItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BundleItems;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BundleItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencySubType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencySubType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogDynamicBundle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundle" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems = { UE4CodeGen_Private::EPropertyClass::Array, "BundleItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundle, BundleItems), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BundleItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCatalogDynamicBundleItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_DisplayType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundle" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_DisplayType = { UE4CodeGen_Private::EPropertyClass::Byte, "DisplayType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundle, DisplayType), Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_DisplayType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_DisplayType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencySubType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundle" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencySubType = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencySubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundle, CurrencySubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencySubType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencySubType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundle" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencyType = { UE4CodeGen_Private::EPropertyClass::Byte, "CurrencyType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundle, CurrencyType), Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BasePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundle" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BasePrice = { UE4CodeGen_Private::EPropertyClass::Int, "BasePrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundle, BasePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BasePrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BasePrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BundleItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_DisplayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencySubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::NewProp_BasePrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogDynamicBundle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogDynamicBundle),
		alignof(FCatalogDynamicBundle),
		Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogDynamicBundle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogDynamicBundle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogDynamicBundle"), sizeof(FCatalogDynamicBundle), Get_Z_Construct_UScriptStruct_FCatalogDynamicBundle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogDynamicBundle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogDynamicBundle_CRC() { return 3482519857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
