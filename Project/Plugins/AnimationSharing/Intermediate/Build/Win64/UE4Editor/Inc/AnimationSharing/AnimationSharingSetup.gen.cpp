// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingSetup() {}
// Cross Module References
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimationSharing();
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSharingScalability();
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup();
// End Cross Module References
	void UAnimationSharingSetup::StaticRegisterNativesUAnimationSharingSetup()
	{
	}
	UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister()
	{
		return UAnimationSharingSetup::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSharingSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalabilitySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalabilitySettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonSetups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletonSetups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkeletonSetups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSharingSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingSetup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimationSharingSetup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings = { UE4CodeGen_Private::EPropertyClass::Struct, "ScalabilitySettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSharingSetup, ScalabilitySettings), Z_Construct_UScriptStruct_FAnimationSharingScalability, METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingSetup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups = { UE4CodeGen_Private::EPropertyClass::Array, "SkeletonSetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAnimationSharingSetup, SkeletonSetups), METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SkeletonSetups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_ScalabilitySettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingSetup_Statics::NewProp_SkeletonSetups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSharingSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingSetup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingSetup_Statics::ClassParams = {
		&UAnimationSharingSetup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingSetup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSharingSetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationSharingSetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSharingSetup, 3051348717);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSharingSetup(Z_Construct_UClass_UAnimationSharingSetup, &UAnimationSharingSetup::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimationSharingSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
