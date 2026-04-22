// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonRichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonRichTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRichTextBlock();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextScrollStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode();
// End Cross Module References
	void UCommonRichTextBlock::StaticRegisterNativesUCommonRichTextBlock()
	{
	}
	UClass* Z_Construct_UClass_UCommonRichTextBlock_NoRegister()
	{
		return UCommonRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAllCaps_MetaData[];
#endif
		static void NewProp_bDisplayAllCaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAllCaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScrollStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyleOverrideClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultTextStyleOverrideClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTintInlineIcon_MetaData[];
#endif
		static void NewProp_bTintInlineIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTintInlineIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InlineIconDisplayMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InlineIconDisplayMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InlineIconDisplayMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonRichTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRichTextBlock" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit(void* Obj)
	{
		((UCommonRichTextBlock*)Obj)->bDisplayAllCaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayAllCaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonRichTextBlock), &Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRichTextBlock" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle = { UE4CodeGen_Private::EPropertyClass::Class, "ScrollStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000005, 1, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, ScrollStyle), Z_Construct_UClass_UCommonTextScrollStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRichTextBlock" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultTextStyleOverrideClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000005, 1, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, DefaultTextStyleOverrideClass), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRichTextBlock" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_SetBit(void* Obj)
	{
		((UCommonRichTextBlock*)Obj)->bTintInlineIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon = { UE4CodeGen_Private::EPropertyClass::Bool, "bTintInlineIcon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonRichTextBlock), &Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRichTextBlock" },
		{ "ModuleRelativePath", "Public/CommonRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode = { UE4CodeGen_Private::EPropertyClass::Enum, "InlineIconDisplayMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonRichTextBlock, InlineIconDisplayMode), Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode, METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonRichTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bDisplayAllCaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_ScrollStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_DefaultTextStyleOverrideClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_bTintInlineIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRichTextBlock_Statics::NewProp_InlineIconDisplayMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonRichTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonRichTextBlock_Statics::ClassParams = {
		&UCommonRichTextBlock::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCommonRichTextBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonRichTextBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonRichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonRichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonRichTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonRichTextBlock, 3581875041);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonRichTextBlock(Z_Construct_UClass_UCommonRichTextBlock, &UCommonRichTextBlock::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonRichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonRichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
