// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/AccountIdAndProfileResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccountIdAndProfileResponse() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FAccountIdAndProfileResponse();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdate();
// End Cross Module References
class UScriptStruct* FAccountIdAndProfileResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("AccountIdAndProfileResponse"), sizeof(FAccountIdAndProfileResponse), Get_Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccountIdAndProfileResponse(FAccountIdAndProfileResponse::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("AccountIdAndProfileResponse"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFAccountIdAndProfileResponse
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFAccountIdAndProfileResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AccountIdAndProfileResponse")),new UScriptStruct::TCppStructOps<FAccountIdAndProfileResponse>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFAccountIdAndProfileResponse;
	struct Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Response;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccountIdAndProfileResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccountIdAndProfileResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_Response_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountIdAndProfileResponse" },
		{ "ModuleRelativePath", "Public/AccountIdAndProfileResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_Response = { UE4CodeGen_Private::EPropertyClass::Struct, "Response", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAccountIdAndProfileResponse, Response), Z_Construct_UScriptStruct_FProfileUpdate, METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_Response_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_Response_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_AccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AccountIdAndProfileResponse" },
		{ "ModuleRelativePath", "Public/AccountIdAndProfileResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_AccountId = { UE4CodeGen_Private::EPropertyClass::Str, "AccountId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAccountIdAndProfileResponse, AccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_AccountId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_AccountId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_Response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::NewProp_AccountId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"AccountIdAndProfileResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAccountIdAndProfileResponse),
		alignof(FAccountIdAndProfileResponse),
		Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccountIdAndProfileResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccountIdAndProfileResponse"), sizeof(FAccountIdAndProfileResponse), Get_Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccountIdAndProfileResponse_CRC() { return 1863282591U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
