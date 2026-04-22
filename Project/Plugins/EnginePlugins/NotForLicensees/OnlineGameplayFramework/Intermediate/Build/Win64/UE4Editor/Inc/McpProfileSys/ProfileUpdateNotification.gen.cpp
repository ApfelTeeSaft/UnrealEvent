// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/ProfileUpdateNotification.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileUpdateNotification() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdateNotification();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FProfileUpdateNotification::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FProfileUpdateNotification_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileUpdateNotification, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("ProfileUpdateNotification"), sizeof(FProfileUpdateNotification), Get_Z_Construct_UScriptStruct_FProfileUpdateNotification_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileUpdateNotification(FProfileUpdateNotification::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("ProfileUpdateNotification"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdateNotification
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdateNotification()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileUpdateNotification")),new UScriptStruct::TCppStructOps<FProfileUpdateNotification>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdateNotification;
	struct Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Revision_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Revision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommandRevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockExpiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockExpiration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Changes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Changes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Changes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfileUpdateNotification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileUpdateNotification>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Revision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateNotification" },
		{ "ModuleRelativePath", "Public/ProfileUpdateNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Revision = { UE4CodeGen_Private::EPropertyClass::Int64, "Revision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfileUpdateNotification, Revision), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Revision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Revision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_CommandRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateNotification" },
		{ "ModuleRelativePath", "Public/ProfileUpdateNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_CommandRevision = { UE4CodeGen_Private::EPropertyClass::Int, "CommandRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateNotification, CommandRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_CommandRevision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_CommandRevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_LockExpiration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateNotification" },
		{ "ModuleRelativePath", "Public/ProfileUpdateNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_LockExpiration = { UE4CodeGen_Private::EPropertyClass::Struct, "LockExpiration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateNotification, LockExpiration), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_LockExpiration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_LockExpiration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateNotification" },
		{ "ModuleRelativePath", "Public/ProfileUpdateNotification.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes = { UE4CodeGen_Private::EPropertyClass::Array, "Changes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateNotification, Changes), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Changes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Revision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_CommandRevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_LockExpiration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::NewProp_Changes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"ProfileUpdateNotification",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfileUpdateNotification),
		alignof(FProfileUpdateNotification),
		Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdateNotification()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileUpdateNotification_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileUpdateNotification"), sizeof(FProfileUpdateNotification), Get_Z_Construct_UScriptStruct_FProfileUpdateNotification_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileUpdateNotification_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileUpdateNotification_CRC() { return 3252878492U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
