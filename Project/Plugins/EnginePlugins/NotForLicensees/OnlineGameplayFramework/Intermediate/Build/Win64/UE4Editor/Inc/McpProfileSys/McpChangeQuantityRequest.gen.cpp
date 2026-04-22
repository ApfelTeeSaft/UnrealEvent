// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpChangeQuantityRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpChangeQuantityRequest() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpChangeQuantityRequest();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
// End Cross Module References
class UScriptStruct* FMcpChangeQuantityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpChangeQuantityRequest"), sizeof(FMcpChangeQuantityRequest), Get_Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpChangeQuantityRequest(FMcpChangeQuantityRequest::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpChangeQuantityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpChangeQuantityRequest
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpChangeQuantityRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpChangeQuantityRequest")),new UScriptStruct::TCppStructOps<FMcpChangeQuantityRequest>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpChangeQuantityRequest;
	struct Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaQuantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeltaQuantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpChangeQuantityRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpChangeQuantityRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_DeltaQuantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpChangeQuantityRequest" },
		{ "ModuleRelativePath", "Public/McpChangeQuantityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_DeltaQuantity = { UE4CodeGen_Private::EPropertyClass::Int, "DeltaQuantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpChangeQuantityRequest, DeltaQuantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_DeltaQuantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_DeltaQuantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpChangeQuantityRequest" },
		{ "ModuleRelativePath", "Public/McpChangeQuantityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_ItemId = { UE4CodeGen_Private::EPropertyClass::Str, "ItemId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpChangeQuantityRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_DeltaQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"McpChangeQuantityRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpChangeQuantityRequest),
		alignof(FMcpChangeQuantityRequest),
		Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpChangeQuantityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpChangeQuantityRequest"), sizeof(FMcpChangeQuantityRequest), Get_Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpChangeQuantityRequest_CRC() { return 493216129U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
