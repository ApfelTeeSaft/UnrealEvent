// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogOffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogOffer() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogOffer();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogGiftInfo();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogOfferRequirement();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FItemQuantity();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogMetaAssetInfo();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogDynamicBundle();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogItemPrice();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogKeyValue();
// End Cross Module References
class UScriptStruct* FCatalogOffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogOffer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogOffer, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogOffer"), sizeof(FCatalogOffer), Get_Z_Construct_UScriptStruct_FCatalogOffer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogOffer(FCatalogOffer::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogOffer"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogOffer
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogOffer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogOffer")),new UScriptStruct::TCppStructOps<FCatalogOffer>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogOffer;
	struct Z_Construct_UScriptStruct_FCatalogOffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DenyItemTemplateIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DenyItemTemplateIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DenyItemTemplateIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Refundable_MetaData[];
#endif
		static void NewProp_Refundable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Refundable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiftInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GiftInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Requirements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Requirements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemGrants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemGrants;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemGrants_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaAssetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaAssetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppStoreId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppStoreId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ShortDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogGroupPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CatalogGroupPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonthlyLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MonthlyLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeeklyLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DailyLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicBundleInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DynamicBundleInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OfferType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OfferType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogOffer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds = { UE4CodeGen_Private::EPropertyClass::Array, "DenyItemTemplateIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, DenyItemTemplateIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "DenyItemTemplateIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable_SetBit(void* Obj)
	{
		((FCatalogOffer*)Obj)->Refundable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable = { UE4CodeGen_Private::EPropertyClass::Bool, "Refundable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCatalogOffer), &Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_GiftInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_GiftInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "GiftInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, GiftInfo), Z_Construct_UScriptStruct_FCatalogGiftInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_GiftInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_GiftInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements = { UE4CodeGen_Private::EPropertyClass::Array, "Requirements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, Requirements), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Requirements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCatalogOfferRequirement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants = { UE4CodeGen_Private::EPropertyClass::Array, "ItemGrants", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, ItemGrants), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemGrants", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FItemQuantity, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DisplayAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DisplayAssetPath = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayAssetPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, DisplayAssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DisplayAssetPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DisplayAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaAssetInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaAssetInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaAssetInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, MetaAssetInfo), Z_Construct_UScriptStruct_FCatalogMetaAssetInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaAssetInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaAssetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_AppStoreId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_AppStoreId = { UE4CodeGen_Private::EPropertyClass::Str, "AppStoreId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(AppStoreId, FCatalogOffer), nullptr, STRUCT_OFFSET(FCatalogOffer, AppStoreId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_AppStoreId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_AppStoreId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Text, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ShortDescription_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ShortDescription = { UE4CodeGen_Private::EPropertyClass::Text, "ShortDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, ShortDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ShortDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ShortDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_SortPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_SortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "SortPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, SortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_SortPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroupPriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroupPriority = { UE4CodeGen_Private::EPropertyClass::Int, "CatalogGroupPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, CatalogGroupPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroupPriority_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroupPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroup = { UE4CodeGen_Private::EPropertyClass::Str, "CatalogGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, CatalogGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories = { UE4CodeGen_Private::EPropertyClass::Array, "Categories", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, Categories), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Categories", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MonthlyLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MonthlyLimit = { UE4CodeGen_Private::EPropertyClass::Int, "MonthlyLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, MonthlyLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MonthlyLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MonthlyLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_WeeklyLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_WeeklyLimit = { UE4CodeGen_Private::EPropertyClass::Int, "WeeklyLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, WeeklyLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_WeeklyLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_WeeklyLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DailyLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DailyLimit = { UE4CodeGen_Private::EPropertyClass::Int, "DailyLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, DailyLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DailyLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DailyLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DynamicBundleInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DynamicBundleInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "DynamicBundleInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, DynamicBundleInfo), Z_Construct_UScriptStruct_FCatalogDynamicBundle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DynamicBundleInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DynamicBundleInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices = { UE4CodeGen_Private::EPropertyClass::Array, "Prices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, Prices), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Prices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCatalogItemPrice, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType = { UE4CodeGen_Private::EPropertyClass::Enum, "OfferType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, OfferType), Z_Construct_UEnum_GameSubCatalog_ECatalogOfferType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo = { UE4CodeGen_Private::EPropertyClass::Array, "MetaInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, MetaInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCatalogKeyValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DevName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DevName = { UE4CodeGen_Private::EPropertyClass::Str, "DevName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, DevName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DevName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DevName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOffer" },
		{ "ModuleRelativePath", "Public/CatalogOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferId = { UE4CodeGen_Private::EPropertyClass::Str, "OfferId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOffer, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DenyItemTemplateIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Refundable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_GiftInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Requirements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ItemGrants_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DisplayAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaAssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_AppStoreId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_ShortDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_SortPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroupPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_CatalogGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MonthlyLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_WeeklyLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DailyLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DynamicBundleInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_Prices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_MetaInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_DevName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOffer_Statics::NewProp_OfferId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogOffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogOffer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogOffer),
		alignof(FCatalogOffer),
		Z_Construct_UScriptStruct_FCatalogOffer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOffer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogOffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogOffer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogOffer"), sizeof(FCatalogOffer), Get_Z_Construct_UScriptStruct_FCatalogOffer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogOffer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogOffer_CRC() { return 3749874144U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
