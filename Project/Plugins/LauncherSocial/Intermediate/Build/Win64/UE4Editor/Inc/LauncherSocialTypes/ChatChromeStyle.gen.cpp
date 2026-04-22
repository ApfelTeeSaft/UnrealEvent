// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ChatChromeStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatChromeStyle() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatChromeStyle();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FChatChromeStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FChatChromeStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatChromeStyle, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ChatChromeStyle"), sizeof(FChatChromeStyle), Get_Z_Construct_UScriptStruct_FChatChromeStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatChromeStyle(FChatChromeStyle::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ChatChromeStyle"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeStyle
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatChromeStyle")),new UScriptStruct::TCppStructOps<FChatChromeStyle>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeStyle;
	struct Z_Construct_UScriptStruct_FChatChromeStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserListButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserListButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabClosePadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabClosePadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabContentPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabContentPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabOptionPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabOptionPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabSelectorButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabSelectorButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEntryBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatBackgroundBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserListBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserListBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatChromeStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "UserListButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, UserListButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabClosePadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabClosePadding = { UE4CodeGen_Private::EPropertyClass::Struct, "TabClosePadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, TabClosePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabClosePadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabClosePadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabContentPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabContentPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "TabContentPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, TabContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabContentPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabContentPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabOptionPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabOptionPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "TabOptionPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, TabOptionPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabOptionPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabOptionPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabSelectorButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabSelectorButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "TabSelectorButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, TabSelectorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabSelectorButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabSelectorButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "TabBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, TabBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ChannelBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, ChannelBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatEntryBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, ChatEntryBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, ChatBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatBackgroundBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeStyle" },
		{ "ModuleRelativePath", "Public/ChatChromeStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "UserListBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeStyle, UserListBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatChromeStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabClosePadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabContentPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabOptionPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabSelectorButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_TabBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChannelBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatEntryBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_ChatBackgroundBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeStyle_Statics::NewProp_UserListBrush,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatChromeStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ChatChromeStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChatChromeStyle),
		alignof(FChatChromeStyle),
		Z_Construct_UScriptStruct_FChatChromeStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatChromeStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatChromeStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatChromeStyle"), sizeof(FChatChromeStyle), Get_Z_Construct_UScriptStruct_FChatChromeStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatChromeStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatChromeStyle_CRC() { return 479081124U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
