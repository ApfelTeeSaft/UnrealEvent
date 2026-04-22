// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crashlytics/Public/CrashlyticsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrashlyticsBlueprintLibrary() {}
// Cross Module References
	CRASHLYTICS_API UClass* Z_Construct_UClass_UCrashlyticsBlueprintLibrary_NoRegister();
	CRASHLYTICS_API UClass* Z_Construct_UClass_UCrashlyticsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Crashlytics();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier();
	CRASHLYTICS_API UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName();
// End Cross Module References
	void UCrashlyticsBlueprintLibrary::StaticRegisterNativesUCrashlyticsBlueprintLibrary()
	{
		UClass* Class = UCrashlyticsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogException", &UCrashlyticsBlueprintLibrary::execLogException },
			{ "LogMessage", &UCrashlyticsBlueprintLibrary::execLogMessage },
			{ "SetBooleanKey", &UCrashlyticsBlueprintLibrary::execSetBooleanKey },
			{ "SetFloatKey", &UCrashlyticsBlueprintLibrary::execSetFloatKey },
			{ "SetIntegerKey", &UCrashlyticsBlueprintLibrary::execSetIntegerKey },
			{ "SetStringKey", &UCrashlyticsBlueprintLibrary::execSetStringKey },
			{ "SetUserEmail", &UCrashlyticsBlueprintLibrary::execSetUserEmail },
			{ "SetUserIdentifier", &UCrashlyticsBlueprintLibrary::execSetUserIdentifier },
			{ "SetUserName", &UCrashlyticsBlueprintLibrary::execSetUserName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventLogException_Parms
		{
			FString MESSAGE;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MESSAGE_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MESSAGE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::NewProp_MESSAGE_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::NewProp_MESSAGE = { UE4CodeGen_Private::EPropertyClass::Str, "MESSAGE", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventLogException_Parms, MESSAGE), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::NewProp_MESSAGE_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::NewProp_MESSAGE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::NewProp_MESSAGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "LogException", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventLogException_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventLogMessage_Parms
		{
			FString MESSAGE;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MESSAGE_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MESSAGE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::NewProp_MESSAGE_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::NewProp_MESSAGE = { UE4CodeGen_Private::EPropertyClass::Str, "MESSAGE", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventLogMessage_Parms, MESSAGE), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::NewProp_MESSAGE_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::NewProp_MESSAGE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::NewProp_MESSAGE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "LogMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventLogMessage_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetBooleanKey_Parms
		{
			FString Key;
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((CrashlyticsBlueprintLibrary_eventSetBooleanKey_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CrashlyticsBlueprintLibrary_eventSetBooleanKey_Parms), &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetBooleanKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetBooleanKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetBooleanKey_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetFloatKey_Parms
		{
			FString Key;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetFloatKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetFloatKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetFloatKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetFloatKey_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetIntegerKey_Parms
		{
			FString Key;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetIntegerKey_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetIntegerKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetIntegerKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetIntegerKey_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetStringKey_Parms
		{
			FString Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetStringKey_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetStringKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetStringKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetStringKey_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetUserEmail_Parms
		{
			FString Email;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Email;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::NewProp_Email = { UE4CodeGen_Private::EPropertyClass::Str, "Email", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetUserEmail_Parms, Email), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::NewProp_Email_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::NewProp_Email_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::NewProp_Email,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetUserEmail", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetUserEmail_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetUserIdentifier_Parms
		{
			FString ID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Str, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetUserIdentifier_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetUserIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetUserIdentifier_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics
	{
		struct CrashlyticsBlueprintLibrary_eventSetUserName_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CrashlyticsBlueprintLibrary_eventSetUserName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrashlyticsBlueprintLibrary, "SetUserName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CrashlyticsBlueprintLibrary_eventSetUserName_Parms), Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrashlyticsBlueprintLibrary_NoRegister()
	{
		return UCrashlyticsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Crashlytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogException, "LogException" }, // 1751992397
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_LogMessage, "LogMessage" }, // 3704396741
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetBooleanKey, "SetBooleanKey" }, // 1492332872
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetFloatKey, "SetFloatKey" }, // 3141011770
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetIntegerKey, "SetIntegerKey" }, // 1775837024
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetStringKey, "SetStringKey" }, // 3780749454
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserEmail, "SetUserEmail" }, // 1288159673
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserIdentifier, "SetUserIdentifier" }, // 1369415652
		{ &Z_Construct_UFunction_UCrashlyticsBlueprintLibrary_SetUserName, "SetUserName" }, // 1465649558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CrashlyticsBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrashlyticsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrashlyticsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::ClassParams = {
		&UCrashlyticsBlueprintLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrashlyticsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrashlyticsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrashlyticsBlueprintLibrary, 803333698);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrashlyticsBlueprintLibrary(Z_Construct_UClass_UCrashlyticsBlueprintLibrary, &UCrashlyticsBlueprintLibrary::StaticClass, TEXT("/Script/Crashlytics"), TEXT("UCrashlyticsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrashlyticsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
