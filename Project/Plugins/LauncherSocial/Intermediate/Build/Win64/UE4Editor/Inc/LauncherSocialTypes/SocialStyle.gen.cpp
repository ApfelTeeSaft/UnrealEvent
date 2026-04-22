// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/SocialStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialStyle() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialStyle();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialSoundSchema();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatMarkupStyle();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatChromeColorScheme();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatChromeMargins();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatChromeStyle();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatColorScheme();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatStyle();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialListMargins();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialListStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialFontStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
// End Cross Module References
class UScriptStruct* FSocialStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FSocialStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialStyle, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("SocialStyle"), sizeof(FSocialStyle), Get_Z_Construct_UScriptStruct_FSocialStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialStyle(FSocialStyle::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("SocialStyle"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialStyle
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialStyle")),new UScriptStruct::TCppStructOps<FSocialStyle>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialStyle;
	struct Z_Construct_UScriptStruct_FSocialStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSchema_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundSchema;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMarkupStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatMarkupStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatChromeColorScheme_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatChromeColorScheme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatChromeMargins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatChromeMargins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatChromeStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatChromeStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatColorScheme_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatColorScheme;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialListMargins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocialListMargins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialListStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocialListStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioBoxStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadioBoxStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatFontStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatFontStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeFontStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LargeFontStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalFontStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalFontStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallFontStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmallFontStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionButtonStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SoundSchema_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SoundSchema = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundSchema", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, SoundSchema), Z_Construct_UScriptStruct_FSocialSoundSchema, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SoundSchema_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SoundSchema_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatMarkupStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatMarkupStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatMarkupStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatMarkupStyle), Z_Construct_UScriptStruct_FChatMarkupStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatMarkupStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatMarkupStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeColorScheme_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeColorScheme = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatChromeColorScheme", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatChromeColorScheme), Z_Construct_UScriptStruct_FChatChromeColorScheme, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeColorScheme_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeColorScheme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeMargins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeMargins = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatChromeMargins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatChromeMargins), Z_Construct_UScriptStruct_FChatChromeMargins, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeMargins_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeMargins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatChromeStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatChromeStyle), Z_Construct_UScriptStruct_FChatChromeStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatColorScheme_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatColorScheme = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatColorScheme", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatColorScheme), Z_Construct_UScriptStruct_FChatColorScheme, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatColorScheme_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatColorScheme_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatStyle), Z_Construct_UScriptStruct_FChatStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListMargins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListMargins = { UE4CodeGen_Private::EPropertyClass::Struct, "SocialListMargins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, SocialListMargins), Z_Construct_UScriptStruct_FSocialListMargins, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListMargins_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListMargins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "SocialListStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, SocialListStyle), Z_Construct_UScriptStruct_FSocialListStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_RadioBoxStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_RadioBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "RadioBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, RadioBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_RadioBoxStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_RadioBoxStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_CheckBoxStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_CheckBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "CheckBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_CheckBoxStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_CheckBoxStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatFontStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatFontStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatFontStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ChatFontStyle), Z_Construct_UScriptStruct_FSocialFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatFontStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatFontStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_LargeFontStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_LargeFontStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "LargeFontStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, LargeFontStyle), Z_Construct_UScriptStruct_FSocialFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_LargeFontStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_LargeFontStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_NormalFontStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_NormalFontStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalFontStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, NormalFontStyle), Z_Construct_UScriptStruct_FSocialFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_NormalFontStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_NormalFontStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SmallFontStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SmallFontStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "SmallFontStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, SmallFontStyle), Z_Construct_UScriptStruct_FSocialFontStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SmallFontStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SmallFontStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ActionButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ActionButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ActionButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ActionButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ActionButtonStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ScrollBarStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialStyle" },
		{ "ModuleRelativePath", "Public/SocialStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ScrollBarStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollBarStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ScrollBarStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ScrollBarStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SoundSchema,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatMarkupStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeColorScheme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeMargins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatChromeStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatColorScheme,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListMargins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SocialListStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_RadioBoxStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_CheckBoxStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ChatFontStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_LargeFontStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_NormalFontStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_SmallFontStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ActionButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialStyle_Statics::NewProp_ScrollBarStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"SocialStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialStyle),
		alignof(FSocialStyle),
		Z_Construct_UScriptStruct_FSocialStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialStyle"), sizeof(FSocialStyle), Get_Z_Construct_UScriptStruct_FSocialStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialStyle_CRC() { return 1256459928U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
