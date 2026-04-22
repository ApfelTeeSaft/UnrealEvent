// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/GiftBoxInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGiftBoxInfo() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FGiftBoxInfo();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpLootEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FGiftBoxInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FGiftBoxInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGiftBoxInfo, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("GiftBoxInfo"), sizeof(FGiftBoxInfo), Get_Z_Construct_UScriptStruct_FGiftBoxInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGiftBoxInfo(FGiftBoxInfo::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("GiftBoxInfo"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFGiftBoxInfo
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFGiftBoxInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GiftBoxInfo")),new UScriptStruct::TCppStructOps<FGiftBoxInfo>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFGiftBoxInfo;
	struct Z_Construct_UScriptStruct_FGiftBoxInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LootList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LootList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LootList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FromAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiftedOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GiftedOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GiftBoxInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGiftBoxInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftBoxInfo" },
		{ "ModuleRelativePath", "Public/GiftBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_Params = { UE4CodeGen_Private::EPropertyClass::Struct, "Params", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGiftBoxInfo, Params), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_Params_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftBoxInfo" },
		{ "ModuleRelativePath", "Public/GiftBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList = { UE4CodeGen_Private::EPropertyClass::Array, "LootList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGiftBoxInfo, LootList), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LootList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMcpLootEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_FromAccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftBoxInfo" },
		{ "ModuleRelativePath", "Public/GiftBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_FromAccountId = { UE4CodeGen_Private::EPropertyClass::Str, "FromAccountId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGiftBoxInfo, FromAccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_FromAccountId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_FromAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_GiftedOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftBoxInfo" },
		{ "ModuleRelativePath", "Public/GiftBoxInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_GiftedOn = { UE4CodeGen_Private::EPropertyClass::Struct, "GiftedOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGiftBoxInfo, GiftedOn), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_GiftedOn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_GiftedOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_LootList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_FromAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::NewProp_GiftedOn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"GiftBoxInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGiftBoxInfo),
		alignof(FGiftBoxInfo),
		Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGiftBoxInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGiftBoxInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GiftBoxInfo"), sizeof(FGiftBoxInfo), Get_Z_Construct_UScriptStruct_FGiftBoxInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGiftBoxInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGiftBoxInfo_CRC() { return 3877944665U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
