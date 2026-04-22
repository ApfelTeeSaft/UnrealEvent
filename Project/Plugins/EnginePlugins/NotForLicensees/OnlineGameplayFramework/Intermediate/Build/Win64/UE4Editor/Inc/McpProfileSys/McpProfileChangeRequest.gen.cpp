// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/McpProfileChangeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMcpProfileChangeRequest() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpProfileChangeRequest();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpChangeAttributesRequest();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpChangeQuantityRequest();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpRemoveItemRequest();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FMcpAddItemRequest();
// End Cross Module References
class UScriptStruct* FMcpProfileChangeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FMcpProfileChangeRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMcpProfileChangeRequest, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("McpProfileChangeRequest"), sizeof(FMcpProfileChangeRequest), Get_Z_Construct_UScriptStruct_FMcpProfileChangeRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMcpProfileChangeRequest(FMcpProfileChangeRequest::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("McpProfileChangeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpProfileChangeRequest
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFMcpProfileChangeRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("McpProfileChangeRequest")),new UScriptStruct::TCppStructOps<FMcpProfileChangeRequest>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFMcpProfileChangeRequest;
	struct Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeStatRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangeStatRequests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeStatRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeAttributesRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangeAttributesRequests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeAttributesRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeQuantityRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangeQuantityRequests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeQuantityRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveRequests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemoveRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddRequests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCommandRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseCommandRevision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMcpProfileChangeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileChangeRequest" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests = { UE4CodeGen_Private::EPropertyClass::Array, "ChangeStatRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpProfileChangeRequest, ChangeStatRequests), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChangeStatRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileChangeRequest" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests = { UE4CodeGen_Private::EPropertyClass::Array, "ChangeAttributesRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpProfileChangeRequest, ChangeAttributesRequests), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChangeAttributesRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMcpChangeAttributesRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileChangeRequest" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests = { UE4CodeGen_Private::EPropertyClass::Array, "ChangeQuantityRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpProfileChangeRequest, ChangeQuantityRequests), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChangeQuantityRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMcpChangeQuantityRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileChangeRequest" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests = { UE4CodeGen_Private::EPropertyClass::Array, "RemoveRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpProfileChangeRequest, RemoveRequests), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RemoveRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMcpRemoveItemRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileChangeRequest" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests = { UE4CodeGen_Private::EPropertyClass::Array, "AddRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpProfileChangeRequest, AddRequests), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AddRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMcpAddItemRequest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_BaseCommandRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "McpProfileChangeRequest" },
		{ "ModuleRelativePath", "Public/McpProfileChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_BaseCommandRevision = { UE4CodeGen_Private::EPropertyClass::Int, "BaseCommandRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMcpProfileChangeRequest, BaseCommandRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_BaseCommandRevision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_BaseCommandRevision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeStatRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeAttributesRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_ChangeQuantityRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_RemoveRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_AddRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::NewProp_BaseCommandRevision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"McpProfileChangeRequest",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMcpProfileChangeRequest),
		alignof(FMcpProfileChangeRequest),
		Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMcpProfileChangeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMcpProfileChangeRequest_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("McpProfileChangeRequest"), sizeof(FMcpProfileChangeRequest), Get_Z_Construct_UScriptStruct_FMcpProfileChangeRequest_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMcpProfileChangeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMcpProfileChangeRequest_CRC() { return 1042518475U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
