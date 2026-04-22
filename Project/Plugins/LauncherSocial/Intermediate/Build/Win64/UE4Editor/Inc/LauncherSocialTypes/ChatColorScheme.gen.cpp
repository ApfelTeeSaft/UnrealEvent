// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ChatColorScheme.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatColorScheme() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatColorScheme();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FChatColorScheme::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FChatColorScheme_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatColorScheme, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ChatColorScheme"), sizeof(FChatColorScheme), Get_Z_Construct_UScriptStruct_FChatColorScheme_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatColorScheme(FChatColorScheme::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ChatColorScheme"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatColorScheme
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatColorScheme()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatColorScheme")),new UScriptStruct::TCppStructOps<FChatColorScheme>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatColorScheme;
	struct Z_Construct_UScriptStruct_FChatColorScheme_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendlyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EnemyColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyHyperlinkChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyHyperlinkChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamHyperlinkChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamHyperlinkChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameHyperlinkChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameHyperlinkChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FounderHyperlinkChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FounderHyperlinkChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalHyperlinkChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalHyperlinkChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhisperHyperlinkChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WhisperHyperlinkChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameAdminChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameAdminChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdminChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdminChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FounderChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FounderChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhisperChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WhisperChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChatColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultChatColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStampColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStampColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatColorScheme>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FriendlyColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FriendlyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendlyColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, FriendlyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FriendlyColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FriendlyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_EnemyColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_EnemyColor = { UE4CodeGen_Private::EPropertyClass::Struct, "EnemyColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, EnemyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_EnemyColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_EnemyColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyHyperlinkChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyHyperlinkChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PartyHyperlinkChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, PartyHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyHyperlinkChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamHyperlinkChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamHyperlinkChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TeamHyperlinkChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, TeamHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamHyperlinkChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameHyperlinkChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameHyperlinkChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GameHyperlinkChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, GameHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameHyperlinkChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderHyperlinkChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderHyperlinkChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FounderHyperlinkChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, FounderHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderHyperlinkChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalHyperlinkChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalHyperlinkChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalHyperlinkChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, GlobalHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalHyperlinkChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperHyperlinkChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperHyperlinkChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "WhisperHyperlinkChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, WhisperHyperlinkChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperHyperlinkChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperHyperlinkChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameAdminChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameAdminChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GameAdminChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, GameAdminChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameAdminChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameAdminChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_AdminChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_AdminChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "AdminChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, AdminChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_AdminChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_AdminChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PartyChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, PartyChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TeamChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, TeamChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GameChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, GameChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FounderChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, FounderChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, GlobalChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "WhisperChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, WhisperChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_DefaultChatColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_DefaultChatColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultChatColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, DefaultChatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_DefaultChatColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_DefaultChatColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TimeStampColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatColorScheme" },
		{ "ModuleRelativePath", "Public/ChatColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TimeStampColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TimeStampColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatColorScheme, TimeStampColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TimeStampColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TimeStampColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatColorScheme_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FriendlyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_EnemyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyHyperlinkChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamHyperlinkChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameHyperlinkChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderHyperlinkChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalHyperlinkChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperHyperlinkChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameAdminChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_AdminChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_PartyChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TeamChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GameChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_FounderChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_GlobalChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_WhisperChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_DefaultChatColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatColorScheme_Statics::NewProp_TimeStampColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatColorScheme_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ChatColorScheme",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChatColorScheme),
		alignof(FChatColorScheme),
		Z_Construct_UScriptStruct_FChatColorScheme_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatColorScheme_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatColorScheme_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatColorScheme()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatColorScheme_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatColorScheme"), sizeof(FChatColorScheme), Get_Z_Construct_UScriptStruct_FChatColorScheme_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatColorScheme_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatColorScheme_CRC() { return 1728885080U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
