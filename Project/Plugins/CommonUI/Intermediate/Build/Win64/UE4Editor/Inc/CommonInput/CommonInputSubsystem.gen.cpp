// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/CommonInputSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputSubsystem() {}
// Cross Module References
	COMMONINPUT_API UFunction* Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSubsystem();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonGamepadType();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType();
	COMMONINPUT_API UFunction* Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics
	{
		struct CommonInputSubsystem_eventInputMethodChangedDelegate_Parms
		{
			ECommonInputType bNewInputType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bNewInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bNewInputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "bNewInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventInputMethodChangedDelegate_Parms, bNewInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bNewInputType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "InputMethodChangedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonInputSubsystem_eventInputMethodChangedDelegate_Parms), Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCommonInputSubsystem::StaticRegisterNativesUCommonInputSubsystem()
	{
		UClass* Class = UCommonInputSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentGamepadType", &UCommonInputSubsystem::execGetCurrentGamepadType },
			{ "GetCurrentInputType", &UCommonInputSubsystem::execGetCurrentInputType },
			{ "GetDefaultInputType", &UCommonInputSubsystem::execGetDefaultInputType },
			{ "IsUsingPointerInput", &UCommonInputSubsystem::execIsUsingPointerInput },
			{ "SetCurrentInputType", &UCommonInputSubsystem::execSetCurrentInputType },
			{ "SetGamepadInputType", &UCommonInputSubsystem::execSetGamepadInputType },
			{ "ShouldShowInputKeys", &UCommonInputSubsystem::execShouldShowInputKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics
	{
		struct CommonInputSubsystem_eventGetCurrentGamepadType_Parms
		{
			ECommonGamepadType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventGetCurrentGamepadType_Parms, ReturnValue), Z_Construct_UEnum_CommonInput_ECommonGamepadType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "GetCurrentGamepadType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputSubsystem_eventGetCurrentGamepadType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics
	{
		struct CommonInputSubsystem_eventGetCurrentInputType_Parms
		{
			ECommonInputType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventGetCurrentInputType_Parms, ReturnValue), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "GetCurrentInputType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputSubsystem_eventGetCurrentInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics
	{
		struct CommonInputSubsystem_eventGetDefaultInputType_Parms
		{
			ECommonInputType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventGetDefaultInputType_Parms, ReturnValue), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "GetDefaultInputType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputSubsystem_eventGetDefaultInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics
	{
		struct CommonInputSubsystem_eventIsUsingPointerInput_Parms
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
	void Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputSubsystem_eventIsUsingPointerInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputSubsystem_eventIsUsingPointerInput_Parms), &Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "IsUsingPointerInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputSubsystem_eventIsUsingPointerInput_Parms), Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics
	{
		struct CommonInputSubsystem_eventSetCurrentInputType_Parms
		{
			ECommonInputType NewInputType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewInputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "NewInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventSetCurrentInputType_Parms, NewInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::NewProp_NewInputType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "SetCurrentInputType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonInputSubsystem_eventSetCurrentInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics
	{
		struct CommonInputSubsystem_eventSetGamepadInputType_Parms
		{
			ECommonGamepadType InGamepadInputType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InGamepadInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InGamepadInputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "InGamepadInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonInputSubsystem_eventSetGamepadInputType_Parms, InGamepadInputType), Z_Construct_UEnum_CommonInput_ECommonGamepadType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::NewProp_InGamepadInputType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "SetGamepadInputType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonInputSubsystem_eventSetGamepadInputType_Parms), Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics
	{
		struct CommonInputSubsystem_eventShouldShowInputKeys_Parms
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
	void Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonInputSubsystem_eventShouldShowInputKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonInputSubsystem_eventShouldShowInputKeys_Parms), &Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputSubsystem, "ShouldShowInputKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonInputSubsystem_eventShouldShowInputKeys_Parms), Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonInputSubsystem_NoRegister()
	{
		return UCommonInputSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadSimulatedClick_MetaData[];
#endif
		static void NewProp_bIsGamepadSimulatedClick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadSimulatedClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInputLocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurrentInputLocks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentInputLocks_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentInputLocks_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentInputLocks_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GamepadInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GamepadInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputMethodChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputMethodChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonInputSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentGamepadType, "GetCurrentGamepadType" }, // 2768203321
		{ &Z_Construct_UFunction_UCommonInputSubsystem_GetCurrentInputType, "GetCurrentInputType" }, // 126022969
		{ &Z_Construct_UFunction_UCommonInputSubsystem_GetDefaultInputType, "GetDefaultInputType" }, // 2779629666
		{ &Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature, "InputMethodChangedDelegate__DelegateSignature" }, // 109270090
		{ &Z_Construct_UFunction_UCommonInputSubsystem_IsUsingPointerInput, "IsUsingPointerInput" }, // 2213152074
		{ &Z_Construct_UFunction_UCommonInputSubsystem_SetCurrentInputType, "SetCurrentInputType" }, // 2950642572
		{ &Z_Construct_UFunction_UCommonInputSubsystem_SetGamepadInputType, "SetGamepadInputType" }, // 2334853444
		{ &Z_Construct_UFunction_UCommonInputSubsystem_ShouldShowInputKeys, "ShouldShowInputKeys" }, // 2829471426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonInputSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_SetBit(void* Obj)
	{
		((UCommonInputSubsystem*)Obj)->bIsGamepadSimulatedClick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsGamepadSimulatedClick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonInputSubsystem), &Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks = { UE4CodeGen_Private::EPropertyClass::Map, "CurrentInputLocks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, CurrentInputLocks), METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "CurrentInputLocks_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentInputLocks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "GamepadInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, GamepadInputType), Z_Construct_UEnum_CommonInput_ECommonGamepadType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, CurrentInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType = { UE4CodeGen_Private::EPropertyClass::Enum, "LastInputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, LastInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputSubsystem" },
		{ "ModuleRelativePath", "Public/CommonInputSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInputMethodChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonInputSubsystem, OnInputMethodChanged), Z_Construct_UDelegateFunction_UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_bIsGamepadSimulatedClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputLocks_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_GamepadInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_CurrentInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_LastInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputSubsystem_Statics::NewProp_OnInputMethodChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputSubsystem_Statics::ClassParams = {
		&UCommonInputSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonInputSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonInputSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonInputSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonInputSubsystem, 2570431291);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonInputSubsystem(Z_Construct_UClass_UCommonInputSubsystem, &UCommonInputSubsystem::StaticClass, TEXT("/Script/CommonInput"), TEXT("UCommonInputSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
