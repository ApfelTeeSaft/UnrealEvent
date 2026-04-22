// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogOfferRequirement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogOfferRequirement() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogOfferRequirement();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	GAMESUBCATALOG_API UEnum* Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType();
// End Cross Module References
class UScriptStruct* FCatalogOfferRequirement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogOfferRequirement_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogOfferRequirement, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogOfferRequirement"), sizeof(FCatalogOfferRequirement), Get_Z_Construct_UScriptStruct_FCatalogOfferRequirement_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogOfferRequirement(FCatalogOfferRequirement::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogOfferRequirement"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogOfferRequirement
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogOfferRequirement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogOfferRequirement")),new UScriptStruct::TCppStructOps<FCatalogOfferRequirement>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogOfferRequirement;
	struct Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequiredId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequirementType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequirementType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequirementType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogOfferRequirement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogOfferRequirement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequiredId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOfferRequirement" },
		{ "ModuleRelativePath", "Public/CatalogOfferRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequiredId = { UE4CodeGen_Private::EPropertyClass::Str, "RequiredId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOfferRequirement, RequiredId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequiredId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequiredId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_MinQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOfferRequirement" },
		{ "ModuleRelativePath", "Public/CatalogOfferRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_MinQuantity = { UE4CodeGen_Private::EPropertyClass::Int, "MinQuantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOfferRequirement, MinQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_MinQuantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_MinQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogOfferRequirement" },
		{ "ModuleRelativePath", "Public/CatalogOfferRequirement.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType = { UE4CodeGen_Private::EPropertyClass::Enum, "RequirementType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogOfferRequirement, RequirementType), Z_Construct_UEnum_GameSubCatalog_ECatalogRequirementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequiredId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_MinQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::NewProp_RequirementType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogOfferRequirement",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogOfferRequirement),
		alignof(FCatalogOfferRequirement),
		Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogOfferRequirement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogOfferRequirement_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogOfferRequirement"), sizeof(FCatalogOfferRequirement), Get_Z_Construct_UScriptStruct_FCatalogOfferRequirement_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogOfferRequirement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogOfferRequirement_CRC() { return 3873476045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
