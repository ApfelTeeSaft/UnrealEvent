// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogMetaAssetInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogMetaAssetInfo() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogMetaAssetInfo();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FCatalogMetaAssetInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogMetaAssetInfo"), sizeof(FCatalogMetaAssetInfo), Get_Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogMetaAssetInfo(FCatalogMetaAssetInfo::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogMetaAssetInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogMetaAssetInfo
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogMetaAssetInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogMetaAssetInfo")),new UScriptStruct::TCppStructOps<FCatalogMetaAssetInfo>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogMetaAssetInfo;
	struct Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StructName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogMetaAssetInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogMetaAssetInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_Payload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogMetaAssetInfo" },
		{ "ModuleRelativePath", "Public/CatalogMetaAssetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Struct, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogMetaAssetInfo, Payload), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_Payload_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_StructName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogMetaAssetInfo" },
		{ "ModuleRelativePath", "Public/CatalogMetaAssetInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_StructName = { UE4CodeGen_Private::EPropertyClass::Str, "StructName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogMetaAssetInfo, StructName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_StructName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_StructName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::NewProp_StructName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogMetaAssetInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogMetaAssetInfo),
		alignof(FCatalogMetaAssetInfo),
		Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogMetaAssetInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogMetaAssetInfo"), sizeof(FCatalogMetaAssetInfo), Get_Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogMetaAssetInfo_CRC() { return 1804444981U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
