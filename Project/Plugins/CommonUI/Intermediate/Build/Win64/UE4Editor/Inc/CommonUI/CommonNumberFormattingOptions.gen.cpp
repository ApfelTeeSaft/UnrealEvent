// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonNumberFormattingOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonNumberFormattingOptions() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonNumberFormattingOptions();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERoundingMode();
// End Cross Module References
class UScriptStruct* FCommonNumberFormattingOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions, Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonNumberFormattingOptions"), sizeof(FCommonNumberFormattingOptions), Get_Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonNumberFormattingOptions(FCommonNumberFormattingOptions::StaticStruct, TEXT("/Script/CommonUI"), TEXT("CommonNumberFormattingOptions"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFCommonNumberFormattingOptions
{
	FScriptStruct_CommonUI_StaticRegisterNativesFCommonNumberFormattingOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonNumberFormattingOptions")),new UScriptStruct::TCppStructOps<FCommonNumberFormattingOptions>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFCommonNumberFormattingOptions;
	struct Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumFractionalDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumFractionalDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumIntegralDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumIntegralDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseGrouping_MetaData[];
#endif
		static void NewProp_UseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseGrouping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonNumberFormattingOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonNumberFormattingOptions" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MaximumFractionalDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonNumberFormattingOptions" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MinimumFractionalDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonNumberFormattingOptions" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MaximumIntegralDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonNumberFormattingOptions" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MinimumIntegralDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonNumberFormattingOptions" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_SetBit(void* Obj)
	{
		((FCommonNumberFormattingOptions*)Obj)->UseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "UseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonNumberFormattingOptions), &Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonNumberFormattingOptions" },
		{ "ModuleRelativePath", "Public/CommonNumberFormattingOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonNumberFormattingOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCommonNumberFormattingOptions),
		alignof(FCommonNumberFormattingOptions),
		Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonNumberFormattingOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonNumberFormattingOptions"), sizeof(FCommonNumberFormattingOptions), Get_Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_CRC() { return 4225991787U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
