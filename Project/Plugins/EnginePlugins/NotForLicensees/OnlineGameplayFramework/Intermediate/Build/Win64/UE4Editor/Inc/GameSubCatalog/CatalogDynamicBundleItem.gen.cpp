// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogDynamicBundleItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogDynamicBundleItem() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogDynamicBundleItem();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FItemQuantity();
// End Cross Module References
class UScriptStruct* FCatalogDynamicBundleItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogDynamicBundleItem"), sizeof(FCatalogDynamicBundleItem), Get_Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogDynamicBundleItem(FCatalogDynamicBundleItem::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogDynamicBundleItem"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogDynamicBundleItem
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogDynamicBundleItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogDynamicBundleItem")),new UScriptStruct::TCppStructOps<FCatalogDynamicBundleItem>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogDynamicBundleItem;
	struct Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlreadyOwnedPriceReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AlreadyOwnedPriceReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountedPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiscountedPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegularPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanOwnMultiple_MetaData[];
#endif
		static void NewProp_bCanOwnMultiple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanOwnMultiple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogDynamicBundleItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Description_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Text, "Description", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundleItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundleItem, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_AlreadyOwnedPriceReduction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_AlreadyOwnedPriceReduction = { UE4CodeGen_Private::EPropertyClass::Int, "AlreadyOwnedPriceReduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundleItem, AlreadyOwnedPriceReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_AlreadyOwnedPriceReduction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_AlreadyOwnedPriceReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_DiscountedPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_DiscountedPrice = { UE4CodeGen_Private::EPropertyClass::Int, "DiscountedPrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundleItem, DiscountedPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_DiscountedPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_DiscountedPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_RegularPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_RegularPrice = { UE4CodeGen_Private::EPropertyClass::Int, "RegularPrice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundleItem, RegularPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_RegularPrice_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_RegularPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple_SetBit(void* Obj)
	{
		((FCatalogDynamicBundleItem*)Obj)->bCanOwnMultiple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanOwnMultiple", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCatalogDynamicBundleItem), &Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Item_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogDynamicBundleItem" },
		{ "ModuleRelativePath", "Public/CatalogDynamicBundleItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Struct, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogDynamicBundleItem, Item), Z_Construct_UScriptStruct_FItemQuantity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_AlreadyOwnedPriceReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_DiscountedPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_RegularPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_bCanOwnMultiple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogDynamicBundleItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogDynamicBundleItem),
		alignof(FCatalogDynamicBundleItem),
		Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogDynamicBundleItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogDynamicBundleItem"), sizeof(FCatalogDynamicBundleItem), Get_Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogDynamicBundleItem_CRC() { return 3596229687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
