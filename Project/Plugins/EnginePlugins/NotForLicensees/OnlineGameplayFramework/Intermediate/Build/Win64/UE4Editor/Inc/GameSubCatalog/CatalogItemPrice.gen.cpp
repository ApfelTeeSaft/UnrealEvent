// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogItemPrice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogItemPrice() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogItemPrice();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType();
// End Cross Module References
class UScriptStruct* FCatalogItemPrice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogItemPrice_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogItemPrice, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogItemPrice"), sizeof(FCatalogItemPrice), Get_Z_Construct_UScriptStruct_FCatalogItemPrice_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogItemPrice(FCatalogItemPrice::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogItemPrice"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogItemPrice
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogItemPrice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogItemPrice")),new UScriptStruct::TCppStructOps<FCatalogItemPrice>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogItemPrice;
	struct Z_Construct_UScriptStruct_FCatalogItemPrice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaleExpiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaleExpiration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceTextOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PriceTextOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinalPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinalPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegularPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencySubType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencySubType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogItemPrice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleExpiration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleExpiration = { UE4CodeGen_Private::EPropertyClass::Struct, "SaleExpiration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, SaleExpiration), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleExpiration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleExpiration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleType = { UE4CodeGen_Private::EPropertyClass::Byte, "SaleType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, SaleType), Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_PriceTextOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_PriceTextOverride = { UE4CodeGen_Private::EPropertyClass::Text, "PriceTextOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, PriceTextOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_PriceTextOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_PriceTextOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_FinalPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_FinalPrice = { UE4CodeGen_Private::EPropertyClass::Int, "FinalPrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, FinalPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_FinalPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_FinalPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_RegularPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_RegularPrice = { UE4CodeGen_Private::EPropertyClass::Int, "RegularPrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, RegularPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_RegularPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_RegularPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencySubType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencySubType = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencySubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, CurrencySubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencySubType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencySubType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemPrice" },
		{ "ModuleRelativePath", "Public/CatalogItemPrice.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencyType = { UE4CodeGen_Private::EPropertyClass::Byte, "CurrencyType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemPrice, CurrencyType), Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleExpiration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_SaleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_PriceTextOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_FinalPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_RegularPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencySubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::NewProp_CurrencyType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogItemPrice",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogItemPrice),
		alignof(FCatalogItemPrice),
		Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogItemPrice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogItemPrice_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogItemPrice"), sizeof(FCatalogItemPrice), Get_Z_Construct_UScriptStruct_FCatalogItemPrice_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogItemPrice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogItemPrice_CRC() { return 3685495650U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
