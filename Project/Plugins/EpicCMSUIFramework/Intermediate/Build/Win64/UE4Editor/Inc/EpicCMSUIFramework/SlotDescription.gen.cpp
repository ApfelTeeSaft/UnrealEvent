// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/SlotDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDescription() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSlotDescription();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
// End Cross Module References
class UScriptStruct* FSlotDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICCMSUIFRAMEWORK_API uint32 Get_Z_Construct_UScriptStruct_FSlotDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotDescription, Z_Construct_UPackage__Script_EpicCMSUIFramework(), TEXT("SlotDescription"), sizeof(FSlotDescription), Get_Z_Construct_UScriptStruct_FSlotDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotDescription(FSlotDescription::StaticStruct, TEXT("/Script/EpicCMSUIFramework"), TEXT("SlotDescription"), false, nullptr, nullptr);
static struct FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFSlotDescription
{
	FScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFSlotDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotDescription")),new UScriptStruct::TCppStructOps<FSlotDescription>);
	}
} ScriptStruct_EpicCMSUIFramework_StaticRegisterNativesFSlotDescription;
	struct Z_Construct_UScriptStruct_FSlotDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoScroll_MetaData[];
#endif
		static void NewProp_bEnableAutoScroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoScroll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFeaturedTextStyle_MetaData[];
#endif
		static void NewProp_bUseFeaturedTextStyle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFeaturedTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SlotDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SlotDescription" },
		{ "ModuleRelativePath", "Public/SlotDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll_SetBit(void* Obj)
	{
		((FSlotDescription*)Obj)->bEnableAutoScroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAutoScroll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSlotDescription), &Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SlotDescription" },
		{ "ModuleRelativePath", "Public/SlotDescription.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle_SetBit(void* Obj)
	{
		((FSlotDescription*)Obj)->bUseFeaturedTextStyle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFeaturedTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSlotDescription), &Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_RowCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SlotDescription" },
		{ "ModuleRelativePath", "Public/SlotDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_RowCount = { UE4CodeGen_Private::EPropertyClass::Int, "RowCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlotDescription, RowCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_RowCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_RowCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_ColumnCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SlotDescription" },
		{ "ModuleRelativePath", "Public/SlotDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_ColumnCount = { UE4CodeGen_Private::EPropertyClass::Int, "ColumnCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlotDescription, ColumnCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_ColumnCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_ColumnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_SlotName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SlotDescription" },
		{ "ModuleRelativePath", "Public/SlotDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSlotDescription, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bEnableAutoScroll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_bUseFeaturedTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_RowCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_ColumnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotDescription_Statics::NewProp_SlotName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
		nullptr,
		&NewStructOps,
		"SlotDescription",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSlotDescription),
		alignof(FSlotDescription),
		Z_Construct_UScriptStruct_FSlotDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotDescription_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicCMSUIFramework();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotDescription"), sizeof(FSlotDescription), Get_Z_Construct_UScriptStruct_FSlotDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotDescription_CRC() { return 901055408U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
