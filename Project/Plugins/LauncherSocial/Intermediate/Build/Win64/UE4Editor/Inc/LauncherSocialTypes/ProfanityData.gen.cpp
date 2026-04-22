// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ProfanityData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfanityData() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FProfanityData();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
// End Cross Module References
class UScriptStruct* FProfanityData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FProfanityData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfanityData, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ProfanityData"), sizeof(FProfanityData), Get_Z_Construct_UScriptStruct_FProfanityData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfanityData(FProfanityData::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ProfanityData"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFProfanityData
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFProfanityData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfanityData")),new UScriptStruct::TCppStructOps<FProfanityData>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFProfanityData;
	struct Z_Construct_UScriptStruct_FProfanityData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoAdd_MetaData[];
#endif
		static void NewProp_bAutoAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WhiteList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfanityList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProfanityList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CountryCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfanityData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfanityData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfanityData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfanityData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfanityData" },
		{ "ModuleRelativePath", "Public/ProfanityData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd_SetBit(void* Obj)
	{
		((FProfanityData*)Obj)->bAutoAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoAdd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FProfanityData), &Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_WhiteList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfanityData" },
		{ "ModuleRelativePath", "Public/ProfanityData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_WhiteList = { UE4CodeGen_Private::EPropertyClass::Str, "WhiteList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfanityData, WhiteList), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_WhiteList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_WhiteList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_ProfanityList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfanityData" },
		{ "ModuleRelativePath", "Public/ProfanityData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_ProfanityList = { UE4CodeGen_Private::EPropertyClass::Str, "ProfanityList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfanityData, ProfanityList), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_ProfanityList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_ProfanityList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_CountryCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfanityData" },
		{ "ModuleRelativePath", "Public/ProfanityData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_CountryCode = { UE4CodeGen_Private::EPropertyClass::Str, "CountryCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProfanityData, CountryCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_CountryCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_CountryCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfanityData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_bAutoAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_WhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_ProfanityList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfanityData_Statics::NewProp_CountryCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfanityData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ProfanityData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProfanityData),
		alignof(FProfanityData),
		Z_Construct_UScriptStruct_FProfanityData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfanityData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfanityData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfanityData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfanityData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfanityData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfanityData"), sizeof(FProfanityData), Get_Z_Construct_UScriptStruct_FProfanityData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfanityData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfanityData_CRC() { return 670955177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
