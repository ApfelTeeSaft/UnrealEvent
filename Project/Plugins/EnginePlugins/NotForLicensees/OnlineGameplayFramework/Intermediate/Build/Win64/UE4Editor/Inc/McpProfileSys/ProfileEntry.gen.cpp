// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/ProfileEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileEntry() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileEntry();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfile_NoRegister();
// End Cross Module References
class UScriptStruct* FProfileEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FProfileEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileEntry, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("ProfileEntry"), sizeof(FProfileEntry), Get_Z_Construct_UScriptStruct_FProfileEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileEntry(FProfileEntry::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("ProfileEntry"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileEntry
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileEntry")),new UScriptStruct::TCppStructOps<FProfileEntry>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFProfileEntry;
	struct Z_Construct_UScriptStruct_FProfileEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitingForRefreshAllProfilesResponse_MetaData[];
#endif
		static void NewProp_bWaitingForRefreshAllProfilesResponse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitingForRefreshAllProfilesResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProfileObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfileId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfileEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileEntry" },
		{ "ModuleRelativePath", "Public/ProfileEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse_SetBit(void* Obj)
	{
		((FProfileEntry*)Obj)->bWaitingForRefreshAllProfilesResponse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse = { UE4CodeGen_Private::EPropertyClass::Bool, "bWaitingForRefreshAllProfilesResponse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FProfileEntry), &Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileEntry" },
		{ "ModuleRelativePath", "Public/ProfileEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileObject = { UE4CodeGen_Private::EPropertyClass::Object, "ProfileObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileEntry, ProfileObject), Z_Construct_UClass_UMcpProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileEntry" },
		{ "ModuleRelativePath", "Public/ProfileEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileId = { UE4CodeGen_Private::EPropertyClass::Str, "ProfileId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileEntry, ProfileId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_bWaitingForRefreshAllProfilesResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileEntry_Statics::NewProp_ProfileId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"ProfileEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfileEntry),
		alignof(FProfileEntry),
		Z_Construct_UScriptStruct_FProfileEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileEntry"), sizeof(FProfileEntry), Get_Z_Construct_UScriptStruct_FProfileEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileEntry_CRC() { return 3493655974U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
