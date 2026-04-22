// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenCapture/Public/ScreenCaptureFinishedDelegateDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenCaptureFinishedDelegateDelegate() {}
// Cross Module References
	SCREENCAPTURE_API UFunction* Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ScreenCapture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics
	{
		struct _Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms
		{
			bool bSuccess;
			FString LocalFilePath;
			FIntPoint VideoResolution;
			UTexture2D* PreviewImage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewImage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalFilePath;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_PreviewImage = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms, PreviewImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_VideoResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "VideoResolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms, VideoResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_LocalFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_LocalFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "LocalFilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms, LocalFilePath), METADATA_PARAMS(Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_LocalFilePath_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_LocalFilePath_MetaData)) };
	void Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms), &Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_PreviewImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_VideoResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_LocalFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureFinishedDelegateDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ScreenCapture, "ScreenCaptureFinishedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_ScreenCapture_eventScreenCaptureFinishedDelegate_Parms), Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
