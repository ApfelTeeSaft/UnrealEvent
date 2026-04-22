// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ChatChromeColorScheme.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatChromeColorScheme() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatChromeColorScheme();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FChatChromeColorScheme::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FChatChromeColorScheme_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatChromeColorScheme, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ChatChromeColorScheme"), sizeof(FChatChromeColorScheme), Get_Z_Construct_UScriptStruct_FChatChromeColorScheme_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatChromeColorScheme(FChatChromeColorScheme::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ChatChromeColorScheme"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeColorScheme
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeColorScheme()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatChromeColorScheme")),new UScriptStruct::TCppStructOps<FChatChromeColorScheme>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeColorScheme;
	struct Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabFontColorInverted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabFontColorInverted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoneActiveTabColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoneActiveTabColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatEntryBackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatChromeColorScheme.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatChromeColorScheme>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatBackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeColorScheme" },
		{ "ModuleRelativePath", "Public/ChatChromeColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeColorScheme, ChatBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColorInverted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeColorScheme" },
		{ "ModuleRelativePath", "Public/ChatChromeColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColorInverted = { UE4CodeGen_Private::EPropertyClass::Struct, "TabFontColorInverted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeColorScheme, TabFontColorInverted), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColorInverted_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColorInverted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeColorScheme" },
		{ "ModuleRelativePath", "Public/ChatChromeColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TabFontColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeColorScheme, TabFontColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_NoneActiveTabColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeColorScheme" },
		{ "ModuleRelativePath", "Public/ChatChromeColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_NoneActiveTabColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NoneActiveTabColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeColorScheme, NoneActiveTabColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_NoneActiveTabColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_NoneActiveTabColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatEntryBackgroundColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeColorScheme" },
		{ "ModuleRelativePath", "Public/ChatChromeColorScheme.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatEntryBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatEntryBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeColorScheme, ChatEntryBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatEntryBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatEntryBackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColorInverted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_TabFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_NoneActiveTabColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::NewProp_ChatEntryBackgroundColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ChatChromeColorScheme",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChatChromeColorScheme),
		alignof(FChatChromeColorScheme),
		Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatChromeColorScheme()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatChromeColorScheme_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatChromeColorScheme"), sizeof(FChatChromeColorScheme), Get_Z_Construct_UScriptStruct_FChatChromeColorScheme_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatChromeColorScheme_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatChromeColorScheme_CRC() { return 3952031367U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
