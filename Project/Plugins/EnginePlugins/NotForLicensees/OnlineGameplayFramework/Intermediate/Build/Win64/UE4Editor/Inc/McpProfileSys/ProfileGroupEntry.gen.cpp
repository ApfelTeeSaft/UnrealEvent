// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "McpProfileSys/Public/ProfileGroupEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileGroupEntry() {}
// Cross Module References
	MCPPROFILESYS_API UScriptStruct* Z_Construct_UScriptStruct_FProfileGroupEntry();
	UPackage* Z_Construct_UPackage__Script_McpProfileSys();
	MCPPROFILESYS_API UClass* Z_Construct_UClass_UMcpProfileGroup_NoRegister();
// End Cross Module References
class UScriptStruct* FProfileGroupEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MCPPROFILESYS_API uint32 Get_Z_Construct_UScriptStruct_FProfileGroupEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileGroupEntry, Z_Construct_UPackage__Script_McpProfileSys(), TEXT("ProfileGroupEntry"), sizeof(FProfileGroupEntry), Get_Z_Construct_UScriptStruct_FProfileGroupEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileGroupEntry(FProfileGroupEntry::StaticStruct, TEXT("/Script/McpProfileSys"), TEXT("ProfileGroupEntry"), false, nullptr, nullptr);
static struct FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileGroupEntry
{
	FScriptStruct_McpProfileSys_StaticRegisterNativesFProfileGroupEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileGroupEntry")),new UScriptStruct::TCppStructOps<FProfileGroupEntry>);
	}
} ScriptStruct_McpProfileSys_StaticRegisterNativesFProfileGroupEntry;
	struct Z_Construct_UScriptStruct_FProfileGroupEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProfileGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfileGroupEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileGroupEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::NewProp_ProfileGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfileGroupEntry" },
		{ "ModuleRelativePath", "Public/ProfileGroupEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::NewProp_ProfileGroup = { UE4CodeGen_Private::EPropertyClass::Object, "ProfileGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfileGroupEntry, ProfileGroup), Z_Construct_UClass_UMcpProfileGroup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::NewProp_ProfileGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::NewProp_ProfileGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::NewProp_ProfileGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_McpProfileSys,
		nullptr,
		&NewStructOps,
		"ProfileGroupEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfileGroupEntry),
		alignof(FProfileGroupEntry),
		Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileGroupEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileGroupEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_McpProfileSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileGroupEntry"), sizeof(FProfileGroupEntry), Get_Z_Construct_UScriptStruct_FProfileGroupEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileGroupEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileGroupEntry_CRC() { return 389681495U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
