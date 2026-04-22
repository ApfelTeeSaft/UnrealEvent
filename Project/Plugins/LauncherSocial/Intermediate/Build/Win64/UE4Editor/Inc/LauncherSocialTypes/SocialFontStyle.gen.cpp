// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/SocialFontStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialFontStyle() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FSocialFontStyle();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
// End Cross Module References
class UScriptStruct* FSocialFontStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FSocialFontStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialFontStyle, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("SocialFontStyle"), sizeof(FSocialFontStyle), Get_Z_Construct_UScriptStruct_FSocialFontStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocialFontStyle(FSocialFontStyle::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("SocialFontStyle"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialFontStyle
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialFontStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocialFontStyle")),new UScriptStruct::TCppStructOps<FSocialFontStyle>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFSocialFontStyle;
	struct Z_Construct_UScriptStruct_FSocialFontStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDullFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultDullFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertedFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvertedFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontLargeBold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontLargeBold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontLarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontNormalBold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontNormalBold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSmallBold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontSmallBold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSmall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontSmall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialFontStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultDullFontColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultDullFontColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultDullFontColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, DefaultDullFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultDullFontColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultDullFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_InvertedFontColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_InvertedFontColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InvertedFontColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, InvertedFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_InvertedFontColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_InvertedFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultFontColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultFontColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultFontColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, DefaultFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultFontColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLargeBold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLargeBold = { UE4CodeGen_Private::EPropertyClass::Struct, "FontLargeBold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, FontLargeBold), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLargeBold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLargeBold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLarge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLarge = { UE4CodeGen_Private::EPropertyClass::Struct, "FontLarge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, FontLarge), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLarge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormalBold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormalBold = { UE4CodeGen_Private::EPropertyClass::Struct, "FontNormalBold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, FontNormalBold), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormalBold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormalBold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "FontNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, FontNormal), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmallBold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmallBold = { UE4CodeGen_Private::EPropertyClass::Struct, "FontSmallBold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, FontSmallBold), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmallBold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmallBold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialFontStyle" },
		{ "ModuleRelativePath", "Public/SocialFontStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmall = { UE4CodeGen_Private::EPropertyClass::Struct, "FontSmall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSocialFontStyle, FontSmall), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmall_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialFontStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultDullFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_InvertedFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_DefaultFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLargeBold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormalBold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmallBold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialFontStyle_Statics::NewProp_FontSmall,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialFontStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"SocialFontStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSocialFontStyle),
		alignof(FSocialFontStyle),
		Z_Construct_UScriptStruct_FSocialFontStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialFontStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialFontStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocialFontStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocialFontStyle"), sizeof(FSocialFontStyle), Get_Z_Construct_UScriptStruct_FSocialFontStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocialFontStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocialFontStyle_CRC() { return 1932001290U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
