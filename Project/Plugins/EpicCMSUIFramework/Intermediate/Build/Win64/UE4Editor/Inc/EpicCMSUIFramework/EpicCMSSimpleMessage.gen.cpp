// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSSimpleMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSSimpleMessage() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSSimpleMessage_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSSimpleMessage();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSImage_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
// End Cross Module References
	void UEpicCMSSimpleMessage::StaticRegisterNativesUEpicCMSSimpleMessage()
	{
	}
	UClass* Z_Construct_UClass_UEpicCMSSimpleMessage_NoRegister()
	{
		return UEpicCMSSimpleMessage::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSSimpleMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSSimpleMessage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSSimpleMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_PrimaryImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSSimpleMessage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSSimpleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_PrimaryImage = { UE4CodeGen_Private::EPropertyClass::Object, "PrimaryImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSSimpleMessage, PrimaryImage), Z_Construct_UClass_UEpicCMSImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_PrimaryImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_PrimaryImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_BodyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSSimpleMessage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSSimpleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_BodyText = { UE4CodeGen_Private::EPropertyClass::Object, "BodyText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSSimpleMessage, BodyText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_BodyText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_BodyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_TitleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSSimpleMessage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSSimpleMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_TitleText = { UE4CodeGen_Private::EPropertyClass::Object, "TitleText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSSimpleMessage, TitleText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_TitleText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_TitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_PrimaryImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_BodyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::NewProp_TitleText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSSimpleMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::ClassParams = {
		&UEpicCMSSimpleMessage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		nullptr, 0,
		Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSSimpleMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSSimpleMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSSimpleMessage, 176680868);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSSimpleMessage(Z_Construct_UClass_UEpicCMSSimpleMessage, &UEpicCMSSimpleMessage::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSSimpleMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSSimpleMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
