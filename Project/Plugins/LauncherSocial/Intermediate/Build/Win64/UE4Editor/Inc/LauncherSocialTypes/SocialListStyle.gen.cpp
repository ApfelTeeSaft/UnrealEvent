// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/SocialListStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialListStyle() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialListStyle();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FSocialListStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FSocialListStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialListStyle, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("SocialListStyle"), sizeof(FSocialListStyle), Get_Z_Construct_UScriptStruct_FSocialListStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialListStyle(FSocialListStyle::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("SocialListStyle"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialListStyle
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialListStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialListStyle")),new UScriptStruct::TCppStructOps<FSocialListStyle>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialListStyle;
	struct Z_Construct_UScriptStruct_FSocialListStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SearchBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSizeBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontSizeBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceSeperatorBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresenceSeperatorBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeperatorBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeperatorBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingsBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedOptionBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedOptionBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddFriendEditableTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddFriendEditableTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsListBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsListBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsContainerBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsContainerBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectateBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpectateBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwayBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AwayBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnlineBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfflineBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfflineBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendImageBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendImageBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EpicIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FacebookIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MobileIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PCIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIconBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatusIconBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddFriendButtonContentBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddFriendButtonContentBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendListActionButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendListActionButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipArrowBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToolTipArrowBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMenuBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMenuBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMenuArrowRightBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMenuArrowRightBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMenuArrowBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMenuArrowBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonHoverContentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonHoverContentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonContentColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonContentColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CancelButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfirmButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendItemButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalChatIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalChatIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalChatButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalChatButtonStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialListStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SearchBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SearchBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SearchBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, SearchBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SearchBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SearchBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FontSizeBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FontSizeBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "FontSizeBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FontSizeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FontSizeBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FontSizeBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PresenceSeperatorBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PresenceSeperatorBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "PresenceSeperatorBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, PresenceSeperatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PresenceSeperatorBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PresenceSeperatorBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SeperatorBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SeperatorBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SeperatorBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, SeperatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SeperatorBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SeperatorBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SettingsBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SettingsBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SettingsBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, SettingsBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SettingsBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SettingsBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SelectedOptionBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SelectedOptionBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedOptionBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, SelectedOptionBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SelectedOptionBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SelectedOptionBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "BackBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, BackBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendEditableTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendEditableTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "AddFriendEditableTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, AddFriendEditableTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendEditableTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendEditableTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsListBackground_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsListBackground = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendsListBackground", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FriendsListBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsListBackground_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsListBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsContainerBackground_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsContainerBackground = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendsContainerBackground", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FriendsContainerBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsContainerBackground_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsContainerBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SpectateBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SpectateBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SpectateBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, SpectateBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SpectateBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SpectateBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AwayBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AwayBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "AwayBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, AwayBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AwayBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AwayBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OnlineBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OnlineBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OnlineBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, OnlineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OnlineBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OnlineBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OfflineBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OfflineBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OfflineBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, OfflineBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OfflineBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OfflineBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendImageBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendImageBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendImageBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FriendImageBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendImageBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendImageBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_EpicIconBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_EpicIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "EpicIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, EpicIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_EpicIconBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_EpicIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FacebookIconBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FacebookIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "FacebookIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FacebookIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FacebookIconBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FacebookIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_MobileIconBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_MobileIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "MobileIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, MobileIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_MobileIconBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_MobileIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConsoleIconBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConsoleIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ConsoleIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ConsoleIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConsoleIconBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConsoleIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PCIconBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PCIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "PCIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, PCIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PCIconBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PCIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_StatusIconBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_StatusIconBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "StatusIconBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, StatusIconBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_StatusIconBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_StatusIconBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendButtonContentBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendButtonContentBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "AddFriendButtonContentBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, AddFriendButtonContentBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendButtonContentBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendButtonContentBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendListActionButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendListActionButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendListActionButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FriendListActionButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendListActionButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendListActionButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_HeaderButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_HeaderButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "HeaderButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, HeaderButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_HeaderButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_HeaderButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "BackButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, BackButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ToolTipArrowBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ToolTipArrowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ToolTipArrowBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ToolTipArrowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ToolTipArrowBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ToolTipArrowBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuBackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMenuBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ActionMenuBackgroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowRightBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowRightBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMenuArrowRightBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ActionMenuArrowRightBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowRightBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowRightBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMenuArrowBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ActionMenuArrowBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonHoverContentColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonHoverContentColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonHoverContentColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ButtonHoverContentColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonHoverContentColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonHoverContentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonContentColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonContentColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonContentColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ButtonContentColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonContentColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonContentColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_CancelButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_CancelButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "CancelButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, CancelButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_CancelButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_CancelButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConfirmButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConfirmButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ConfirmButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, ConfirmButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConfirmButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConfirmButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendItemButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendItemButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendItemButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, FriendItemButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendItemButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendItemButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatIcon = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalChatIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, GlobalChatIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatIcon_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListStyle" },
		{ "ModuleRelativePath", "Public/SocialListStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalChatButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListStyle, GlobalChatButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialListStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SearchBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FontSizeBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PresenceSeperatorBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SeperatorBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SettingsBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SelectedOptionBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendEditableTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsListBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendsContainerBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_SpectateBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AwayBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OnlineBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_OfflineBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendImageBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_EpicIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FacebookIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_MobileIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConsoleIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_PCIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_StatusIconBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_AddFriendButtonContentBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendListActionButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_HeaderButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_BackButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ToolTipArrowBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowRightBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ActionMenuArrowBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonHoverContentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ButtonContentColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_CancelButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_ConfirmButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_FriendItemButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListStyle_Statics::NewProp_GlobalChatButtonStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialListStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"SocialListStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialListStyle),
		alignof(FSocialListStyle),
		Z_Construct_UScriptStruct_FSocialListStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialListStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialListStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialListStyle"), sizeof(FSocialListStyle), Get_Z_Construct_UScriptStruct_FSocialListStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialListStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialListStyle_CRC() { return 2643962038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
