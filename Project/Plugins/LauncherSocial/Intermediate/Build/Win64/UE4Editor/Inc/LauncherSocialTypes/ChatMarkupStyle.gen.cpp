// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ChatMarkupStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatMarkupStyle() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatMarkupStyle();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
// End Cross Module References
class UScriptStruct* FChatMarkupStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FChatMarkupStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatMarkupStyle, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ChatMarkupStyle"), sizeof(FChatMarkupStyle), Get_Z_Construct_UScriptStruct_FChatMarkupStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatMarkupStyle(FChatMarkupStyle::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ChatMarkupStyle"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatMarkupStyle
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatMarkupStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatMarkupStyle")),new UScriptStruct::TCppStructOps<FChatMarkupStyle>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatMarkupStyle;
	struct Z_Construct_UScriptStruct_FChatMarkupStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkupPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkupPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeperatorThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeperatorThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeperatorBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeperatorBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonHoverColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonHoverColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkupBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkupBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkupTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkupTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkupButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkupButtonStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatMarkupStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkupPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, MarkupPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorThickness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorThickness = { UE4CodeGen_Private::EPropertyClass::Float, "SeperatorThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, SeperatorThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SeperatorBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, SeperatorBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorBrush_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_TipColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_TipColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TipColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, TipColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_TipColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_TipColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonHoverColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonHoverColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonHoverColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, ButtonHoverColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonHoverColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonHoverColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, ButtonColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupBackground_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupBackground = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkupBackground", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, MarkupBackground), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupBackground_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkupTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, MarkupTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupButtonStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatMarkupStyle" },
		{ "ModuleRelativePath", "Public/ChatMarkupStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupButtonStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkupButtonStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatMarkupStyle, MarkupButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupButtonStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_SeperatorBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_TipColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonHoverColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_ButtonColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::NewProp_MarkupButtonStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ChatMarkupStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChatMarkupStyle),
		alignof(FChatMarkupStyle),
		Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatMarkupStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatMarkupStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatMarkupStyle"), sizeof(FChatMarkupStyle), Get_Z_Construct_UScriptStruct_FChatMarkupStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatMarkupStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatMarkupStyle_CRC() { return 1330514584U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
