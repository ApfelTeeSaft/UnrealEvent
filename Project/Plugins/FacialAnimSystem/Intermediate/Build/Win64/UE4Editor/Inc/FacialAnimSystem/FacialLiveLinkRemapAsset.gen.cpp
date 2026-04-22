// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FacialAnimSystem/Public/FacialLiveLinkRemapAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacialLiveLinkRemapAsset() {}
// Cross Module References
	FACIALANIMSYSTEM_API UClass* Z_Construct_UClass_UFacialLiveLinkRemapAsset_NoRegister();
	FACIALANIMSYSTEM_API UClass* Z_Construct_UClass_UFacialLiveLinkRemapAsset();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	UPackage* Z_Construct_UPackage__Script_FacialAnimSystem();
// End Cross Module References
	void UFacialLiveLinkRemapAsset::StaticRegisterNativesUFacialLiveLinkRemapAsset()
	{
	}
	UClass* Z_Construct_UClass_UFacialLiveLinkRemapAsset_NoRegister()
	{
		return UFacialLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtractCurve_MetaData[];
#endif
		static void NewProp_bExtractCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtractCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtractBoneTransform_MetaData[];
#endif
		static void NewProp_bExtractBoneTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtractBoneTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FacialAnimSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FacialLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FacialLiveLinkRemapAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FacialLiveLinkRemapAsset" },
		{ "ModuleRelativePath", "Public/FacialLiveLinkRemapAsset.h" },
	};
#endif
	void Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve_SetBit(void* Obj)
	{
		((UFacialLiveLinkRemapAsset*)Obj)->bExtractCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bExtractCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFacialLiveLinkRemapAsset), &Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FacialLiveLinkRemapAsset" },
		{ "ModuleRelativePath", "Public/FacialLiveLinkRemapAsset.h" },
	};
#endif
	void Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform_SetBit(void* Obj)
	{
		((UFacialLiveLinkRemapAsset*)Obj)->bExtractBoneTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bExtractBoneTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFacialLiveLinkRemapAsset), &Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::NewProp_bExtractBoneTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFacialLiveLinkRemapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::ClassParams = {
		&UFacialLiveLinkRemapAsset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFacialLiveLinkRemapAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFacialLiveLinkRemapAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFacialLiveLinkRemapAsset, 820047317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFacialLiveLinkRemapAsset(Z_Construct_UClass_UFacialLiveLinkRemapAsset, &UFacialLiveLinkRemapAsset::StaticClass, TEXT("/Script/FacialAnimSystem"), TEXT("UFacialLiveLinkRemapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFacialLiveLinkRemapAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
