// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogGiftInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogGiftInfo() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogGiftInfo();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogOfferRequirement();
// End Cross Module References
class UScriptStruct* FCatalogGiftInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogGiftInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogGiftInfo, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogGiftInfo"), sizeof(FCatalogGiftInfo), Get_Z_Construct_UScriptStruct_FCatalogGiftInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogGiftInfo(FCatalogGiftInfo::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogGiftInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogGiftInfo
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogGiftInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogGiftInfo")),new UScriptStruct::TCppStructOps<FCatalogGiftInfo>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogGiftInfo;
	struct Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseRequirements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PurchaseRequirements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PurchaseRequirements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcedGiftBoxTemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ForcedGiftBoxTemplateId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogGiftInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogGiftInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGiftInfo" },
		{ "ModuleRelativePath", "Public/CatalogGiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements = { UE4CodeGen_Private::EPropertyClass::Array, "PurchaseRequirements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogGiftInfo, PurchaseRequirements), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PurchaseRequirements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCatalogOfferRequirement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_ForcedGiftBoxTemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGiftInfo" },
		{ "ModuleRelativePath", "Public/CatalogGiftInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_ForcedGiftBoxTemplateId = { UE4CodeGen_Private::EPropertyClass::Str, "ForcedGiftBoxTemplateId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogGiftInfo, ForcedGiftBoxTemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_ForcedGiftBoxTemplateId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_ForcedGiftBoxTemplateId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogGiftInfo" },
		{ "ModuleRelativePath", "Public/CatalogGiftInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FCatalogGiftInfo*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCatalogGiftInfo), &Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_PurchaseRequirements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_ForcedGiftBoxTemplateId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::NewProp_bIsEnabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogGiftInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogGiftInfo),
		alignof(FCatalogGiftInfo),
		Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogGiftInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogGiftInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogGiftInfo"), sizeof(FCatalogGiftInfo), Get_Z_Construct_UScriptStruct_FCatalogGiftInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogGiftInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogGiftInfo_CRC() { return 3875419226U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
