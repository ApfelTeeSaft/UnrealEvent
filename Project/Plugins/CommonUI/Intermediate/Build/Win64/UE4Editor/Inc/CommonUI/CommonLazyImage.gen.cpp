// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonLazyImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLazyImage() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyImage_IsLoading();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void UCommonLazyImage::StaticRegisterNativesUCommonLazyImage()
	{
		UClass* Class = UCommonLazyImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoading", &UCommonLazyImage::execIsLoading },
			{ "SetBrushFromLazyDisplayAsset", &UCommonLazyImage::execSetBrushFromLazyDisplayAsset },
			{ "SetBrushFromLazyMaterial", &UCommonLazyImage::execSetBrushFromLazyMaterial },
			{ "SetBrushFromLazyTexture", &UCommonLazyImage::execSetBrushFromLazyTexture },
			{ "SetMaterialTextureParamName", &UCommonLazyImage::execSetMaterialTextureParamName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics
	{
		struct CommonLazyImage_eventIsLoading_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonLazyImage_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonLazyImage_eventIsLoading_Parms), &Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, "IsLoading", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonLazyImage_eventIsLoading_Parms), Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics
	{
		struct CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms
		{
			TSoftObjectPtr<UObject> LazyObject;
			bool bMatchTextureSize;
		};
		static void NewProp_bMatchTextureSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazyObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LazyObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize_SetBit(void* Obj)
	{
		((CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms*)Obj)->bMatchTextureSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bMatchTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms), &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject = { UE4CodeGen_Private::EPropertyClass::SoftObject, "LazyObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000182, 1, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms, LazyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, "SetBrushFromLazyDisplayAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms), Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics
	{
		struct CommonLazyImage_eventSetBrushFromLazyMaterial_Parms
		{
			TSoftObjectPtr<UMaterialInterface> LazyMaterial;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazyMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LazyMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial = { UE4CodeGen_Private::EPropertyClass::SoftObject, "LazyMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000182, 1, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetBrushFromLazyMaterial_Parms, LazyMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, "SetBrushFromLazyMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonLazyImage_eventSetBrushFromLazyMaterial_Parms), Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics
	{
		struct CommonLazyImage_eventSetBrushFromLazyTexture_Parms
		{
			TSoftObjectPtr<UTexture2D> LazyTexture;
			bool bMatchSize;
		};
		static void NewProp_bMatchSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LazyTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LazyTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize_SetBit(void* Obj)
	{
		((CommonLazyImage_eventSetBrushFromLazyTexture_Parms*)Obj)->bMatchSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bMatchSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonLazyImage_eventSetBrushFromLazyTexture_Parms), &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture = { UE4CodeGen_Private::EPropertyClass::SoftObject, "LazyTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000182, 1, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetBrushFromLazyTexture_Parms, LazyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, "SetBrushFromLazyTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CommonLazyImage_eventSetBrushFromLazyTexture_Parms), Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics
	{
		struct CommonLazyImage_eventSetMaterialTextureParamName_Parms
		{
			FName TextureParamName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::NewProp_TextureParamName = { UE4CodeGen_Private::EPropertyClass::Name, "TextureParamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetMaterialTextureParamName_Parms, TextureParamName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::NewProp_TextureParamName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, "SetMaterialTextureParamName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonLazyImage_eventSetMaterialTextureParamName_Parms), Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister()
	{
		return UCommonLazyImage::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLazyImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_OnLoadingStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnLoadingStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialTextureParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialTextureParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingBackgroundBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingBackgroundBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLazyImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonLazyImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonLazyImage_IsLoading, "IsLoading" }, // 924986336
		{ &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset, "SetBrushFromLazyDisplayAsset" }, // 2108066303
		{ &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial, "SetBrushFromLazyMaterial" }, // 3462139169
		{ &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture, "SetBrushFromLazyTexture" }, // 638367718
		{ &Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName, "SetMaterialTextureParamName" }, // 4085718403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonLazyImage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLazyImage" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "BP_OnLoadingStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000010080005, 1, nullptr, STRUCT_OFFSET(UCommonLazyImage, BP_OnLoadingStateChanged), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLazyImage" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialTextureParamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040040000000005, 1, nullptr, STRUCT_OFFSET(UCommonLazyImage, MaterialTextureParamName), METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonLazyImage" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "LoadingBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(UCommonLazyImage, LoadingBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLazyImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLazyImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLazyImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonLazyImage_Statics::ClassParams = {
		&UCommonLazyImage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonLazyImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLazyImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonLazyImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonLazyImage, 2886899081);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonLazyImage(Z_Construct_UClass_UCommonLazyImage, &UCommonLazyImage::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonLazyImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLazyImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
