// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpRemoveItemRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpRemoveItemRequest() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpRemoveItemRequest();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
// End Cross Module References
class UScriptStruct* FMcpRemoveItemRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpRemoveItemRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpRemoveItemRequest, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpRemoveItemRequest"), sizeof(FMcpRemoveItemRequest), Get_Z_Construct_UScriptStruct_FMcpRemoveItemRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpRemoveItemRequest(FMcpRemoveItemRequest::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpRemoveItemRequest"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpRemoveItemRequest
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpRemoveItemRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpRemoveItemRequest")),new UScriptStruct::TCppStructOps<FMcpRemoveItemRequest>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpRemoveItemRequest;
	struct Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpRemoveItemRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpRemoveItemRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpRemoveItemRequest" },
		{ "ModuleRelativePath", "Public/McpRemoveItemRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::NewProp_ItemId = { UE4CodeGen_Private::EPropertyClass::Str, "ItemId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpRemoveItemRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"McpRemoveItemRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpRemoveItemRequest),
		alignof(FMcpRemoveItemRequest),
		Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpRemoveItemRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpRemoveItemRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpRemoveItemRequest"), sizeof(FMcpRemoveItemRequest), Get_Z_Construct_UScriptStruct_FMcpRemoveItemRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpRemoveItemRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpRemoveItemRequest_CRC() { return 3148222917U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
