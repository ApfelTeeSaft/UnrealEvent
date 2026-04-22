// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogItemSalePrice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogItemSalePrice() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogItemSalePrice();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType();
// End Cross Module References
class UScriptStruct* FCatalogItemSalePrice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogItemSalePrice_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogItemSalePrice, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogItemSalePrice"), sizeof(FCatalogItemSalePrice), Get_Z_Construct_UScriptStruct_FCatalogItemSalePrice_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogItemSalePrice(FCatalogItemSalePrice::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogItemSalePrice"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogItemSalePrice
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogItemSalePrice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogItemSalePrice")),new UScriptStruct::TCppStructOps<FCatalogItemSalePrice>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogItemSalePrice;
	struct Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SalePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SalePrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogItemSalePrice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogItemSalePrice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemSalePrice" },
		{ "ModuleRelativePath", "Public/CatalogItemSalePrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Struct, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemSalePrice, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_EndTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemSalePrice" },
		{ "ModuleRelativePath", "Public/CatalogItemSalePrice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Struct, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemSalePrice, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SaleType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemSalePrice" },
		{ "ModuleRelativePath", "Public/CatalogItemSalePrice.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SaleType = { UE4CodeGen_Private::EPropertyClass::Byte, "SaleType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemSalePrice, SaleType), Z_Construct_UEnum_GameSubCatalog_ECatalogSaleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SaleType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SaleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SalePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogItemSalePrice" },
		{ "ModuleRelativePath", "Public/CatalogItemSalePrice.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SalePrice = { UE4CodeGen_Private::EPropertyClass::Int, "SalePrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogItemSalePrice, SalePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SalePrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SalePrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SaleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::NewProp_SalePrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogItemSalePrice",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogItemSalePrice),
		alignof(FCatalogItemSalePrice),
		Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogItemSalePrice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogItemSalePrice_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogItemSalePrice"), sizeof(FCatalogItemSalePrice), Get_Z_Construct_UScriptStruct_FCatalogItemSalePrice_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogItemSalePrice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogItemSalePrice_CRC() { return 1653815979U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
