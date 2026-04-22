// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpLootResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpLootResult() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpLootResult();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpLootEntry();
// End Cross Module References
class UScriptStruct* FMcpLootResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpLootResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpLootResult, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpLootResult"), sizeof(FMcpLootResult), Get_Z_Construct_UScriptStruct_FMcpLootResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpLootResult(FMcpLootResult::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpLootResult"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpLootResult
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpLootResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpLootResult")),new UScriptStruct::TCppStructOps<FMcpLootResult>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpLootResult;
	struct Z_Construct_UScriptStruct_FMcpLootResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TierGroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TierGroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpLootResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpLootResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootResult" },
		{ "ModuleRelativePath", "Public/McpLootResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootResult, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMcpLootEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_TierGroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpLootResult" },
		{ "ModuleRelativePath", "Public/McpLootResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_TierGroupName = { UE4CodeGen_Private::EPropertyClass::Str, "TierGroupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpLootResult, TierGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_TierGroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_TierGroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpLootResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpLootResult_Statics::NewProp_TierGroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpLootResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"McpLootResult",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpLootResult),
		alignof(FMcpLootResult),
		Z_Construct_UScriptStruct_FMcpLootResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootResult_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpLootResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpLootResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpLootResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpLootResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpLootResult"), sizeof(FMcpLootResult), Get_Z_Construct_UScriptStruct_FMcpLootResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpLootResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpLootResult_CRC() { return 1459072170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
