// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonRegisteredTabInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonRegisteredTabInfo() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
// End Cross Module References
class UScriptStruct* FCommonRegisteredTabInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo, Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonRegisteredTabInfo"), sizeof(FCommonRegisteredTabInfo), Get_Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommonRegisteredTabInfo(FCommonRegisteredTabInfo::StaticStruct, TEXT("/Script/CommonUI"), TEXT("CommonRegisteredTabInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFCommonRegisteredTabInfo
{
	FScriptStruct_CommonUI_StaticRegisterNativesFCommonRegisteredTabInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CommonRegisteredTabInfo")),new UScriptStruct::TCppStructOps<FCommonRegisteredTabInfo>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFCommonRegisteredTabInfo;
	struct Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContentInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonRegisteredTabInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonRegisteredTabInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRegisteredTabInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonRegisteredTabInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance = { UE4CodeGen_Private::EPropertyClass::Object, "ContentInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008000d, 1, nullptr, STRUCT_OFFSET(FCommonRegisteredTabInfo, ContentInstance), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRegisteredTabInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonRegisteredTabInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton = { UE4CodeGen_Private::EPropertyClass::Object, "TabButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008000d, 1, nullptr, STRUCT_OFFSET(FCommonRegisteredTabInfo, TabButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRegisteredTabInfo" },
		{ "ModuleRelativePath", "Public/CommonRegisteredTabInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TabIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCommonRegisteredTabInfo, TabIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_ContentInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::NewProp_TabIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonRegisteredTabInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FCommonRegisteredTabInfo),
		alignof(FCommonRegisteredTabInfo),
		Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonRegisteredTabInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommonRegisteredTabInfo"), sizeof(FCommonRegisteredTabInfo), Get_Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommonRegisteredTabInfo_CRC() { return 220995491U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
