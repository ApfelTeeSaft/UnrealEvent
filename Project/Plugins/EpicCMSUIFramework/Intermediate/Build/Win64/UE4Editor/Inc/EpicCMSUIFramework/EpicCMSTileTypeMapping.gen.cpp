// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSTileTypeMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSTileTypeMapping() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSTileBase_NoRegister();
// End Cross Module References
class UScriptStruct* FEpicCMSTileTypeMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICCMSUIFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping, Z_Construct_UPackage__Script_EpicCMSUIFramework(), TEXT("EpicCMSTileTypeMapping"), sizeof(FEpicCMSTileTypeMapping), Get_Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicCMSTileTypeMapping(FEpicCMSTileTypeMapping::StaticStruct, TEXT("/Script/EpicCMSUIFramework"), TEXT("EpicCMSTileTypeMapping"), false, nullptr, nullptr);
static struct FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFEpicCMSTileTypeMapping
{
	FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFEpicCMSTileTypeMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicCMSTileTypeMapping")),new UScriptStruct::TCppStructOps<FEpicCMSTileTypeMapping>);
	}
} ScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFEpicCMSTileTypeMapping;
	struct Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_TileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileTypeMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicCMSTileTypeMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::NewProp_TileClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileTypeMapping" },
		{ "ModuleRelativePath", "Public/EpicCMSTileTypeMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::NewProp_TileClass = { UE4CodeGen_Private::EPropertyClass::SoftClass, "TileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FEpicCMSTileTypeMapping, TileClass), Z_Construct_UClass_UEpicCMSTileBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::NewProp_TileClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::NewProp_TileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::NewProp_TileClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EpicCMSTileTypeMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEpicCMSTileTypeMapping),
		alignof(FEpicCMSTileTypeMapping),
		Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicCMSUIFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicCMSTileTypeMapping"), sizeof(FEpicCMSTileTypeMapping), Get_Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicCMSTileTypeMapping_CRC() { return 365954942U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
