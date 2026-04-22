// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogPurchaseInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogPurchaseInfo() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogPurchaseInfo();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType();
// End Cross Module References
class UScriptStruct* FCatalogPurchaseInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogPurchaseInfo, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogPurchaseInfo"), sizeof(FCatalogPurchaseInfo), Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogPurchaseInfo(FCatalogPurchaseInfo::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogPurchaseInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseInfo
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogPurchaseInfo")),new UScriptStruct::TCppStructOps<FCatalogPurchaseInfo>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseInfo;
	struct Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedTotalPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedTotalPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencySubType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencySubType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PurchaseQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogPurchaseInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_GameContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfo" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_GameContext = { UE4CodeGen_Private::EPropertyClass::Str, "GameContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfo, GameContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_GameContext_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_GameContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_ExpectedTotalPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfo" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_ExpectedTotalPrice = { UE4CodeGen_Private::EPropertyClass::Int, "ExpectedTotalPrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfo, ExpectedTotalPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_ExpectedTotalPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_ExpectedTotalPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_CurrencySubType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfo" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_CurrencySubType = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencySubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfo, CurrencySubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_CurrencySubType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_CurrencySubType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfo" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_Currency = { UE4CodeGen_Private::EPropertyClass::Byte, "Currency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfo, Currency), Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_PurchaseQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfo" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_PurchaseQuantity = { UE4CodeGen_Private::EPropertyClass::Int, "PurchaseQuantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfo, PurchaseQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_PurchaseQuantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_PurchaseQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_OfferId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfo" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_OfferId = { UE4CodeGen_Private::EPropertyClass::Str, "OfferId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfo, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_OfferId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_OfferId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_GameContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_ExpectedTotalPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_CurrencySubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_PurchaseQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::NewProp_OfferId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogPurchaseInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogPurchaseInfo),
		alignof(FCatalogPurchaseInfo),
		Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogPurchaseInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogPurchaseInfo"), sizeof(FCatalogPurchaseInfo), Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogPurchaseInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfo_CRC() { return 145858315U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
