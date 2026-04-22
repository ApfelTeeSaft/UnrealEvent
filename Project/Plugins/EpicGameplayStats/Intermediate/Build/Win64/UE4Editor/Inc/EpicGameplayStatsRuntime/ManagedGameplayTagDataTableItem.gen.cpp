// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/ManagedGameplayTagDataTableItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagedGameplayTagDataTableItem() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
class UScriptStruct* FManagedGameplayTagDataTableItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICGAMEPLAYSTATSRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem, Z_Construct_UPackage__Script_EpicGameplayStatsRuntime(), TEXT("ManagedGameplayTagDataTableItem"), sizeof(FManagedGameplayTagDataTableItem), Get_Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManagedGameplayTagDataTableItem(FManagedGameplayTagDataTableItem::StaticStruct, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("ManagedGameplayTagDataTableItem"), false, nullptr, nullptr);
static struct FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFManagedGameplayTagDataTableItem
{
	FScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFManagedGameplayTagDataTableItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManagedGameplayTagDataTableItem")),new UScriptStruct::TCppStructOps<FManagedGameplayTagDataTableItem>);
	}
} ScriptStruct_EpicGameplayStatsRuntime_StaticRegisterNativesFManagedGameplayTagDataTableItem;
	struct Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManagedGameplayTagDataTableItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedGameplayTagDataTableItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_DataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManagedGameplayTagDataTableItem" },
		{ "ModuleRelativePath", "Public/ManagedGameplayTagDataTableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_DataTable = { UE4CodeGen_Private::EPropertyClass::Object, "DataTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManagedGameplayTagDataTableItem, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_DataTable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_RootTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManagedGameplayTagDataTableItem" },
		{ "ModuleRelativePath", "Public/ManagedGameplayTagDataTableItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_RootTag = { UE4CodeGen_Private::EPropertyClass::Struct, "RootTag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManagedGameplayTagDataTableItem, RootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_RootTag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_RootTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::NewProp_RootTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
		nullptr,
		&NewStructOps,
		"ManagedGameplayTagDataTableItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FManagedGameplayTagDataTableItem),
		alignof(FManagedGameplayTagDataTableItem),
		Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManagedGameplayTagDataTableItem"), sizeof(FManagedGameplayTagDataTableItem), Get_Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManagedGameplayTagDataTableItem_CRC() { return 124177012U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
