// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/RichTextIconData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextIconData() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextIconData();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FRichTextIconData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FRichTextIconData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextIconData, Z_Construct_UPackage__Script_CommonUI(), TEXT("RichTextIconData"), sizeof(FRichTextIconData), Get_Z_Construct_UScriptStruct_FRichTextIconData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRichTextIconData(FRichTextIconData::StaticStruct, TEXT("/Script/CommonUI"), TEXT("RichTextIconData"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFRichTextIconData
{
	FScriptStruct_CommonUI_StaticRegisterNativesFRichTextIconData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RichTextIconData")),new UScriptStruct::TCppStructOps<FRichTextIconData>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFRichTextIconData;
	struct Z_Construct_UScriptStruct_FRichTextIconData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ResourceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RichTextIconData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextIconData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RichTextIconData" },
		{ "ModuleRelativePath", "Public/RichTextIconData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ImageSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRichTextIconData, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RichTextIconData" },
		{ "ModuleRelativePath", "Public/RichTextIconData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject = { UE4CodeGen_Private::EPropertyClass::SoftObject, "ResourceObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FRichTextIconData, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RichTextIconData" },
		{ "ModuleRelativePath", "Public/RichTextIconData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRichTextIconData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextIconData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_ResourceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextIconData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextIconData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichTextIconData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FRichTextIconData),
		alignof(FRichTextIconData),
		Z_Construct_UScriptStruct_FRichTextIconData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextIconData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextIconData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextIconData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRichTextIconData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RichTextIconData"), sizeof(FRichTextIconData), Get_Z_Construct_UScriptStruct_FRichTextIconData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRichTextIconData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRichTextIconData_CRC() { return 350052898U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
