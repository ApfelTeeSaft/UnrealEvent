// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/ExchangeAccessParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExchangeAccessParams() {}
// Cross Module References
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FExchangeAccessParams();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
class UScriptStruct* FExchangeAccessParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCOUNT_API uint32 Get_Z_Construct_UScriptStruct_FExchangeAccessParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExchangeAccessParams, Z_Construct_UPackage__Script_Account(), TEXT("ExchangeAccessParams"), sizeof(FExchangeAccessParams), Get_Z_Construct_UScriptStruct_FExchangeAccessParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExchangeAccessParams(FExchangeAccessParams::StaticStruct, TEXT("/Script/Account"), TEXT("ExchangeAccessParams"), false, nullptr, nullptr);
static struct FScriptStruct_Account_StaticRegisterNativesFExchangeAccessParams
{
	FScriptStruct_Account_StaticRegisterNativesFExchangeAccessParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExchangeAccessParams")),new UScriptStruct::TCppStructOps<FExchangeAccessParams>);
	}
} ScriptStruct_Account_StaticRegisterNativesFExchangeAccessParams;
	struct Z_Construct_UScriptStruct_FExchangeAccessParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorReceipt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VendorReceipt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntitlementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EntitlementId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExchangeAccessParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExchangeAccessParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_AppStore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExchangeAccessParams" },
		{ "ModuleRelativePath", "Public/ExchangeAccessParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_AppStore = { UE4CodeGen_Private::EPropertyClass::Str, "AppStore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FExchangeAccessParams, AppStore), METADATA_PARAMS(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_AppStore_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_AppStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_VendorReceipt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExchangeAccessParams" },
		{ "ModuleRelativePath", "Public/ExchangeAccessParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_VendorReceipt = { UE4CodeGen_Private::EPropertyClass::Str, "VendorReceipt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FExchangeAccessParams, VendorReceipt), METADATA_PARAMS(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_VendorReceipt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_VendorReceipt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_ReceiptId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExchangeAccessParams" },
		{ "ModuleRelativePath", "Public/ExchangeAccessParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_ReceiptId = { UE4CodeGen_Private::EPropertyClass::Str, "ReceiptId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FExchangeAccessParams, ReceiptId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_ReceiptId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_ReceiptId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_EntitlementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExchangeAccessParams" },
		{ "ModuleRelativePath", "Public/ExchangeAccessParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_EntitlementId = { UE4CodeGen_Private::EPropertyClass::Str, "EntitlementId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FExchangeAccessParams, EntitlementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_EntitlementId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_EntitlementId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_AppStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_VendorReceipt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_ReceiptId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::NewProp_EntitlementId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
		nullptr,
		&NewStructOps,
		"ExchangeAccessParams",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FExchangeAccessParams),
		alignof(FExchangeAccessParams),
		Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExchangeAccessParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExchangeAccessParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExchangeAccessParams"), sizeof(FExchangeAccessParams), Get_Z_Construct_UScriptStruct_FExchangeAccessParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExchangeAccessParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExchangeAccessParams_CRC() { return 2671185284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
