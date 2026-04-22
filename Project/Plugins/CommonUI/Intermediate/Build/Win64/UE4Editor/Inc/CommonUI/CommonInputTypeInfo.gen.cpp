// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonInputTypeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputTypeInfo() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputTypeInfo();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EInputActionState();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FCommonInputTypeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FCommonInputTypeInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputTypeInfo, Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonInputTypeInfo"), sizeof(FCommonInputTypeInfo), Get_Z_Construct_UScriptStruct_FCommonInputTypeInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonInputTypeInfo(FCommonInputTypeInfo::StaticStruct, TEXT("/Script/CommonUI"), TEXT("CommonInputTypeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFCommonInputTypeInfo
{
	FScriptStruct_CommonUI_StaticRegisterNativesFCommonInputTypeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonInputTypeInfo")),new UScriptStruct::TCppStructOps<FCommonInputTypeInfo>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFCommonInputTypeInfo;
	struct Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActionRequiresHold_MetaData[];
#endif
		static void NewProp_bActionRequiresHold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActionRequiresHold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrrideState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverrrideState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrrideState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonInputTypeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputTypeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputTypeInfo" },
		{ "ModuleRelativePath", "Public/CommonInputTypeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OverrideBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, OverrideBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputTypeInfo" },
		{ "ModuleRelativePath", "Public/CommonInputTypeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime = { UE4CodeGen_Private::EPropertyClass::Float, "HoldTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputTypeInfo" },
		{ "ModuleRelativePath", "Public/CommonInputTypeInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_SetBit(void* Obj)
	{
		((FCommonInputTypeInfo*)Obj)->bActionRequiresHold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold = { UE4CodeGen_Private::EPropertyClass::Bool, "bActionRequiresHold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FCommonInputTypeInfo), &Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputTypeInfo" },
		{ "ModuleRelativePath", "Public/CommonInputTypeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState = { UE4CodeGen_Private::EPropertyClass::Enum, "OverrrideState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, OverrrideState), Z_Construct_UEnum_CommonUI_EInputActionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputTypeInfo" },
		{ "ModuleRelativePath", "Public/CommonInputTypeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonInputTypeInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCommonInputTypeInfo),
		alignof(FCommonInputTypeInfo),
		Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputTypeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonInputTypeInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonInputTypeInfo"), sizeof(FCommonInputTypeInfo), Get_Z_Construct_UScriptStruct_FCommonInputTypeInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonInputTypeInfo_CRC() { return 2947418323U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
