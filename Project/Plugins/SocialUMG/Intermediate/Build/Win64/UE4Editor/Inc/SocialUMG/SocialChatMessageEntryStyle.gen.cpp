// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatMessageEntryStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatMessageEntryStyle() {}
// Cross Module References
	SOCIALUMG_API UScriptStruct* Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UScriptStruct* Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle();
// End Cross Module References
class UScriptStruct* FSocialChatMessageEntryStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALUMG_API uint32 Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle, Z_Construct_UPackage__Script_SocialUMG(), TEXT("SocialChatMessageEntryStyle"), sizeof(FSocialChatMessageEntryStyle), Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialChatMessageEntryStyle(FSocialChatMessageEntryStyle::StaticStruct, TEXT("/Script/SocialUMG"), TEXT("SocialChatMessageEntryStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SocialUMG_StaticRegisterNativesFSocialChatMessageEntryStyle
{
	FScriptStruct_SocialUMG_StaticRegisterNativesFSocialChatMessageEntryStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialChatMessageEntryStyle")),new UScriptStruct::TCppStructOps<FSocialChatMessageEntryStyle>);
	}
} ScriptStruct_SocialUMG_StaticRegisterNativesFSocialChatMessageEntryStyle;
	struct Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelNameStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelNameStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderNameStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderNameStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialChatMessageEntryStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_MessageTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntryStyle" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_MessageTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "MessageTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialChatMessageEntryStyle, MessageTextStyle), Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_MessageTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_MessageTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_ChannelNameStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntryStyle" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_ChannelNameStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChannelNameStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialChatMessageEntryStyle, ChannelNameStyle), Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_ChannelNameStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_ChannelNameStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_SenderNameStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntryStyle" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_SenderNameStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "SenderNameStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialChatMessageEntryStyle, SenderNameStyle), Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_SenderNameStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_SenderNameStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_MessageTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_ChannelNameStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::NewProp_SenderNameStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
		nullptr,
		&NewStructOps,
		"SocialChatMessageEntryStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialChatMessageEntryStyle),
		alignof(FSocialChatMessageEntryStyle),
		Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialUMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialChatMessageEntryStyle"), sizeof(FSocialChatMessageEntryStyle), Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryStyle_CRC() { return 1004866213U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
