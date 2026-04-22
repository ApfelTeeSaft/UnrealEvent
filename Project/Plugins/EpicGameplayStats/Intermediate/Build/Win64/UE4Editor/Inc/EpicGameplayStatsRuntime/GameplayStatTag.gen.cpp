// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/GameplayStatTag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayStatTag() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayStatTag();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FGameplayStatTag::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICGAMEPLAYSTATSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGameplayStatTag_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayStatTag, Z_Construct_UPackage__Script_EpicGameplayStatsRuntime(), TEXT("GameplayStatTag"), sizeof(FGameplayStatTag), Get_Z_Construct_UScriptStruct_FGameplayStatTag_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayStatTag(FGameplayStatTag::StaticStruct, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("GameplayStatTag"), false, nullptr, nullptr);
static struct FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFGameplayStatTag
{
	FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFGameplayStatTag()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayStatTag")),new UScriptStruct::TCppStructOps<FGameplayStatTag>);
	}
} ScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFGameplayStatTag;
	struct Z_Construct_UScriptStruct_FGameplayStatTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameplayStatTag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayStatTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayStatTag>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayStatTag_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameplayStatTag" },
		{ "ModuleRelativePath", "Public/GameplayStatTag.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayStatTag_Statics::NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Struct, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FGameplayStatTag, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatTag_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatTag_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayStatTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayStatTag_Statics::NewProp_Tag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayStatTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
		Z_Construct_UScriptStruct_FGameplayTag,
		&NewStructOps,
		"GameplayStatTag",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayStatTag),
		alignof(FGameplayStatTag),
		Z_Construct_UScriptStruct_FGameplayStatTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatTag_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayStatTag_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayStatTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayStatTag()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayStatTag_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayStatTag"), sizeof(FGameplayStatTag), Get_Z_Construct_UScriptStruct_FGameplayStatTag_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayStatTag_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayStatTag_CRC() { return 3077431618U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
