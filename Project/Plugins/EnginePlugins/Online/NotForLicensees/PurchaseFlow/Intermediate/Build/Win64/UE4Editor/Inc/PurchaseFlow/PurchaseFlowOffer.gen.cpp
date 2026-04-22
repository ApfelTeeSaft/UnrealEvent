// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PurchaseFlow/Public/PurchaseFlowOffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchaseFlowOffer() {}
// Cross Module References
	PURCHASEFLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowOffer();
	UPackage* Z_Construct_UPackage__Script_PurchaseFlow();
	PURCHASEFLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowItem();
// End Cross Module References
class UScriptStruct* FPurchaseFlowOffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PURCHASEFLOW_API uint32 Get_Z_Construct_UScriptStruct_FPurchaseFlowOffer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseFlowOffer, Z_Construct_UPackage__Script_PurchaseFlow(), TEXT("PurchaseFlowOffer"), sizeof(FPurchaseFlowOffer), Get_Z_Construct_UScriptStruct_FPurchaseFlowOffer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchaseFlowOffer(FPurchaseFlowOffer::StaticStruct, TEXT("/Script/PurchaseFlow"), TEXT("PurchaseFlowOffer"), false, nullptr, nullptr);
static struct FScriptStruct_PurchaseFlow_StaticRegisterNativesFPurchaseFlowOffer
{
	FScriptStruct_PurchaseFlow_StaticRegisterNativesFPurchaseFlowOffer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchaseFlowOffer")),new UScriptStruct::TCppStructOps<FPurchaseFlowOffer>);
	}
} ScriptStruct_PurchaseFlow_StaticRegisterNativesFPurchaseFlowOffer;
	struct Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferNamespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferNamespace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PurchaseFlowOffer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseFlowOffer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowOffer" },
		{ "ModuleRelativePath", "Public/PurchaseFlowOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowOffer, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPurchaseFlowItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowOffer" },
		{ "ModuleRelativePath", "Public/PurchaseFlowOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Quantity = { UE4CodeGen_Private::EPropertyClass::Int, "Quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowOffer, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Quantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowOffer" },
		{ "ModuleRelativePath", "Public/PurchaseFlowOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferId = { UE4CodeGen_Private::EPropertyClass::Str, "OfferId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowOffer, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferNamespace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowOffer" },
		{ "ModuleRelativePath", "Public/PurchaseFlowOffer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferNamespace = { UE4CodeGen_Private::EPropertyClass::Str, "OfferNamespace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowOffer, OfferNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferNamespace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferNamespace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::NewProp_OfferNamespace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PurchaseFlow,
		nullptr,
		&NewStructOps,
		"PurchaseFlowOffer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPurchaseFlowOffer),
		alignof(FPurchaseFlowOffer),
		Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowOffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchaseFlowOffer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PurchaseFlow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchaseFlowOffer"), sizeof(FPurchaseFlowOffer), Get_Z_Construct_UScriptStruct_FPurchaseFlowOffer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurchaseFlowOffer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchaseFlowOffer_CRC() { return 3583276182U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
