// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/CatalogKeyValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogKeyValue() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FCatalogKeyValue();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
// End Cross Module References
class UScriptStruct* FCatalogKeyValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FCatalogKeyValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatalogKeyValue, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("CatalogKeyValue"), sizeof(FCatalogKeyValue), Get_Z_Construct_UScriptStruct_FCatalogKeyValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCatalogKeyValue(FCatalogKeyValue::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("CatalogKeyValue"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogKeyValue
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogKeyValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CatalogKeyValue")),new UScriptStruct::TCppStructOps<FCatalogKeyValue>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFCatalogKeyValue;
	struct Z_Construct_UScriptStruct_FCatalogKeyValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatalogKeyValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatalogKeyValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogKeyValue" },
		{ "ModuleRelativePath", "Public/CatalogKeyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogKeyValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatalogKeyValue" },
		{ "ModuleRelativePath", "Public/CatalogKeyValue.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCatalogKeyValue, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"CatalogKeyValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCatalogKeyValue),
		alignof(FCatalogKeyValue),
		Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatalogKeyValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCatalogKeyValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CatalogKeyValue"), sizeof(FCatalogKeyValue), Get_Z_Construct_UScriptStruct_FCatalogKeyValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCatalogKeyValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCatalogKeyValue_CRC() { return 2766699126U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
