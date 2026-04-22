// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/ProfileUpdateSingle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileUpdateSingle() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdateSingle();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FProfileUpdateSingle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FProfileUpdateSingle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileUpdateSingle, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("ProfileUpdateSingle"), sizeof(FProfileUpdateSingle), Get_Z_Construct_UScriptStruct_FProfileUpdateSingle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileUpdateSingle(FProfileUpdateSingle::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("ProfileUpdateSingle"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdateSingle
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdateSingle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileUpdateSingle")),new UScriptStruct::TCppStructOps<FProfileUpdateSingle>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFProfileUpdateSingle;
	struct Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileCommandRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileCommandRevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notifications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Notifications;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Notifications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockExpiration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockExpiration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileChanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileChanges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileChanges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileChangesBaseRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ProfileChangesBaseRevision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileRevision_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ProfileRevision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileUpdateSingle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileCommandRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileCommandRevision = { UE4CodeGen_Private::EPropertyClass::Int, "ProfileCommandRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, ProfileCommandRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileCommandRevision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileCommandRevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications = { UE4CodeGen_Private::EPropertyClass::Array, "Notifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, Notifications), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Notifications", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_LockExpiration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_LockExpiration = { UE4CodeGen_Private::EPropertyClass::Struct, "LockExpiration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, LockExpiration), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_LockExpiration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_LockExpiration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges = { UE4CodeGen_Private::EPropertyClass::Array, "ProfileChanges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, ProfileChanges), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileChanges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChangesBaseRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChangesBaseRevision = { UE4CodeGen_Private::EPropertyClass::Int64, "ProfileChangesBaseRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, ProfileChangesBaseRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChangesBaseRevision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChangesBaseRevision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileId = { UE4CodeGen_Private::EPropertyClass::Str, "ProfileId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, ProfileId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileRevision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileUpdateSingle" },
		{ "ModuleRelativePath", "Public/ProfileUpdateSingle.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileRevision = { UE4CodeGen_Private::EPropertyClass::Int64, "ProfileRevision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FProfileUpdateSingle, ProfileRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileRevision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileRevision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileCommandRevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_Notifications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_LockExpiration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChanges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileChangesBaseRevision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::NewProp_ProfileRevision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"ProfileUpdateSingle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfileUpdateSingle),
		alignof(FProfileUpdateSingle),
		Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileUpdateSingle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileUpdateSingle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileUpdateSingle"), sizeof(FProfileUpdateSingle), Get_Z_Construct_UScriptStruct_FProfileUpdateSingle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileUpdateSingle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileUpdateSingle_CRC() { return 2090020426U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
