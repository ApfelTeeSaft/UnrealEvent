// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/GiftMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGiftMessage() {}
// Cross Module References
	ACCOUNT_API UScriptStruct* Z_Construct_UScriptStruct_FGiftMessage();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
class UScriptStruct* FGiftMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACCOUNT_API uint32 Get_Z_Construct_UScriptStruct_FGiftMessage_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGiftMessage, Z_Construct_UPackage__Script_Account(), TEXT("GiftMessage"), sizeof(FGiftMessage), Get_Z_Construct_UScriptStruct_FGiftMessage_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGiftMessage(FGiftMessage::StaticStruct, TEXT("/Script/Account"), TEXT("GiftMessage"), false, nullptr, nullptr);
static struct FScriptStruct_Account_StaticRegisterNativesFGiftMessage
{
	FScriptStruct_Account_StaticRegisterNativesFGiftMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GiftMessage")),new UScriptStruct::TCppStructOps<FGiftMessage>);
	}
} ScriptStruct_Account_StaticRegisterNativesFGiftMessage;
	struct Z_Construct_UScriptStruct_FGiftMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiftCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GiftCode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GiftMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGiftMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGiftMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_SenderName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftMessage" },
		{ "ModuleRelativePath", "Public/GiftMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_SenderName = { UE4CodeGen_Private::EPropertyClass::Str, "SenderName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGiftMessage, SenderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_SenderName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_SenderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_GiftCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GiftMessage" },
		{ "ModuleRelativePath", "Public/GiftMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_GiftCode = { UE4CodeGen_Private::EPropertyClass::Str, "GiftCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FGiftMessage, GiftCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_GiftCode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_GiftCode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGiftMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_SenderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGiftMessage_Statics::NewProp_GiftCode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGiftMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
		nullptr,
		&NewStructOps,
		"GiftMessage",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGiftMessage),
		alignof(FGiftMessage),
		Z_Construct_UScriptStruct_FGiftMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftMessage_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGiftMessage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGiftMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGiftMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGiftMessage_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Account();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GiftMessage"), sizeof(FGiftMessage), Get_Z_Construct_UScriptStruct_FGiftMessage_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGiftMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGiftMessage_CRC() { return 2173509566U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
