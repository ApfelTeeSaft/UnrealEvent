// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogPurchaseInfoGift.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogPurchaseInfoGift() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType();
// End Cross Module References
class UScriptStruct* FCatalogPurchaseInfoGift::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogPurchaseInfoGift"), sizeof(FCatalogPurchaseInfoGift), Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogPurchaseInfoGift(FCatalogPurchaseInfoGift::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogPurchaseInfoGift"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseInfoGift
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseInfoGift()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogPurchaseInfoGift")),new UScriptStruct::TCppStructOps<FCatalogPurchaseInfoGift>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseInfoGift;
	struct Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonalMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PersonalMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiftWrapTemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GiftWrapTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiverAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReceiverAccountIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiverAccountIds_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogPurchaseInfoGift>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_PersonalMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_PersonalMessage = { UE4CodeGen_Private::EPropertyClass::Str, "PersonalMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, PersonalMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_PersonalMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_PersonalMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GiftWrapTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GiftWrapTemplateId = { UE4CodeGen_Private::EPropertyClass::Str, "GiftWrapTemplateId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, GiftWrapTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GiftWrapTemplateId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GiftWrapTemplateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds = { UE4CodeGen_Private::EPropertyClass::Array, "ReceiverAccountIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, ReceiverAccountIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReceiverAccountIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GameContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GameContext = { UE4CodeGen_Private::EPropertyClass::Str, "GameContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, GameContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GameContext_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GameContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ExpectedTotalPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ExpectedTotalPrice = { UE4CodeGen_Private::EPropertyClass::Int, "ExpectedTotalPrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, ExpectedTotalPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ExpectedTotalPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ExpectedTotalPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_CurrencySubType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_CurrencySubType = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencySubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, CurrencySubType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_CurrencySubType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_CurrencySubType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_Currency = { UE4CodeGen_Private::EPropertyClass::Byte, "Currency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, Currency), Z_Construct_UEnum_GameSubCatalog_EStoreCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_OfferId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseInfoGift" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseInfoGift.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_OfferId = { UE4CodeGen_Private::EPropertyClass::Str, "OfferId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseInfoGift, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_OfferId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_OfferId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_PersonalMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GiftWrapTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ReceiverAccountIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_GameContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_ExpectedTotalPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_CurrencySubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::NewProp_OfferId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogPurchaseInfoGift",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogPurchaseInfoGift),
		alignof(FCatalogPurchaseInfoGift),
		Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogPurchaseInfoGift"), sizeof(FCatalogPurchaseInfoGift), Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseInfoGift_CRC() { return 2930911205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
