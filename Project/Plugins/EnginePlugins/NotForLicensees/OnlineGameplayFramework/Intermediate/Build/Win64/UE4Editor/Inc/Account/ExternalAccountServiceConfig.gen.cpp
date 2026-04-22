// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/ExternalAccountServiceConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalAccountServiceConfig() {}
// Cross Module References
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountServiceConfig();
	UPackage* Z_Construct_UPackage__Script_Account();
	ACCOUNT_API UEnum* Z_Construct_UEnum_Account_EExternalAccountType();
// End Cross Module References
class UScriptStruct* FExternalAccountServiceConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCOUNT_API uint32 Get_Z_Construct_UScriptStruct_FExternalAccountServiceConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalAccountServiceConfig, Z_Construct_UPackage__Script_Account(), TEXT("ExternalAccountServiceConfig"), sizeof(FExternalAccountServiceConfig), Get_Z_Construct_UScriptStruct_FExternalAccountServiceConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExternalAccountServiceConfig(FExternalAccountServiceConfig::StaticStruct, TEXT("/Script/Account"), TEXT("ExternalAccountServiceConfig"), false, nullptr, nullptr);
static struct FScriptStruct_Account_StaticRegisterNativesFExternalAccountServiceConfig
{
	FScriptStruct_Account_StaticRegisterNativesFExternalAccountServiceConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExternalAccountServiceConfig")),new UScriptStruct::TCppStructOps<FExternalAccountServiceConfig>);
	}
} ScriptStruct_Account_StaticRegisterNativesFExternalAccountServiceConfig;
	struct Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalServiceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExternalServiceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExternalAccountServiceConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalAccountServiceConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_ExternalServiceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExternalAccountServiceConfig" },
		{ "ModuleRelativePath", "Public/ExternalAccountServiceConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_ExternalServiceName = { UE4CodeGen_Private::EPropertyClass::Name, "ExternalServiceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(FExternalAccountServiceConfig, ExternalServiceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_ExternalServiceName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_ExternalServiceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExternalAccountServiceConfig" },
		{ "ModuleRelativePath", "Public/ExternalAccountServiceConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(FExternalAccountServiceConfig, Type), Z_Construct_UEnum_Account_EExternalAccountType, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_ExternalServiceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
		nullptr,
		&NewStructOps,
		"ExternalAccountServiceConfig",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FExternalAccountServiceConfig),
		alignof(FExternalAccountServiceConfig),
		Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalAccountServiceConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExternalAccountServiceConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExternalAccountServiceConfig"), sizeof(FExternalAccountServiceConfig), Get_Z_Construct_UScriptStruct_FExternalAccountServiceConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExternalAccountServiceConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExternalAccountServiceConfig_CRC() { return 2338616298U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
