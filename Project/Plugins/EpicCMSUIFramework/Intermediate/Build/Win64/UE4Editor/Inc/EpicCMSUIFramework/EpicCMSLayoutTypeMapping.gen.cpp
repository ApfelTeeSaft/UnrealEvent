// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSLayoutTypeMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSLayoutTypeMapping() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSLayoutBase_NoRegister();
// End Cross Module References
class UScriptStruct* FEpicCMSLayoutTypeMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICCMSUIFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping, Z_Construct_UPackage__Script_EpicCMSUIFramework(), TEXT("EpicCMSLayoutTypeMapping"), sizeof(FEpicCMSLayoutTypeMapping), Get_Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicCMSLayoutTypeMapping(FEpicCMSLayoutTypeMapping::StaticStruct, TEXT("/Script/EpicCMSUIFramework"), TEXT("EpicCMSLayoutTypeMapping"), false, nullptr, nullptr);
static struct FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFEpicCMSLayoutTypeMapping
{
	FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFEpicCMSLayoutTypeMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicCMSLayoutTypeMapping")),new UScriptStruct::TCppStructOps<FEpicCMSLayoutTypeMapping>);
	}
} ScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFEpicCMSLayoutTypeMapping;
	struct Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LayoutType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSLayoutTypeMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicCMSLayoutTypeMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::NewProp_LayoutType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSLayoutTypeMapping" },
		{ "ModuleRelativePath", "Public/EpicCMSLayoutTypeMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::NewProp_LayoutType = { UE4CodeGen_Private::EPropertyClass::SoftClass, "LayoutType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FEpicCMSLayoutTypeMapping, LayoutType), Z_Construct_UClass_UEpicCMSLayoutBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::NewProp_LayoutType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::NewProp_LayoutType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::NewProp_LayoutType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EpicCMSLayoutTypeMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEpicCMSLayoutTypeMapping),
		alignof(FEpicCMSLayoutTypeMapping),
		Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicCMSUIFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicCMSLayoutTypeMapping"), sizeof(FEpicCMSLayoutTypeMapping), Get_Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicCMSLayoutTypeMapping_CRC() { return 1114181939U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
