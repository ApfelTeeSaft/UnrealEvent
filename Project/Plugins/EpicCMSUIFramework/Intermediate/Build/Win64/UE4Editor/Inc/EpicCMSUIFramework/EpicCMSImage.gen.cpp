// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSImage() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSImage_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSImage();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSImage_SetMediaURL();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_EpicCMSUIFramework_onLoadingCompleted__DelegateSignature();
// End Cross Module References
	void UEpicCMSImage::StaticRegisterNativesUEpicCMSImage()
	{
		UClass* Class = UEpicCMSImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMediaURL", &UEpicCMSImage::execSetMediaURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics
	{
		struct EpicCMSImage_eventSetMediaURL_Parms
		{
			FString MediaUrl;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MediaUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::NewProp_MediaUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::NewProp_MediaUrl = { UE4CodeGen_Private::EPropertyClass::Str, "MediaUrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicCMSImage_eventSetMediaURL_Parms, MediaUrl), METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::NewProp_MediaUrl_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::NewProp_MediaUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::NewProp_MediaUrl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSImage, "SetMediaURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EpicCMSImage_eventSetMediaURL_Parms), Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSImage_SetMediaURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSImage_SetMediaURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicCMSImage_NoRegister()
	{
		return UEpicCMSImage::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDownloadingExternalMedia_MetaData[];
#endif
		static void NewProp_bDownloadingExternalMedia_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDownloadingExternalMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalMedia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingFailFallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingFailFallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnImageLoadingComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImageLoadingComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonLazyImage,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEpicCMSImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEpicCMSImage_SetMediaURL, "SetMediaURL" }, // 3513666513
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSImage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSImage" },
		{ "ModuleRelativePath", "Public/EpicCMSImage.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia_SetBit(void* Obj)
	{
		((UEpicCMSImage*)Obj)->bDownloadingExternalMedia = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia = { UE4CodeGen_Private::EPropertyClass::Bool, "bDownloadingExternalMedia", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSImage), &Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_ExternalMedia_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSImage" },
		{ "ModuleRelativePath", "Public/EpicCMSImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_ExternalMedia = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalMedia", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UEpicCMSImage, ExternalMedia), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_ExternalMedia_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_ExternalMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_LoadingFailFallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSImage" },
		{ "ModuleRelativePath", "Public/EpicCMSImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_LoadingFailFallback = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadingFailFallback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSImage, LoadingFailFallback), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_LoadingFailFallback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_LoadingFailFallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_OnImageLoadingComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSImage" },
		{ "ModuleRelativePath", "Public/EpicCMSImage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_OnImageLoadingComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnImageLoadingComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UEpicCMSImage, OnImageLoadingComplete), Z_Construct_UDelegateFunction_EpicCMSUIFramework_onLoadingCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_OnImageLoadingComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_OnImageLoadingComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_bDownloadingExternalMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_ExternalMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_LoadingFailFallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSImage_Statics::NewProp_OnImageLoadingComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSImage_Statics::ClassParams = {
		&UEpicCMSImage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEpicCMSImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSImage_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSImage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSImage, 4246051508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSImage(Z_Construct_UClass_UEpicCMSImage, &UEpicCMSImage::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
