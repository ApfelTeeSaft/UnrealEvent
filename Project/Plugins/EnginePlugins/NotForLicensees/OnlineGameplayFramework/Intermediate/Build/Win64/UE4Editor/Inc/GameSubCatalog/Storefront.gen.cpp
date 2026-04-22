// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/Storefront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorefront() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FStorefront();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogOffer();
// End Cross Module References
class UScriptStruct* FStorefront::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FStorefront_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStorefront, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("Storefront"), sizeof(FStorefront), Get_Z_Construct_UScriptStruct_FStorefront_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStorefront(FStorefront::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("Storefront"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFStorefront
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFStorefront()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Storefront")),new UScriptStruct::TCppStructOps<FStorefront>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFStorefront;
	struct Z_Construct_UScriptStruct_FStorefront_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CatalogEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CatalogEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorefront_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Storefront.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStorefront_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStorefront>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Storefront" },
		{ "ModuleRelativePath", "Public/Storefront.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries = { UE4CodeGen_Private::EPropertyClass::Array, "CatalogEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStorefront, CatalogEntries), METADATA_PARAMS(Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CatalogEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCatalogOffer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Storefront" },
		{ "ModuleRelativePath", "Public/Storefront.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStorefront, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStorefront_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_CatalogEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStorefront_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStorefront_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"Storefront",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FStorefront),
		alignof(FStorefront),
		Z_Construct_UScriptStruct_FStorefront_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStorefront_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStorefront_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStorefront_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStorefront()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStorefront_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Storefront"), sizeof(FStorefront), Get_Z_Construct_UScriptStruct_FStorefront_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStorefront_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStorefront_CRC() { return 1863673793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
