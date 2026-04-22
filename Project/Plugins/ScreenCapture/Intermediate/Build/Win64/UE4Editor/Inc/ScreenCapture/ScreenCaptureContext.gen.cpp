// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenCapture/Public/ScreenCaptureContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenCaptureContext() {}
// Cross Module References
	SCREENCAPTURE_API UClass* Z_Construct_UClass_UScreenCaptureContext_NoRegister();
	SCREENCAPTURE_API UClass* Z_Construct_UClass_UScreenCaptureContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ScreenCapture();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_IsRecording();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_RemoveFile();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_StartCapture();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_StopCapture();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot();
	SCREENCAPTURE_API UFunction* Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SCREENCAPTURE_API UFunction* Z_Construct_UDelegateFunction_ScreenCapture_ScreenshotCapturedDelegate__DelegateSignature();
	SCREENCAPTURE_API UFunction* Z_Construct_UDelegateFunction_ScreenCapture_VideoSavedToAlbumDelegate__DelegateSignature();
	SCREENCAPTURE_API UFunction* Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureInterruptedDelegate__DelegateSignature();
	SCREENCAPTURE_API UFunction* Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature();
// End Cross Module References
	void UScreenCaptureContext::StaticRegisterNativesUScreenCaptureContext()
	{
		UClass* Class = UScreenCaptureContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateScreenCaptureContext", &UScreenCaptureContext::execCreateScreenCaptureContext },
			{ "IsRecording", &UScreenCaptureContext::execIsRecording },
			{ "RemoveFile", &UScreenCaptureContext::execRemoveFile },
			{ "SaveToAlbum", &UScreenCaptureContext::execSaveToAlbum },
			{ "StartCapture", &UScreenCaptureContext::execStartCapture },
			{ "StopCapture", &UScreenCaptureContext::execStopCapture },
			{ "TakeScreenshot", &UScreenCaptureContext::execTakeScreenshot },
			{ "ToggleMicrophoneRecording", &UScreenCaptureContext::execToggleMicrophoneRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics
	{
		struct ScreenCaptureContext_eventCreateScreenCaptureContext_Parms
		{
			UObject* WorldContextObject;
			UScreenCaptureContext* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ScreenCaptureContext_eventCreateScreenCaptureContext_Parms, ReturnValue), Z_Construct_UClass_UScreenCaptureContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScreenCaptureContext_eventCreateScreenCaptureContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "CreateScreenCaptureContext", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(ScreenCaptureContext_eventCreateScreenCaptureContext_Parms), Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics
	{
		struct ScreenCaptureContext_eventIsRecording_Parms
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
	void Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventIsRecording_Parms), &Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "IsRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ScreenCaptureContext_eventIsRecording_Parms), Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics
	{
		struct ScreenCaptureContext_eventRemoveFile_Parms
		{
			FString LocalFilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventRemoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventRemoveFile_Parms), &Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_LocalFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_LocalFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "LocalFilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScreenCaptureContext_eventRemoveFile_Parms, LocalFilePath), METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_LocalFilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_LocalFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::NewProp_LocalFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "RemoveFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScreenCaptureContext_eventRemoveFile_Parms), Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_RemoveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_RemoveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics
	{
		struct ScreenCaptureContext_eventSaveToAlbum_Parms
		{
			FString LocalFilePath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventSaveToAlbum_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventSaveToAlbum_Parms), &Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_LocalFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_LocalFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "LocalFilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ScreenCaptureContext_eventSaveToAlbum_Parms, LocalFilePath), METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_LocalFilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_LocalFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::NewProp_LocalFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "SaveToAlbum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScreenCaptureContext_eventSaveToAlbum_Parms), Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics
	{
		struct ScreenCaptureContext_eventStartCapture_Parms
		{
			bool bInRecordAppAudio;
			bool bGeneratePreviewImage;
		};
		static void NewProp_bGeneratePreviewImage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratePreviewImage;
		static void NewProp_bInRecordAppAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInRecordAppAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bGeneratePreviewImage_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventStartCapture_Parms*)Obj)->bGeneratePreviewImage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bGeneratePreviewImage = { UE4CodeGen_Private::EPropertyClass::Bool, "bGeneratePreviewImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventStartCapture_Parms), &Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bGeneratePreviewImage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bInRecordAppAudio_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventStartCapture_Parms*)Obj)->bInRecordAppAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bInRecordAppAudio = { UE4CodeGen_Private::EPropertyClass::Bool, "bInRecordAppAudio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventStartCapture_Parms), &Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bInRecordAppAudio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bGeneratePreviewImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::NewProp_bInRecordAppAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "StartCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScreenCaptureContext_eventStartCapture_Parms), Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics
	{
		struct ScreenCaptureContext_eventStopCapture_Parms
		{
			bool bIsCaptureInterrupted;
		};
		static void NewProp_bIsCaptureInterrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCaptureInterrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::NewProp_bIsCaptureInterrupted_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventStopCapture_Parms*)Obj)->bIsCaptureInterrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::NewProp_bIsCaptureInterrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCaptureInterrupted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventStopCapture_Parms), &Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::NewProp_bIsCaptureInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::NewProp_bIsCaptureInterrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "StopCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScreenCaptureContext_eventStopCapture_Parms), Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_StopCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_StopCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "TakeScreenshot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics
	{
		struct ScreenCaptureContext_eventToggleMicrophoneRecording_Parms
		{
			bool bEnableMicrophone;
		};
		static void NewProp_bEnableMicrophone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMicrophone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::NewProp_bEnableMicrophone_SetBit(void* Obj)
	{
		((ScreenCaptureContext_eventToggleMicrophoneRecording_Parms*)Obj)->bEnableMicrophone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::NewProp_bEnableMicrophone = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMicrophone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ScreenCaptureContext_eventToggleMicrophoneRecording_Parms), &Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::NewProp_bEnableMicrophone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::NewProp_bEnableMicrophone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenCaptureContext, "ToggleMicrophoneRecording", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ScreenCaptureContext_eventToggleMicrophoneRecording_Parms), Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenCaptureContext_NoRegister()
	{
		return UScreenCaptureContext::StaticClass();
	}
	struct Z_Construct_UClass_UScreenCaptureContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScreenshotCapturedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScreenshotCapturedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVideoSavedToAlbumDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVideoSavedToAlbumDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCaptureInterruptedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureInterruptedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCaptureFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureFinishedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenCaptureContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenCaptureContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenCaptureContext_CreateScreenCaptureContext, "CreateScreenCaptureContext" }, // 3422060266
		{ &Z_Construct_UFunction_UScreenCaptureContext_IsRecording, "IsRecording" }, // 596615546
		{ &Z_Construct_UFunction_UScreenCaptureContext_RemoveFile, "RemoveFile" }, // 2284213385
		{ &Z_Construct_UFunction_UScreenCaptureContext_SaveToAlbum, "SaveToAlbum" }, // 2340542179
		{ &Z_Construct_UFunction_UScreenCaptureContext_StartCapture, "StartCapture" }, // 69965068
		{ &Z_Construct_UFunction_UScreenCaptureContext_StopCapture, "StopCapture" }, // 2888380336
		{ &Z_Construct_UFunction_UScreenCaptureContext_TakeScreenshot, "TakeScreenshot" }, // 1656902720
		{ &Z_Construct_UFunction_UScreenCaptureContext_ToggleMicrophoneRecording, "ToggleMicrophoneRecording" }, // 120157883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCaptureContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScreenCaptureContext.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_PreviewImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScreenCaptureContext" },
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_PreviewImage = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UScreenCaptureContext, PreviewImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_PreviewImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_PreviewImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnScreenshotCapturedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScreenCaptureContext" },
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnScreenshotCapturedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnScreenshotCapturedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UScreenCaptureContext, OnScreenshotCapturedDelegate), Z_Construct_UDelegateFunction_ScreenCapture_ScreenshotCapturedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnScreenshotCapturedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnScreenshotCapturedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnVideoSavedToAlbumDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScreenCaptureContext" },
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnVideoSavedToAlbumDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnVideoSavedToAlbumDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UScreenCaptureContext, OnVideoSavedToAlbumDelegate), Z_Construct_UDelegateFunction_ScreenCapture_VideoSavedToAlbumDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnVideoSavedToAlbumDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnVideoSavedToAlbumDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureInterruptedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScreenCaptureContext" },
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureInterruptedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCaptureInterruptedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UScreenCaptureContext, OnCaptureInterruptedDelegate), Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureInterruptedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureInterruptedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureInterruptedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureFinishedDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ScreenCaptureContext" },
		{ "ModuleRelativePath", "Public/ScreenCaptureContext.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureFinishedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCaptureFinishedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UScreenCaptureContext, OnCaptureFinishedDelegate), Z_Construct_UDelegateFunction_ScreenCapture_ScreenCaptureFinishedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureFinishedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureFinishedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenCaptureContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_PreviewImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnScreenshotCapturedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnVideoSavedToAlbumDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureInterruptedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenCaptureContext_Statics::NewProp_OnCaptureFinishedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenCaptureContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenCaptureContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenCaptureContext_Statics::ClassParams = {
		&UScreenCaptureContext::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UScreenCaptureContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScreenCaptureContext_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScreenCaptureContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenCaptureContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenCaptureContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenCaptureContext, 1332273629);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenCaptureContext(Z_Construct_UClass_UScreenCaptureContext, &UScreenCaptureContext::StaticClass, TEXT("/Script/ScreenCapture"), TEXT("UScreenCaptureContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenCaptureContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
