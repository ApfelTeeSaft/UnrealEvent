// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/KeychainDownload.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeychainDownload() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FKeychainDownload();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
// End Cross Module References
class UScriptStruct* FKeychainDownload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FKeychainDownload_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeychainDownload, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("KeychainDownload"), sizeof(FKeychainDownload), Get_Z_Construct_UScriptStruct_FKeychainDownload_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeychainDownload(FKeychainDownload::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("KeychainDownload"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFKeychainDownload
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFKeychainDownload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeychainDownload")),new UScriptStruct::TCppStructOps<FKeychainDownload>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFKeychainDownload;
	struct Z_Construct_UScriptStruct_FKeychainDownload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeychainDownload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KeychainDownload.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeychainDownload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeychainDownload>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeychainDownload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"KeychainDownload",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FKeychainDownload),
		alignof(FKeychainDownload),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeychainDownload_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKeychainDownload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeychainDownload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeychainDownload_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeychainDownload"), sizeof(FKeychainDownload), Get_Z_Construct_UScriptStruct_FKeychainDownload_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeychainDownload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeychainDownload_CRC() { return 1615948112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
