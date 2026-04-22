// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/ProfileUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileUpdate() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdate();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdateSingle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FProfileUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FProfileUpdate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileUpdate, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("ProfileUpdate"), sizeof(FProfileUpdate), Get_Z_Construct_UScriptStruct_FProfileUpdate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileUpdate(FProfileUpdate::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("ProfileUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdate
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileUpdate")),new UScriptStruct::TCppStructOps<FProfileUpdate>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdate;
	struct Z_Construct_UScriptStruct_FProfileUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiUpdate_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfileUpdate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdate" },
		{ "ModuleRelativePath", "Public/ProfileUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate = { UE4CodeGen_Private::EPropertyClass::Array, "MultiUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdate, MultiUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MultiUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProfileUpdateSingle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ServerTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdate" },
		{ "ModuleRelativePath", "Public/ProfileUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ServerTime = { UE4CodeGen_Private::EPropertyClass::Struct, "ServerTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdate, ServerTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ServerTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ServerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ResponseVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdate" },
		{ "ModuleRelativePath", "Public/ProfileUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ResponseVersion = { UE4CodeGen_Private::EPropertyClass::Int, "ResponseVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdate, ResponseVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ResponseVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ResponseVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_MultiUpdate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ServerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdate_Statics::NewProp_ResponseVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		Z_Construct_UScriptStruct_FProfileUpdateSingle,
		&NewStructOps,
		"ProfileUpdate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfileUpdate),
		alignof(FProfileUpdate),
		Z_Construct_UScriptStruct_FProfileUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileUpdate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileUpdate"), sizeof(FProfileUpdate), Get_Z_Construct_UScriptStruct_FProfileUpdate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileUpdate_CRC() { return 2377974035U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
