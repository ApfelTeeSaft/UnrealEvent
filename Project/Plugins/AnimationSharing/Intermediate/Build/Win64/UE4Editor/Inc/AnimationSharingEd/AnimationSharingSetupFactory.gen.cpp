// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharingEd/Public/AnimationSharingSetupFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingSetupFactory() {}
// Cross Module References
	ANIMATIONSHARINGED_API UClass* Z_Construct_UClass_UAnimationSharingSetupFactory_NoRegister();
	ANIMATIONSHARINGED_API UClass* Z_Construct_UClass_UAnimationSharingSetupFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AnimationSharingEd();
// End Cross Module References
	void UAnimationSharingSetupFactory::StaticRegisterNativesUAnimationSharingSetupFactory()
	{
	}
	UClass* Z_Construct_UClass_UAnimationSharingSetupFactory_NoRegister()
	{
		return UAnimationSharingSetupFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSharingSetupFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharingEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationSharingSetupFactory.h" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetupFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingSetupFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::ClassParams = {
		&UAnimationSharingSetupFactory::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSharingSetupFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationSharingSetupFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSharingSetupFactory, 427499821);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSharingSetupFactory(Z_Construct_UClass_UAnimationSharingSetupFactory, &UAnimationSharingSetupFactory::StaticClass, TEXT("/Script/AnimationSharingEd"), TEXT("UAnimationSharingSetupFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingSetupFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
