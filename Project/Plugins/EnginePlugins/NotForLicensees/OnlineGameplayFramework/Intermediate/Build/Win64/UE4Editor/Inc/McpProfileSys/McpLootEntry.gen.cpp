// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpLootEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpLootEntry() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpLootEntry();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FMcpLootEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpLootEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpLootEntry, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpLootEntry"), sizeof(FMcpLootEntry), Get_Z_Construct_UScriptStruct_FMcpLootEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpLootEntry(FMcpLootEntry::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpLootEntry"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpLootEntry
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpLootEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpLootEntry")),new UScriptStruct::TCppStructOps<FMcpLootEntry>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpLootEntry;
	struct Z_Construct_UScriptStruct_FMcpLootEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpLootEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpLootEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootEntry" },
		{ "ModuleRelativePath", "Public/McpLootEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemProfile = { UE4CodeGen_Private::EPropertyClass::Str, "ItemProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootEntry, ItemProfile), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemProfile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootEntry" },
		{ "ModuleRelativePath", "Public/McpLootEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Attributes = { UE4CodeGen_Private::EPropertyClass::Struct, "Attributes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootEntry, Attributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Attributes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootEntry" },
		{ "ModuleRelativePath", "Public/McpLootEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Quantity = { UE4CodeGen_Private::EPropertyClass::Int, "Quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootEntry, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Quantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootEntry" },
		{ "ModuleRelativePath", "Public/McpLootEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemGuid = { UE4CodeGen_Private::EPropertyClass::Str, "ItemGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootEntry, ItemGuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootEntry" },
		{ "ModuleRelativePath", "Public/McpLootEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Str, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootEntry, ItemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpLootEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootEntry_Statics::NewProp_ItemType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpLootEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"McpLootEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpLootEntry),
		alignof(FMcpLootEntry),
		Z_Construct_UScriptStruct_FMcpLootEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpLootEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpLootEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpLootEntry"), sizeof(FMcpLootEntry), Get_Z_Construct_UScriptStruct_FMcpLootEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpLootEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpLootEntry_CRC() { return 4125645597U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
