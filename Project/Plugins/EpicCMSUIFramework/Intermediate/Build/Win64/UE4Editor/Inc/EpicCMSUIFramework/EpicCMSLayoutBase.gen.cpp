// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSLayoutBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSLayoutBase() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSLayoutBase_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSLayoutBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSTileCarousel_NoRegister();
	EPICCMSUIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FSlotDescription();
// End Cross Module References
	void UEpicCMSLayoutBase::StaticRegisterNativesUEpicCMSLayoutBase()
	{
	}
	UClass* Z_Construct_UClass_UEpicCMSLayoutBase_NoRegister()
	{
		return UEpicCMSLayoutBase::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSLayoutBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarouselClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CarouselClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarouselSlotDescriptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CarouselSlotDescriptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarouselSlotDescriptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSLayoutBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSLayoutBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSLayoutBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSLayoutBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSLayoutBase" },
		{ "ModuleRelativePath", "Public/EpicCMSLayoutBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselClass = { UE4CodeGen_Private::EPropertyClass::Class, "CarouselClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSLayoutBase, CarouselClass), Z_Construct_UClass_UEpicCMSTileCarousel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSLayoutBase" },
		{ "ModuleRelativePath", "Public/EpicCMSLayoutBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions = { UE4CodeGen_Private::EPropertyClass::Array, "CarouselSlotDescriptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSLayoutBase, CarouselSlotDescriptions), METADATA_PARAMS(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CarouselSlotDescriptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlotDescription, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSLayoutBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSLayoutBase_Statics::NewProp_CarouselSlotDescriptions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSLayoutBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSLayoutBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSLayoutBase_Statics::ClassParams = {
		&UEpicCMSLayoutBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		nullptr, 0,
		Z_Construct_UClass_UEpicCMSLayoutBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSLayoutBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSLayoutBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSLayoutBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSLayoutBase, 3732266650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSLayoutBase(Z_Construct_UClass_UEpicCMSLayoutBase, &UEpicCMSLayoutBase::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSLayoutBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSLayoutBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
