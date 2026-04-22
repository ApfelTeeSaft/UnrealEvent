// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpChangeAttributesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpChangeAttributesRequest() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpChangeAttributesRequest();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FMcpChangeAttributesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpChangeAttributesRequest"), sizeof(FMcpChangeAttributesRequest), Get_Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpChangeAttributesRequest(FMcpChangeAttributesRequest::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpChangeAttributesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpChangeAttributesRequest
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpChangeAttributesRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpChangeAttributesRequest")),new UScriptStruct::TCppStructOps<FMcpChangeAttributesRequest>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpChangeAttributesRequest;
	struct Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpChangeAttributesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpChangeAttributesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpChangeAttributesRequest" },
		{ "ModuleRelativePath", "Public/McpChangeAttributesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_Attributes = { UE4CodeGen_Private::EPropertyClass::Struct, "Attributes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpChangeAttributesRequest, Attributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_Attributes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpChangeAttributesRequest" },
		{ "ModuleRelativePath", "Public/McpChangeAttributesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_ItemId = { UE4CodeGen_Private::EPropertyClass::Str, "ItemId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpChangeAttributesRequest, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"McpChangeAttributesRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpChangeAttributesRequest),
		alignof(FMcpChangeAttributesRequest),
		Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpChangeAttributesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpChangeAttributesRequest"), sizeof(FMcpChangeAttributesRequest), Get_Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpChangeAttributesRequest_CRC() { return 2460515831U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
