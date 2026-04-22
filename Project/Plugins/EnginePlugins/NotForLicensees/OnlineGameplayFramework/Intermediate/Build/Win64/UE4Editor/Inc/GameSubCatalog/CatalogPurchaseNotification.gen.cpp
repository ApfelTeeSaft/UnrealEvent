// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogPurchaseNotification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogPurchaseNotification() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogPurchaseNotification();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpLootResult();
// End Cross Module References
class UScriptStruct* FCatalogPurchaseNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseNotification_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogPurchaseNotification, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogPurchaseNotification"), sizeof(FCatalogPurchaseNotification), Get_Z_Construct_UScriptStruct_FCatalogPurchaseNotification_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogPurchaseNotification(FCatalogPurchaseNotification::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogPurchaseNotification"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseNotification
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseNotification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogPurchaseNotification")),new UScriptStruct::TCppStructOps<FCatalogPurchaseNotification>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogPurchaseNotification;
	struct Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LootResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseNotification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogPurchaseNotification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::NewProp_LootResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogPurchaseNotification" },
		{ "ModuleRelativePath", "Public/CatalogPurchaseNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::NewProp_LootResult = { UE4CodeGen_Private::EPropertyClass::Struct, "LootResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogPurchaseNotification, LootResult), Z_Construct_UScriptStruct_FMcpLootResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::NewProp_LootResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::NewProp_LootResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::NewProp_LootResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogPurchaseNotification",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogPurchaseNotification),
		alignof(FCatalogPurchaseNotification),
		Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogPurchaseNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseNotification_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogPurchaseNotification"), sizeof(FCatalogPurchaseNotification), Get_Z_Construct_UScriptStruct_FCatalogPurchaseNotification_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogPurchaseNotification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogPurchaseNotification_CRC() { return 1357780368U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
