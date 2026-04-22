// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogReceiptInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogReceiptInfo() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogReceiptInfo();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_EAppStore();
// End Cross Module References
class UScriptStruct* FCatalogReceiptInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogReceiptInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogReceiptInfo, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogReceiptInfo"), sizeof(FCatalogReceiptInfo), Get_Z_Construct_UScriptStruct_FCatalogReceiptInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogReceiptInfo(FCatalogReceiptInfo::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogReceiptInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogReceiptInfo
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogReceiptInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogReceiptInfo")),new UScriptStruct::TCppStructOps<FCatalogReceiptInfo>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogReceiptInfo;
	struct Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseCorrelationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchaseCorrelationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppStoreId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppStoreId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppStore_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppStore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogReceiptInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogReceiptInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_PurchaseCorrelationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogReceiptInfo" },
		{ "ModuleRelativePath", "Public/CatalogReceiptInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_PurchaseCorrelationId = { UE4CodeGen_Private::EPropertyClass::Str, "PurchaseCorrelationId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogReceiptInfo, PurchaseCorrelationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_PurchaseCorrelationId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_PurchaseCorrelationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogReceiptInfo" },
		{ "ModuleRelativePath", "Public/CatalogReceiptInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptInfo = { UE4CodeGen_Private::EPropertyClass::Str, "ReceiptInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogReceiptInfo, ReceiptInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogReceiptInfo" },
		{ "ModuleRelativePath", "Public/CatalogReceiptInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptId = { UE4CodeGen_Private::EPropertyClass::Str, "ReceiptId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogReceiptInfo, ReceiptId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStoreId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogReceiptInfo" },
		{ "ModuleRelativePath", "Public/CatalogReceiptInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStoreId = { UE4CodeGen_Private::EPropertyClass::Str, "AppStoreId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogReceiptInfo, AppStoreId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStoreId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStoreId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogReceiptInfo" },
		{ "ModuleRelativePath", "Public/CatalogReceiptInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStore = { UE4CodeGen_Private::EPropertyClass::Byte, "AppStore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogReceiptInfo, AppStore), Z_Construct_UEnum_GameSubCatalog_EAppStore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStore_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_PurchaseCorrelationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_ReceiptId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStoreId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::NewProp_AppStore,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogReceiptInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogReceiptInfo),
		alignof(FCatalogReceiptInfo),
		Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogReceiptInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogReceiptInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogReceiptInfo"), sizeof(FCatalogReceiptInfo), Get_Z_Construct_UScriptStruct_FCatalogReceiptInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogReceiptInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogReceiptInfo_CRC() { return 3556877923U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
