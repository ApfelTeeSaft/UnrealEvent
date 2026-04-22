// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/SocialListMargins.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialListMargins() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialListMargins();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
class UScriptStruct* FSocialListMargins::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FSocialListMargins_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialListMargins, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("SocialListMargins"), sizeof(FSocialListMargins), Get_Z_Construct_UScriptStruct_FSocialListMargins_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialListMargins(FSocialListMargins::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("SocialListMargins"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialListMargins
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialListMargins()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialListMargins")),new UScriptStruct::TCppStructOps<FSocialListMargins>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialListMargins;
	struct Z_Construct_UScriptStruct_FSocialListMargins_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddButtonSpacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddButtonSpacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipStatusMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipStatusMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToolTipMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTipSeperatorMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendTipSeperatorMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTipPresenceMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendTipPresenceMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTipMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendTipMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceSeperatorThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PresenceSeperatorThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuSeperatorThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubMenuSeperatorThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuListMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuListMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuSettingButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuSettingButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuBackButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuBackButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuSearchTextMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuSearchTextMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuSearchIconMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuSearchIconMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioSettingTitleMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadioSettingTitleMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuPageIconMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuPageIconMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMenuBackIconMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubMenuBackIconMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoneFriendIconWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoneFriendIconWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoneFriendContentHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoneFriendContentHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoneFriendContentMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoneFriendContentMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmationButtonContentMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfirmationButtonContentMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmationButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfirmationButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmationBorderMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfirmationBorderMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemTextScrollerMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendItemTextScrollerMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemPlatformMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendItemPlatformMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemPresenceMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendItemPresenceMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTipStatusMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendTipStatusMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemStatusMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendItemStatusMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendItemMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendItemMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderButtonContentMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderButtonContentMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsListHeaderCountMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsListHeaderCountMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsListHeaderMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsListHeaderMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsListNoFriendsMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsListNoFriendsMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsListMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendsListMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderButtonMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeaderButtonMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserPresenceImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPresenceImageSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialListMargins>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonSpacing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonSpacing = { UE4CodeGen_Private::EPropertyClass::Struct, "AddButtonSpacing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, AddButtonSpacing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonSpacing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonSpacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "AddButtonMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, AddButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_TipStatusMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_TipStatusMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "TipStatusMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, TipStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_TipStatusMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_TipStatusMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ToolTipMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ToolTipMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "ToolTipMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, ToolTipMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ToolTipMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ToolTipMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipSeperatorMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipSeperatorMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendTipSeperatorMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendTipSeperatorMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipSeperatorMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipSeperatorMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipPresenceMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipPresenceMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendTipPresenceMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendTipPresenceMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipPresenceMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipPresenceMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendTipMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendTipMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_PresenceSeperatorThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_PresenceSeperatorThickness = { UE4CodeGen_Private::EPropertyClass::Float, "PresenceSeperatorThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, PresenceSeperatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_PresenceSeperatorThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_PresenceSeperatorThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSeperatorThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSeperatorThickness = { UE4CodeGen_Private::EPropertyClass::Float, "SubMenuSeperatorThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuSeperatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSeperatorThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSeperatorThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuListMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuListMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuListMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuListMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuListMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuListMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSettingButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSettingButtonMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuSettingButtonMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuSettingButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSettingButtonMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSettingButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackButtonMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuBackButtonMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuBackButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackButtonMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchTextMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchTextMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuSearchTextMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuSearchTextMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchTextMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchTextMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchIconMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchIconMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuSearchIconMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuSearchIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchIconMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchIconMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_RadioSettingTitleMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_RadioSettingTitleMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "RadioSettingTitleMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, RadioSettingTitleMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_RadioSettingTitleMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_RadioSettingTitleMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuPageIconMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuPageIconMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuPageIconMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuPageIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuPageIconMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuPageIconMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackIconMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackIconMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "SubMenuBackIconMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, SubMenuBackIconMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackIconMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackIconMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendIconWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendIconWidth = { UE4CodeGen_Private::EPropertyClass::Float, "NoneFriendIconWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, NoneFriendIconWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendIconWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendIconWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NoneFriendContentHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, NoneFriendContentHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "NoneFriendContentMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, NoneFriendContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonContentMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonContentMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "ConfirmationButtonContentMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, ConfirmationButtonContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonContentMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonContentMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "ConfirmationButtonMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, ConfirmationButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationBorderMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationBorderMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "ConfirmationBorderMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, ConfirmationBorderMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationBorderMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationBorderMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemTextScrollerMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemTextScrollerMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendItemTextScrollerMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendItemTextScrollerMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemTextScrollerMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemTextScrollerMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPlatformMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPlatformMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendItemPlatformMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendItemPlatformMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPlatformMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPlatformMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPresenceMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPresenceMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendItemPresenceMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendItemPresenceMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPresenceMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPresenceMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipStatusMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipStatusMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendTipStatusMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendTipStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipStatusMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipStatusMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemStatusMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemStatusMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendItemStatusMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendItemStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemStatusMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemStatusMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendItemMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendItemMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonContentMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonContentMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "HeaderButtonContentMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, HeaderButtonContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonContentMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonContentMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderCountMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderCountMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendsListHeaderCountMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendsListHeaderCountMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderCountMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderCountMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendsListHeaderMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendsListHeaderMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListNoFriendsMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListNoFriendsMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendsListNoFriendsMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendsListNoFriendsMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListNoFriendsMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListNoFriendsMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendsListMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, FriendsListMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "HeaderButtonMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, HeaderButtonMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_UserPresenceImageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialListMargins" },
		{ "ModuleRelativePath", "Public/SocialListMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_UserPresenceImageSize = { UE4CodeGen_Private::EPropertyClass::Struct, "UserPresenceImageSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialListMargins, UserPresenceImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_UserPresenceImageSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_UserPresenceImageSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialListMargins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_AddButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_TipStatusMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ToolTipMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipSeperatorMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipPresenceMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_PresenceSeperatorThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSeperatorThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuListMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSettingButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchTextMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuSearchIconMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_RadioSettingTitleMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuPageIconMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_SubMenuBackIconMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendIconWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_NoneFriendContentMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonContentMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_ConfirmationBorderMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemTextScrollerMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPlatformMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemPresenceMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendTipStatusMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemStatusMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendItemMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonContentMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderCountMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListHeaderMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListNoFriendsMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_FriendsListMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_HeaderButtonMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialListMargins_Statics::NewProp_UserPresenceImageSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialListMargins_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"SocialListMargins",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialListMargins),
		alignof(FSocialListMargins),
		Z_Construct_UScriptStruct_FSocialListMargins_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialListMargins_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialListMargins_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialListMargins()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialListMargins_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialListMargins"), sizeof(FSocialListMargins), Get_Z_Construct_UScriptStruct_FSocialListMargins_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialListMargins_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialListMargins_CRC() { return 649070443U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
