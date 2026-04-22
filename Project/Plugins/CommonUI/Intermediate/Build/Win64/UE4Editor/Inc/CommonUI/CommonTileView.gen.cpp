// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonTileView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTileView() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTileView_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTileView();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonTileView::StaticRegisterNativesUCommonTileView()
	{
	}
	UClass* Z_Construct_UClass_UCommonTileView_NoRegister()
	{
		return UCommonTileView::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTileView,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTileView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonTileView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTileView.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTileView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonTileView_Statics::ClassParams = {
		&UCommonTileView::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTileView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTileView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonTileView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonTileView, 420555687);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonTileView(Z_Construct_UClass_UCommonTileView, &UCommonTileView::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonTileView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTileView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
