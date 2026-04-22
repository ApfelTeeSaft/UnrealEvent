// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonTreeView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTreeView() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTreeView_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTreeView();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonTreeView::StaticRegisterNativesUCommonTreeView()
	{
	}
	UClass* Z_Construct_UClass_UCommonTreeView_NoRegister()
	{
		return UCommonTreeView::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTreeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTreeView,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTreeView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonTreeView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTreeView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTreeView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonTreeView_Statics::ClassParams = {
		&UCommonTreeView::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTreeView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTreeView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonTreeView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonTreeView, 3840862588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonTreeView(Z_Construct_UClass_UCommonTreeView, &UCommonTreeView::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonTreeView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTreeView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
