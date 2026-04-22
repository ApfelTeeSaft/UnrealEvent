// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/OnlineAccountTexts_FailedLoginConsole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAccountTexts_FailedLoginConsole() {}
// Cross Module References
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
class UScriptStruct* FOnlineAccountTexts_FailedLoginConsole::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCOUNT_API uint32 Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole, Z_Construct_UPackage__Script_Account(), TEXT("OnlineAccountTexts_FailedLoginConsole"), sizeof(FOnlineAccountTexts_FailedLoginConsole), Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole(FOnlineAccountTexts_FailedLoginConsole::StaticStruct, TEXT("/Script/Account"), TEXT("OnlineAccountTexts_FailedLoginConsole"), false, nullptr, nullptr);
static struct FScriptStruct_Account_StaticRegisterNativesFOnlineAccountTexts_FailedLoginConsole
{
	FScriptStruct_Account_StaticRegisterNativesFOnlineAccountTexts_FailedLoginConsole()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnlineAccountTexts_FailedLoginConsole")),new UScriptStruct::TCppStructOps<FOnlineAccountTexts_FailedLoginConsole>);
	}
} ScriptStruct_Account_StaticRegisterNativesFOnlineAccountTexts_FailedLoginConsole;
	struct Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnexpectedError_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnexpectedError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnableToStartPrivCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnableToStartPrivCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnableToSignIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnableToSignIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnableToComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UnableToComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemUpdateAvailable_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SystemUpdateAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PleaseSignIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PleaseSignIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatchAvailable_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PatchAvailable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlinePlayRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OnlinePlayRestriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedPremiumAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NeedPremiumAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissingAuthAssociation_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MissingAuthAssociation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generic_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Generic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgeRestriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AgeRestriction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineAccountTexts_FailedLoginConsole>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnexpectedError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnexpectedError = { UE4CodeGen_Private::EPropertyClass::Text, "UnexpectedError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, UnexpectedError), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnexpectedError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnexpectedError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToStartPrivCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToStartPrivCheck = { UE4CodeGen_Private::EPropertyClass::Text, "UnableToStartPrivCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, UnableToStartPrivCheck), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToStartPrivCheck_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToStartPrivCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToSignIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToSignIn = { UE4CodeGen_Private::EPropertyClass::Text, "UnableToSignIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, UnableToSignIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToSignIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToSignIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToComplete = { UE4CodeGen_Private::EPropertyClass::Text, "UnableToComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, UnableToComplete), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToComplete_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UI = { UE4CodeGen_Private::EPropertyClass::Text, "UI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, UI), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UI_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_SystemUpdateAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_SystemUpdateAvailable = { UE4CodeGen_Private::EPropertyClass::Text, "SystemUpdateAvailable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, SystemUpdateAvailable), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_SystemUpdateAvailable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_SystemUpdateAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PleaseSignIn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PleaseSignIn = { UE4CodeGen_Private::EPropertyClass::Text, "PleaseSignIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, PleaseSignIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PleaseSignIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PleaseSignIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PatchAvailable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PatchAvailable = { UE4CodeGen_Private::EPropertyClass::Text, "PatchAvailable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, PatchAvailable), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PatchAvailable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PatchAvailable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_OnlinePlayRestriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_OnlinePlayRestriction = { UE4CodeGen_Private::EPropertyClass::Text, "OnlinePlayRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, OnlinePlayRestriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_OnlinePlayRestriction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_OnlinePlayRestriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_NeedPremiumAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_NeedPremiumAccount = { UE4CodeGen_Private::EPropertyClass::Text, "NeedPremiumAccount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, NeedPremiumAccount), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_NeedPremiumAccount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_NeedPremiumAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_MissingAuthAssociation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_MissingAuthAssociation = { UE4CodeGen_Private::EPropertyClass::Text, "MissingAuthAssociation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, MissingAuthAssociation), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_MissingAuthAssociation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_MissingAuthAssociation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_Generic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_Generic = { UE4CodeGen_Private::EPropertyClass::Text, "Generic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, Generic), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_Generic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_Generic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_AgeRestriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineAccountTexts_FailedLoginConsole" },
		{ "ModuleRelativePath", "Public/OnlineAccountTexts_FailedLoginConsole.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_AgeRestriction = { UE4CodeGen_Private::EPropertyClass::Text, "AgeRestriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOnlineAccountTexts_FailedLoginConsole, AgeRestriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_AgeRestriction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_AgeRestriction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnexpectedError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToStartPrivCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToSignIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UnableToComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_UI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_SystemUpdateAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PleaseSignIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_PatchAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_OnlinePlayRestriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_NeedPremiumAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_MissingAuthAssociation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_Generic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::NewProp_AgeRestriction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
		nullptr,
		&NewStructOps,
		"OnlineAccountTexts_FailedLoginConsole",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FOnlineAccountTexts_FailedLoginConsole),
		alignof(FOnlineAccountTexts_FailedLoginConsole),
		Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnlineAccountTexts_FailedLoginConsole"), sizeof(FOnlineAccountTexts_FailedLoginConsole), Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnlineAccountTexts_FailedLoginConsole_CRC() { return 604465933U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
