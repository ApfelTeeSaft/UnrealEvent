// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SidecarSys/Public/SidecarFileInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSidecarFileInfo() {}
// Cross Module References
	SIDECARSYS_API UScriptStruct* Z_Construct_UScriptStruct_FSidecarFileInfo();
	UPackage* Z_Construct_UPackage__Script_SidecarSys();
// End Cross Module References
class UScriptStruct* FSidecarFileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIDECARSYS_API uint32 Get_Z_Construct_UScriptStruct_FSidecarFileInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidecarFileInfo, Z_Construct_UPackage__Script_SidecarSys(), TEXT("SidecarFileInfo"), sizeof(FSidecarFileInfo), Get_Z_Construct_UScriptStruct_FSidecarFileInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSidecarFileInfo(FSidecarFileInfo::StaticStruct, TEXT("/Script/SidecarSys"), TEXT("SidecarFileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SidecarSys_StaticRegisterNativesFSidecarFileInfo
{
	FScriptStruct_SidecarSys_StaticRegisterNativesFSidecarFileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SidecarFileInfo")),new UScriptStruct::TCppStructOps<FSidecarFileInfo>);
	}
} ScriptStruct_SidecarSys_StaticRegisterNativesFSidecarFileInfo;
	struct Z_Construct_UScriptStruct_FSidecarFileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckoutGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CheckoutGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOperationPending_MetaData[];
#endif
		static void NewProp_bOperationPending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOperationPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckedOut_MetaData[];
#endif
		static void NewProp_bIsCheckedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Meta;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Meta_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Meta_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SidecarFileInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidecarFileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_CheckoutGuid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarFileInfo" },
		{ "ModuleRelativePath", "Public/SidecarFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_CheckoutGuid = { UE4CodeGen_Private::EPropertyClass::Str, "CheckoutGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSidecarFileInfo, CheckoutGuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_CheckoutGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_CheckoutGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarFileInfo" },
		{ "ModuleRelativePath", "Public/SidecarFileInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending_SetBit(void* Obj)
	{
		((FSidecarFileInfo*)Obj)->bOperationPending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending = { UE4CodeGen_Private::EPropertyClass::Bool, "bOperationPending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSidecarFileInfo), &Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarFileInfo" },
		{ "ModuleRelativePath", "Public/SidecarFileInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut_SetBit(void* Obj)
	{
		((FSidecarFileInfo*)Obj)->bIsCheckedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCheckedOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FSidecarFileInfo), &Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SidecarFileInfo" },
		{ "ModuleRelativePath", "Public/SidecarFileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta = { UE4CodeGen_Private::EPropertyClass::Map, "Meta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSidecarFileInfo, Meta), METADATA_PARAMS(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Meta_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Meta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_CheckoutGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bOperationPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_bIsCheckedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::NewProp_Meta_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SidecarSys,
		nullptr,
		&NewStructOps,
		"SidecarFileInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSidecarFileInfo),
		alignof(FSidecarFileInfo),
		Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSidecarFileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSidecarFileInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SidecarSys();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SidecarFileInfo"), sizeof(FSidecarFileInfo), Get_Z_Construct_UScriptStruct_FSidecarFileInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSidecarFileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSidecarFileInfo_CRC() { return 2533197535U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
