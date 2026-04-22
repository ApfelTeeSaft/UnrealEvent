// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialChatMessageList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialChatMessageList() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatMessageList_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialChatMessageList();
	UMG_API UClass* Z_Construct_UClass_UListViewBase();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
// End Cross Module References
	void USocialChatMessageList::StaticRegisterNativesUSocialChatMessageList()
	{
	}
	UClass* Z_Construct_UClass_USocialChatMessageList_NoRegister()
	{
		return USocialChatMessageList::StaticClass();
	}
	struct Z_Construct_UClass_USocialChatMessageList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialChatMessageList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListViewBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialChatMessageList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialChatMessageList.h" },
		{ "ToolTip", "class USocialChatChannel;" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialChatMessageList" },
		{ "ModuleRelativePath", "Public/SocialChatMessageList.h" },
	};
#endif
	void Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((USocialChatMessageList*)Obj)->bIsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USocialChatMessageList), &Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialChatMessageList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialChatMessageList_Statics::NewProp_bIsFocusable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialChatMessageList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialChatMessageList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialChatMessageList_Statics::ClassParams = {
		&USocialChatMessageList::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_USocialChatMessageList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageList_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialChatMessageList_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialChatMessageList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialChatMessageList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialChatMessageList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialChatMessageList, 1192698818);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialChatMessageList(Z_Construct_UClass_USocialChatMessageList, &USocialChatMessageList::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialChatMessageList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialChatMessageList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
