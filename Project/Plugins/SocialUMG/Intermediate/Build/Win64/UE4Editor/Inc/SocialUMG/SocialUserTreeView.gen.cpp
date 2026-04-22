// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialUserTreeView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialUserTreeView() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserTreeView_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserTreeView();
	UMG_API UClass* Z_Construct_UClass_UTreeView();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInteractionMenu_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInviteListEntry_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserListEntry_NoRegister();
// End Cross Module References
	void USocialUserTreeView::StaticRegisterNativesUSocialUserTreeView()
	{
	}
	UClass* Z_Construct_UClass_USocialUserTreeView_NoRegister()
	{
		return USocialUserTreeView::StaticClass();
	}
	struct Z_Construct_UClass_USocialUserTreeView_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteEntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InviteEntryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserEntryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UserEntryWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialUserTreeView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTreeView,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserTreeView_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialUserTreeView.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialUserTreeView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialUserTreeView" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialUserTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenu = { UE4CodeGen_Private::EPropertyClass::Object, "ActionMenu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008200d, 1, nullptr, STRUCT_OFFSET(USocialUserTreeView, ActionMenu), Z_Construct_UClass_USocialInteractionMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenuClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialUserTreeView" },
		{ "ModuleRelativePath", "Public/SocialUserTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenuClass = { UE4CodeGen_Private::EPropertyClass::Class, "ActionMenuClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(USocialUserTreeView, ActionMenuClass), Z_Construct_UClass_USocialInteractionMenu_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenuClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenuClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_InviteEntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialUserTreeView" },
		{ "ModuleRelativePath", "Public/SocialUserTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_InviteEntryWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "InviteEntryWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(USocialUserTreeView, InviteEntryWidgetClass), Z_Construct_UClass_USocialInviteListEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_InviteEntryWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_InviteEntryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_UserEntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialUserTreeView" },
		{ "ModuleRelativePath", "Public/SocialUserTreeView.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_UserEntryWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "UserEntryWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(USocialUserTreeView, UserEntryWidgetClass), Z_Construct_UClass_USocialUserListEntry_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_UserEntryWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_UserEntryWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialUserTreeView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_ActionMenuClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_InviteEntryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialUserTreeView_Statics::NewProp_UserEntryWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialUserTreeView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialUserTreeView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialUserTreeView_Statics::ClassParams = {
		&USocialUserTreeView::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialUserTreeView_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialUserTreeView_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialUserTreeView_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialUserTreeView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialUserTreeView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialUserTreeView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialUserTreeView, 857956718);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialUserTreeView(Z_Construct_UClass_USocialUserTreeView, &USocialUserTreeView::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialUserTreeView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialUserTreeView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
