// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/DedicatedServerUrlContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedServerUrlContext() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerUrlContext();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseUrlContext();
// End Cross Module References
class UScriptStruct* FDedicatedServerUrlContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerUrlContext_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDedicatedServerUrlContext, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("DedicatedServerUrlContext"), sizeof(FDedicatedServerUrlContext), Get_Z_Construct_UScriptStruct_FDedicatedServerUrlContext_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDedicatedServerUrlContext(FDedicatedServerUrlContext::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("DedicatedServerUrlContext"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFDedicatedServerUrlContext
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFDedicatedServerUrlContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DedicatedServerUrlContext")),new UScriptStruct::TCppStructOps<FDedicatedServerUrlContext>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFDedicatedServerUrlContext;
	struct Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DedicatedServerUrlContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDedicatedServerUrlContext>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		Z_Construct_UScriptStruct_FBaseUrlContext,
		&NewStructOps,
		"DedicatedServerUrlContext",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FDedicatedServerUrlContext),
		alignof(FDedicatedServerUrlContext),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDedicatedServerUrlContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerUrlContext_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DedicatedServerUrlContext"), sizeof(FDedicatedServerUrlContext), Get_Z_Construct_UScriptStruct_FDedicatedServerUrlContext_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDedicatedServerUrlContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDedicatedServerUrlContext_CRC() { return 3941689860U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
