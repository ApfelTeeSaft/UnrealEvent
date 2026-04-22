// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ChatStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatStyle() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatStyle();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
// End Cross Module References
class UScriptStruct* FChatStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FChatStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatStyle, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ChatStyle"), sizeof(FChatStyle), Get_Z_Construct_UScriptStruct_FChatStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatStyle(FChatStyle::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ChatStyle"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatStyle
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatStyle")),new UScriptStruct::TCppStructOps<FChatStyle>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatStyle;
	struct Z_Construct_UScriptStruct_FChatStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendActionStatusMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendActionStatusMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendActionHeaderPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendActionHeaderPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendActionPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendActionPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMenuBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatMenuBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChatEntryHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEntryPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageNotificationBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MessageNotificationBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBorderStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollBorderStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatDisplayTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatDisplayTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEntryTextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionStatusMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionStatusMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendActionStatusMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, FriendActionStatusMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionStatusMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionStatusMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionHeaderPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionHeaderPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendActionHeaderPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, FriendActionHeaderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionHeaderPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionHeaderPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "FriendActionPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, FriendActionPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatMenuBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatMenuBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatMenuBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, ChatMenuBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatMenuBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatMenuBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ChatEntryHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, ChatEntryHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryHeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatEntryPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, ChatEntryPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_MessageNotificationBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_MessageNotificationBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "MessageNotificationBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, MessageNotificationBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_MessageNotificationBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_MessageNotificationBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ScrollBorderStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ScrollBorderStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollBorderStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, ScrollBorderStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ScrollBorderStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ScrollBorderStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatDisplayTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatDisplayTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatDisplayTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, ChatDisplayTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatDisplayTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatDisplayTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatStyle" },
		{ "ModuleRelativePath", "Public/ChatStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatEntryTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatStyle, ChatEntryTextStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryTextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionStatusMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionHeaderPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_FriendActionPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatMenuBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_MessageNotificationBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ScrollBorderStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatDisplayTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatStyle_Statics::NewProp_ChatEntryTextStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ChatStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChatStyle),
		alignof(FChatStyle),
		Z_Construct_UScriptStruct_FChatStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatStyle"), sizeof(FChatStyle), Get_Z_Construct_UScriptStruct_FChatStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatStyle_CRC() { return 662861638U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
