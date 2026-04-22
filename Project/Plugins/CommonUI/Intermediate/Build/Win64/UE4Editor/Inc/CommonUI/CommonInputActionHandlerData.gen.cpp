// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonInputActionHandlerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputActionHandlerData() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionHandlerData();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EInputActionState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
class UScriptStruct* FCommonInputActionHandlerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FCommonInputActionHandlerData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionHandlerData, Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonInputActionHandlerData"), sizeof(FCommonInputActionHandlerData), Get_Z_Construct_UScriptStruct_FCommonInputActionHandlerData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonInputActionHandlerData(FCommonInputActionHandlerData::StaticStruct, TEXT("/Script/CommonUI"), TEXT("CommonInputActionHandlerData"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFCommonInputActionHandlerData
{
	FScriptStruct_CommonUI_StaticRegisterNativesFCommonInputActionHandlerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonInputActionHandlerData")),new UScriptStruct::TCppStructOps<FCommonInputActionHandlerData>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFCommonInputActionHandlerData;
	struct Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonInputActionHandlerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputActionHandlerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionHandlerData" },
		{ "ModuleRelativePath", "Public/CommonInputActionHandlerData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Enum, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputActionHandlerData, State), Z_Construct_UEnum_CommonUI_EInputActionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputActionHandlerData" },
		{ "ModuleRelativePath", "Public/CommonInputActionHandlerData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionRow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputActionHandlerData, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonInputActionHandlerData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCommonInputActionHandlerData),
		alignof(FCommonInputActionHandlerData),
		Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionHandlerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonInputActionHandlerData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonInputActionHandlerData"), sizeof(FCommonInputActionHandlerData), Get_Z_Construct_UScriptStruct_FCommonInputActionHandlerData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonInputActionHandlerData_CRC() { return 1277481943U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
