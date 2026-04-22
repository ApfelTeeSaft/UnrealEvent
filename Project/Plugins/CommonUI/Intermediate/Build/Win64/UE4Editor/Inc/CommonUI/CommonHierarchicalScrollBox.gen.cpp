// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonHierarchicalScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonHierarchicalScrollBox() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonHierarchicalScrollBox::StaticRegisterNativesUCommonHierarchicalScrollBox()
	{
	}
	UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox_NoRegister()
	{
		return UCommonHierarchicalScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScrollBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonHierarchicalScrollBox.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonHierarchicalScrollBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonHierarchicalScrollBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::ClassParams = {
		&UCommonHierarchicalScrollBox::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonHierarchicalScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonHierarchicalScrollBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonHierarchicalScrollBox, 636814600);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonHierarchicalScrollBox(Z_Construct_UClass_UCommonHierarchicalScrollBox, &UCommonHierarchicalScrollBox::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonHierarchicalScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonHierarchicalScrollBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
