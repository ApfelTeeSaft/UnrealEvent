// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSTileBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSTileBase() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSTileBase_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSTileBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileBase_Launch();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserListEntry_NoRegister();
// End Cross Module References
	void UEpicCMSTileBase::StaticRegisterNativesUEpicCMSTileBase()
	{
		UClass* Class = UEpicCMSTileBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Launch", &UEpicCMSTileBase::execLaunch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEpicCMSTileBase_Launch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileBase_Launch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileBase_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileBase, "Launch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileBase_Launch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileBase_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileBase_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileBase_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicCMSTileBase_NoRegister()
	{
		return UEpicCMSTileBase::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSTileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyebrowTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EyebrowTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitleTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazyImage_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LazyImage_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalMedia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRefreshingMcpCatalog_MetaData[];
#endif
		static void NewProp_bRefreshingMcpCatalog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRefreshingMcpCatalog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDownloadingExternalMedia_MetaData[];
#endif
		static void NewProp_bDownloadingExternalMedia_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDownloadingExternalMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Link_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Link;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeaturedTitleTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FeaturedTitleTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTitleTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultTitleTextStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSTileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButton,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEpicCMSTileBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEpicCMSTileBase_Launch, "Launch" }, // 246612850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSTileBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_EyebrowTextBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_EyebrowTextBlock = { UE4CodeGen_Private::EPropertyClass::Object, "EyebrowTextBlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, EyebrowTextBlock), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_EyebrowTextBlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_EyebrowTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_SubtitleTextBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_SubtitleTextBlock = { UE4CodeGen_Private::EPropertyClass::Object, "SubtitleTextBlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, SubtitleTextBlock), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_SubtitleTextBlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_SubtitleTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_TitleTextBlock_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_TitleTextBlock = { UE4CodeGen_Private::EPropertyClass::Object, "TitleTextBlock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, TitleTextBlock), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_TitleTextBlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_TitleTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_LazyImage_Icon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_LazyImage_Icon = { UE4CodeGen_Private::EPropertyClass::Object, "LazyImage_Icon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, LazyImage_Icon), Z_Construct_UClass_UCommonLazyImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_LazyImage_Icon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_LazyImage_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_ExternalMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_ExternalMedia = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalMedia", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, ExternalMedia), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_ExternalMedia_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_ExternalMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog_SetBit(void* Obj)
	{
		((UEpicCMSTileBase*)Obj)->bRefreshingMcpCatalog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog = { UE4CodeGen_Private::EPropertyClass::Bool, "bRefreshingMcpCatalog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSTileBase), &Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia_SetBit(void* Obj)
	{
		((UEpicCMSTileBase*)Obj)->bDownloadingExternalMedia = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia = { UE4CodeGen_Private::EPropertyClass::Bool, "bDownloadingExternalMedia", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSTileBase), &Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Link_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Link = { UE4CodeGen_Private::EPropertyClass::Str, "Link", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, Link), METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Link_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Link_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Title = { UE4CodeGen_Private::EPropertyClass::Text, "Title", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, Title), METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Title_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_FeaturedTitleTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_FeaturedTitleTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "FeaturedTitleTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, FeaturedTitleTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_FeaturedTitleTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_FeaturedTitleTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_DefaultTitleTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileBase" },
		{ "ModuleRelativePath", "Public/EpicCMSTileBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_DefaultTitleTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultTitleTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileBase, DefaultTitleTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_DefaultTitleTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_DefaultTitleTextStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSTileBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_EyebrowTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_SubtitleTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_TitleTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_LazyImage_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_ExternalMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bRefreshingMcpCatalog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_bDownloadingExternalMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Link,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_FeaturedTitleTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileBase_Statics::NewProp_DefaultTitleTextStyle,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEpicCMSTileBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserListEntry_NoRegister, (int32)VTABLE_OFFSET(UEpicCMSTileBase, IUserListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSTileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSTileBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSTileBase_Statics::ClassParams = {
		&UEpicCMSTileBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEpicCMSTileBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSTileBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSTileBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSTileBase, 480685413);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSTileBase(Z_Construct_UClass_UEpicCMSTileBase, &UEpicCMSTileBase::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSTileBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSTileBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
