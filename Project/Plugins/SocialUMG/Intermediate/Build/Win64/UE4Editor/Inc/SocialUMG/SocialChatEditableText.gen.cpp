// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatEditableText.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatEditableText() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatEditableText_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatEditableText();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextStyle();
// End Cross Module References
	void USocialChatEditableText::StaticRegisterNativesUSocialChatEditableText()
	{
	}
	UClass* Z_Construct_UClass_USocialChatEditableText_NoRegister()
	{
		return USocialChatEditableText::StaticClass();
	}
	struct Z_Construct_UClass_USocialChatEditableText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoCompleteStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoCompleteStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditableTextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialChatEditableText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatEditableText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialChatEditableText.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialChatEditableText.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_AutoCompleteStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatEditableText" },
		{ "ModuleRelativePath", "Public/SocialChatEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_AutoCompleteStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "AutoCompleteStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USocialChatEditableText, AutoCompleteStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_AutoCompleteStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_AutoCompleteStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_EditableTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatEditableText" },
		{ "ModuleRelativePath", "Public/SocialChatEditableText.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_EditableTextStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "EditableTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(USocialChatEditableText, EditableTextStyle), Z_Construct_UScriptStruct_FEditableTextStyle, METADATA_PARAMS(Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_EditableTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_EditableTextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialChatEditableText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_AutoCompleteStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatEditableText_Statics::NewProp_EditableTextStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialChatEditableText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatEditableText>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialChatEditableText_Statics::ClassParams = {
		&USocialChatEditableText::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialChatEditableText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialChatEditableText_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialChatEditableText_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialChatEditableText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialChatEditableText()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialChatEditableText_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialChatEditableText, 2493220679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialChatEditableText(Z_Construct_UClass_USocialChatEditableText, &USocialChatEditableText::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialChatEditableText"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatEditableText);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
