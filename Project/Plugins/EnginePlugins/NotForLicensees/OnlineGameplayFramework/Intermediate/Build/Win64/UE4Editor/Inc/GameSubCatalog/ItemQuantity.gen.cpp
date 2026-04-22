// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSubCatalog/Public/ItemQuantity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemQuantity() {}
// Cross Module References
	GAMESUBCATALOG_API UScriptStruct* Z_Construct_UScriptStruct_FItemQuantity();
	UPackage* Z_Construct_UPackage__Script_GameSubCatalog();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
// End Cross Module References
class UScriptStruct* FItemQuantity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMESUBCATALOG_API uint32 Get_Z_Construct_UScriptStruct_FItemQuantity_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemQuantity, Z_Construct_UPackage__Script_GameSubCatalog(), TEXT("ItemQuantity"), sizeof(FItemQuantity), Get_Z_Construct_UScriptStruct_FItemQuantity_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemQuantity(FItemQuantity::StaticStruct, TEXT("/Script/GameSubCatalog"), TEXT("ItemQuantity"), false, nullptr, nullptr);
static struct FScriptStruct_GameSubCatalog_StaticRegisterNativesFItemQuantity
{
	FScriptStruct_GameSubCatalog_StaticRegisterNativesFItemQuantity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemQuantity")),new UScriptStruct::TCppStructOps<FItemQuantity>);
	}
} ScriptStruct_GameSubCatalog_StaticRegisterNativesFItemQuantity;
	struct Z_Construct_UScriptStruct_FItemQuantity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TemplateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemQuantity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemQuantity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemQuantity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemQuantity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Attributes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemQuantity" },
		{ "ModuleRelativePath", "Public/ItemQuantity.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Attributes = { UE4CodeGen_Private::EPropertyClass::Struct, "Attributes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FItemQuantity, Attributes), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Attributes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Attributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemQuantity" },
		{ "ModuleRelativePath", "Public/ItemQuantity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Quantity = { UE4CodeGen_Private::EPropertyClass::Int, "Quantity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FItemQuantity, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Quantity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_TemplateId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ItemQuantity" },
		{ "ModuleRelativePath", "Public/ItemQuantity.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_TemplateId = { UE4CodeGen_Private::EPropertyClass::Str, "TemplateId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FItemQuantity, TemplateId), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_TemplateId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_TemplateId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemQuantity_Statics::NewProp_TemplateId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemQuantity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameSubCatalog,
		nullptr,
		&NewStructOps,
		"ItemQuantity",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FItemQuantity),
		alignof(FItemQuantity),
		Z_Construct_UScriptStruct_FItemQuantity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemQuantity_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemQuantity_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FItemQuantity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemQuantity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemQuantity_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameSubCatalog();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemQuantity"), sizeof(FItemQuantity), Get_Z_Construct_UScriptStruct_FItemQuantity_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemQuantity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemQuantity_CRC() { return 2309466028U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
