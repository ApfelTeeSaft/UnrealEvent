// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/CommonInputKeyBrushConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputKeyBrushConfiguration() {}
// Cross Module References
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FCommonInputKeyBrushConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONINPUT_API uint32 Get_Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration, Z_Construct_UPackage__Script_CommonInput(), TEXT("CommonInputKeyBrushConfiguration"), sizeof(FCommonInputKeyBrushConfiguration), Get_Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonInputKeyBrushConfiguration(FCommonInputKeyBrushConfiguration::StaticStruct, TEXT("/Script/CommonInput"), TEXT("CommonInputKeyBrushConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_CommonInput_StaticRegisterNativesFCommonInputKeyBrushConfiguration
{
	FScriptStruct_CommonInput_StaticRegisterNativesFCommonInputKeyBrushConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonInputKeyBrushConfiguration")),new UScriptStruct::TCppStructOps<FCommonInputKeyBrushConfiguration>);
	}
} ScriptStruct_CommonInput_StaticRegisterNativesFCommonInputKeyBrushConfiguration;
	struct Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonInputKeyBrushConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputKeyBrushConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputKeyBrushConfiguration" },
		{ "ModuleRelativePath", "Public/CommonInputKeyBrushConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputKeyBrushConfiguration, KeyBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputKeyBrushConfiguration" },
		{ "ModuleRelativePath", "Public/CommonInputKeyBrushConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputKeyBrushConfiguration, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		&NewStructOps,
		"CommonInputKeyBrushConfiguration",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCommonInputKeyBrushConfiguration),
		alignof(FCommonInputKeyBrushConfiguration),
		Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonInputKeyBrushConfiguration"), sizeof(FCommonInputKeyBrushConfiguration), Get_Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_CRC() { return 4065016188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
