// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialGroupTreeView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialGroupTreeView() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialGroupTreeView_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialGroupTreeView();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInteractionMenu_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserListEntry_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialGroupListEntry_NoRegister();
// End Cross Module References
	void USocialGroupTreeView::StaticRegisterNativesUSocialGroupTreeView()
	{
	}
	UClass* Z_Construct_UClass_USocialGroupTreeView_NoRegister()
	{
		return USocialGroupTreeView::StaticClass();
	}
	struct Z_Construct_UClass_USocialGroupTreeView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMenuClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActionMenuClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserEntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UserEntryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupEntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GroupEntryWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialGroupTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTreeView,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupTreeView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialGroupTreeView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialGroupTreeView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialGroupTreeView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialGroupTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenu = { UE4CodeGen_Private::EPropertyClass::Object, "ActionMenu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008200d, 1, nullptr, STRUCT_OFFSET(USocialGroupTreeView, ActionMenu), Z_Construct_UClass_USocialInteractionMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenuClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialGroupTreeView" },
		{ "ModuleRelativePath", "Public/SocialGroupTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenuClass = { UE4CodeGen_Private::EPropertyClass::Class, "ActionMenuClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(USocialGroupTreeView, ActionMenuClass), Z_Construct_UClass_USocialInteractionMenu_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenuClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_UserEntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialGroupTreeView" },
		{ "ModuleRelativePath", "Public/SocialGroupTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_UserEntryWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "UserEntryWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(USocialGroupTreeView, UserEntryWidgetClass), Z_Construct_UClass_USocialUserListEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_UserEntryWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_UserEntryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_GroupEntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialGroupTreeView" },
		{ "ModuleRelativePath", "Public/SocialGroupTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_GroupEntryWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "GroupEntryWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(USocialGroupTreeView, GroupEntryWidgetClass), Z_Construct_UClass_USocialGroupListEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_GroupEntryWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_GroupEntryWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialGroupTreeView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_ActionMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_UserEntryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialGroupTreeView_Statics::NewProp_GroupEntryWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialGroupTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialGroupTreeView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialGroupTreeView_Statics::ClassParams = {
		&USocialGroupTreeView::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialGroupTreeView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialGroupTreeView_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialGroupTreeView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialGroupTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialGroupTreeView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialGroupTreeView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialGroupTreeView, 3651573406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialGroupTreeView(Z_Construct_UClass_USocialGroupTreeView, &USocialGroupTreeView::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialGroupTreeView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialGroupTreeView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
