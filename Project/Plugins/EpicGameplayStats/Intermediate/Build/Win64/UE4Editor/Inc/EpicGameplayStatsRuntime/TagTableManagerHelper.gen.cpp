// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/TagTableManagerHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTagTableManagerHelper() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTagTableManagerHelper();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
// End Cross Module References
class UScriptStruct* FTagTableManagerHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICGAMEPLAYSTATSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTagTableManagerHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagTableManagerHelper, Z_Construct_UPackage__Script_EpicGameplayStatsRuntime(), TEXT("TagTableManagerHelper"), sizeof(FTagTableManagerHelper), Get_Z_Construct_UScriptStruct_FTagTableManagerHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTagTableManagerHelper(FTagTableManagerHelper::StaticStruct, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("TagTableManagerHelper"), false, nullptr, nullptr);
static struct FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFTagTableManagerHelper
{
	FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFTagTableManagerHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TagTableManagerHelper")),new UScriptStruct::TCppStructOps<FTagTableManagerHelper>);
	}
} ScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFTagTableManagerHelper;
	struct Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TagTableManagerHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagTableManagerHelper>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
		nullptr,
		&NewStructOps,
		"TagTableManagerHelper",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTagTableManagerHelper),
		alignof(FTagTableManagerHelper),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagTableManagerHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTagTableManagerHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TagTableManagerHelper"), sizeof(FTagTableManagerHelper), Get_Z_Construct_UScriptStruct_FTagTableManagerHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTagTableManagerHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTagTableManagerHelper_CRC() { return 1299264744U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
