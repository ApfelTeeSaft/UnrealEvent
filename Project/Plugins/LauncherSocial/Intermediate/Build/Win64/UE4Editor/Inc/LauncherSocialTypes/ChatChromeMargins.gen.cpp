// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LauncherSocialTypes/Public/ChatChromeMargins.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatChromeMargins() {}
// Cross Module References
	LAUNCHERSOCIALTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FChatChromeMargins();
	UPackage* Z_Construct_UPackage__Script_LauncherSocialTypes();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
class UScriptStruct* FChatChromeMargins::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LAUNCHERSOCIALTYPES_API uint32 Get_Z_Construct_UScriptStruct_FChatChromeMargins_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatChromeMargins, Z_Construct_UPackage__Script_LauncherSocialTypes(), TEXT("ChatChromeMargins"), sizeof(FChatChromeMargins), Get_Z_Construct_UScriptStruct_FChatChromeMargins_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatChromeMargins(FChatChromeMargins::StaticStruct, TEXT("/Script/LauncherSocialTypes"), TEXT("ChatChromeMargins"), false, nullptr, nullptr);
static struct FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeMargins
{
	FScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeMargins()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChatChromeMargins")),new UScriptStruct::TCppStructOps<FChatChromeMargins>);
	}
} ScriptStruct_LauncherSocialTypes_StaticRegisterNativesFChatChromeMargins;
	struct Z_Construct_UScriptStruct_FChatChromeMargins_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserListIconPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserListIconPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserListButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserListButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatChannelPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatChannelPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatWindowToEntryMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatWindowToEntryMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatWindowPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatWindowPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TabWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatChromeMargins>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListIconPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListIconPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "UserListIconPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, UserListIconPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListIconPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListIconPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListButtonPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "UserListButtonPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, UserListButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListButtonPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatChannelPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatChannelPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatChannelPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, ChatChannelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatChannelPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatChannelPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowToEntryMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowToEntryMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatWindowToEntryMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, ChatWindowToEntryMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowToEntryMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowToEntryMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ChatWindowPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, ChatWindowPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "TabPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabPadding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatChromeMargins" },
		{ "ModuleRelativePath", "Public/ChatChromeMargins.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabWidth = { UE4CodeGen_Private::EPropertyClass::Float, "TabWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FChatChromeMargins, TabWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatChromeMargins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListIconPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_UserListButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatChannelPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowToEntryMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_ChatWindowPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatChromeMargins_Statics::NewProp_TabWidth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatChromeMargins_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LauncherSocialTypes,
		nullptr,
		&NewStructOps,
		"ChatChromeMargins",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChatChromeMargins),
		alignof(FChatChromeMargins),
		Z_Construct_UScriptStruct_FChatChromeMargins_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChatChromeMargins_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatChromeMargins()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatChromeMargins_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LauncherSocialTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatChromeMargins"), sizeof(FChatChromeMargins), Get_Z_Construct_UScriptStruct_FChatChromeMargins_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatChromeMargins_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatChromeMargins_CRC() { return 965233855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
