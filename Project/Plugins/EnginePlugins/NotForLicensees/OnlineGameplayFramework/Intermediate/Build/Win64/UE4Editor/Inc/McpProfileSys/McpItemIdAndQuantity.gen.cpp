// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpItemIdAndQuantity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpItemIdAndQuantity() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpItemIdAndQuantity();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpLootEntry();
// End Cross Module References
class UScriptStruct* FMcpItemIdAndQuantity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpItemIdAndQuantity, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpItemIdAndQuantity"), sizeof(FMcpItemIdAndQuantity), Get_Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpItemIdAndQuantity(FMcpItemIdAndQuantity::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpItemIdAndQuantity"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpItemIdAndQuantity
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpItemIdAndQuantity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpItemIdAndQuantity")),new UScriptStruct::TCppStructOps<FMcpItemIdAndQuantity>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpItemIdAndQuantity;
	struct Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpItemIdAndQuantity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpItemIdAndQuantity>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		Z_Construct_UScriptStruct_FMcpLootEntry,
		&NewStructOps,
		"McpItemIdAndQuantity",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpItemIdAndQuantity),
		alignof(FMcpItemIdAndQuantity),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpItemIdAndQuantity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpItemIdAndQuantity"), sizeof(FMcpItemIdAndQuantity), Get_Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpItemIdAndQuantity_CRC() { return 3574665802U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
