// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatMessageEntryTextStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatMessageEntryTextStyle() {}
// Cross Module References
	SOCIALUMG_API UScriptStruct* Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
// End Cross Module References
class UScriptStruct* FSocialChatMessageEntryTextStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALUMG_API uint32 Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle, Z_Construct_UPackage__Script_SocialUMG(), TEXT("SocialChatMessageEntryTextStyle"), sizeof(FSocialChatMessageEntryTextStyle), Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialChatMessageEntryTextStyle(FSocialChatMessageEntryTextStyle::StaticStruct, TEXT("/Script/SocialUMG"), TEXT("SocialChatMessageEntryTextStyle"), false, nullptr, nullptr);
static struct FScriptStruct_SocialUMG_StaticRegisterNativesFSocialChatMessageEntryTextStyle
{
	FScriptStruct_SocialUMG_StaticRegisterNativesFSocialChatMessageEntryTextStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialChatMessageEntryTextStyle")),new UScriptStruct::TCppStructOps<FSocialChatMessageEntryTextStyle>);
	}
} ScriptStruct_SocialUMG_StaticRegisterNativesFSocialChatMessageEntryTextStyle;
	struct Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryTextStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialChatMessageEntryTextStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntryTextStyle" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialChatMessageEntryTextStyle, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_FontInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageEntryTextStyle" },
		{ "ModuleRelativePath", "Public/SocialChatMessageEntryTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_FontInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "FontInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialChatMessageEntryTextStyle, FontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_FontInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_FontInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::NewProp_FontInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
		nullptr,
		&NewStructOps,
		"SocialChatMessageEntryTextStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialChatMessageEntryTextStyle),
		alignof(FSocialChatMessageEntryTextStyle),
		Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialUMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialChatMessageEntryTextStyle"), sizeof(FSocialChatMessageEntryTextStyle), Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialChatMessageEntryTextStyle_CRC() { return 1156875711U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
