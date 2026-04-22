// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonInputActionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputActionData() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionData();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputTypeInfo();
// End Cross Module References
class UScriptStruct* FCommonInputActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FCommonInputActionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionData, Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonInputActionData"), sizeof(FCommonInputActionData), Get_Z_Construct_UScriptStruct_FCommonInputActionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonInputActionData(FCommonInputActionData::StaticStruct, TEXT("/Script/CommonUI"), TEXT("CommonInputActionData"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFCommonInputActionData
{
	FScriptStruct_CommonUI_StaticRegisterNativesFCommonInputActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonInputActionData")),new UScriptStruct::TCppStructOps<FCommonInputActionData>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFCommonInputActionData;
	struct Z_Construct_UScriptStruct_FCommonInputActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchInputTypeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TouchInputTypeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadInputTypeInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GamepadInputTypeInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyboardInputTypeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyboardInputTypeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HoldDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonInputActionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_TouchInputTypeInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionData" },
		{ "ModuleRelativePath", "Public/CommonInputActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_TouchInputTypeInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "TouchInputTypeInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputActionData, TouchInputTypeInfo), Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_TouchInputTypeInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_TouchInputTypeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_GamepadInputTypeInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionData" },
		{ "ModuleRelativePath", "Public/CommonInputActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_GamepadInputTypeInfos = { UE4CodeGen_Private::EPropertyClass::Struct, "GamepadInputTypeInfos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, CPP_ARRAY_DIM(GamepadInputTypeInfos, FCommonInputActionData), nullptr, STRUCT_OFFSET(FCommonInputActionData, GamepadInputTypeInfos), Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_GamepadInputTypeInfos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_GamepadInputTypeInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_KeyboardInputTypeInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionData" },
		{ "ModuleRelativePath", "Public/CommonInputActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_KeyboardInputTypeInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyboardInputTypeInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputActionData, KeyboardInputTypeInfo), Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_KeyboardInputTypeInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_KeyboardInputTypeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_HoldDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionData" },
		{ "ModuleRelativePath", "Public/CommonInputActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_HoldDisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "HoldDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputActionData, HoldDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_HoldDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_HoldDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionData" },
		{ "ModuleRelativePath", "Public/CommonInputActionData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputActionData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_TouchInputTypeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_GamepadInputTypeInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_KeyboardInputTypeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_HoldDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CommonInputActionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCommonInputActionData),
		alignof(FCommonInputActionData),
		Z_Construct_UScriptStruct_FCommonInputActionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonInputActionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonInputActionData"), sizeof(FCommonInputActionData), Get_Z_Construct_UScriptStruct_FCommonInputActionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonInputActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonInputActionData_CRC() { return 3531702857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
