// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PurchaseFlow/Public/PurchaseFlowReceiptParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchaseFlowReceiptParam() {}
// Cross Module References
	PURCHASEFLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam();
	UPackage* Z_Construct_UPackage__Script_PurchaseFlow();
	PURCHASEFLOW_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowOffer();
// End Cross Module References
class UScriptStruct* FPurchaseFlowReceiptParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PURCHASEFLOW_API uint32 Get_Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam, Z_Construct_UPackage__Script_PurchaseFlow(), TEXT("PurchaseFlowReceiptParam"), sizeof(FPurchaseFlowReceiptParam), Get_Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchaseFlowReceiptParam(FPurchaseFlowReceiptParam::StaticStruct, TEXT("/Script/PurchaseFlow"), TEXT("PurchaseFlowReceiptParam"), false, nullptr, nullptr);
static struct FScriptStruct_PurchaseFlow_StaticRegisterNativesFPurchaseFlowReceiptParam
{
	FScriptStruct_PurchaseFlow_StaticRegisterNativesFPurchaseFlowReceiptParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchaseFlowReceiptParam")),new UScriptStruct::TCppStructOps<FPurchaseFlowReceiptParam>);
	}
} ScriptStruct_PurchaseFlow_StaticRegisterNativesFPurchaseFlowReceiptParam;
	struct Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Offers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PurchaseFlowReceiptParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseFlowReceiptParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowReceiptParam" },
		{ "ModuleRelativePath", "Public/PurchaseFlowReceiptParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers = { UE4CodeGen_Private::EPropertyClass::Array, "Offers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowReceiptParam, Offers), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Offers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPurchaseFlowOffer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowReceiptParam" },
		{ "ModuleRelativePath", "Public/PurchaseFlowReceiptParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionState = { UE4CodeGen_Private::EPropertyClass::Str, "TransactionState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowReceiptParam, TransactionState), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PurchaseFlowReceiptParam" },
		{ "ModuleRelativePath", "Public/PurchaseFlowReceiptParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionId = { UE4CodeGen_Private::EPropertyClass::Str, "TransactionId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPurchaseFlowReceiptParam, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_Offers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::NewProp_TransactionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PurchaseFlow,
		nullptr,
		&NewStructOps,
		"PurchaseFlowReceiptParam",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPurchaseFlowReceiptParam),
		alignof(FPurchaseFlowReceiptParam),
		Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PurchaseFlow();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchaseFlowReceiptParam"), sizeof(FPurchaseFlowReceiptParam), Get_Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchaseFlowReceiptParam_CRC() { return 2863161917U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
