// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonUISubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUISubsystem() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUISubsystem();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUISubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonGamepadType();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonUISubsystem_GetInputManager();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputManager_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics
	{
		struct CommonUISubsystem_eventInputMethodChangedDelegate_Parms
		{
			bool bUsingGamepad;
		};
		static void NewProp_bUsingGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingGamepad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bUsingGamepad_SetBit(void* Obj)
	{
		((CommonUISubsystem_eventInputMethodChangedDelegate_Parms*)Obj)->bUsingGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bUsingGamepad = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingGamepad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonUISubsystem_eventInputMethodChangedDelegate_Parms), &Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bUsingGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::NewProp_bUsingGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUISubsystem, "InputMethodChangedDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonUISubsystem_eventInputMethodChangedDelegate_Parms), Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics
	{
		struct CommonUISubsystem_eventInputSuspensionChanged_Parms
		{
			bool bInputSuspended;
		};
		static void NewProp_bInputSuspended_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputSuspended;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::NewProp_bInputSuspended_SetBit(void* Obj)
	{
		((CommonUISubsystem_eventInputSuspensionChanged_Parms*)Obj)->bInputSuspended = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::NewProp_bInputSuspended = { UE4CodeGen_Private::EPropertyClass::Bool, "bInputSuspended", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonUISubsystem_eventInputSuspensionChanged_Parms), &Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::NewProp_bInputSuspended_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::NewProp_bInputSuspended,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUISubsystem, "InputSuspensionChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonUISubsystem_eventInputSuspensionChanged_Parms), Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCommonUISubsystem::StaticRegisterNativesUCommonUISubsystem()
	{
		UClass* Class = UCommonUISubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputActionButtonIcon", &UCommonUISubsystem::execGetInputActionButtonIcon },
			{ "GetInputManager", &UCommonUISubsystem::execGetInputManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics
	{
		struct CommonUISubsystem_eventGetInputActionButtonIcon_Parms
		{
			FDataTableRowHandle InputActionRowHandle;
			ECommonInputType InputType;
			ECommonGamepadType GamepadType;
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GamepadType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GamepadType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionRowHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionRowHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonUISubsystem_eventGetInputActionButtonIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_GamepadType = { UE4CodeGen_Private::EPropertyClass::Enum, "GamepadType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonUISubsystem_eventGetInputActionButtonIcon_Parms, GamepadType), Z_Construct_UEnum_CommonInput_ECommonGamepadType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_GamepadType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputType = { UE4CodeGen_Private::EPropertyClass::Enum, "InputType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonUISubsystem_eventGetInputActionButtonIcon_Parms, InputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionRowHandle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonUISubsystem_eventGetInputActionButtonIcon_Parms, InputActionRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_GamepadType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_GamepadType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::NewProp_InputActionRowHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUISubsystem, "GetInputActionButtonIcon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonUISubsystem_eventGetInputActionButtonIcon_Parms), Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics
	{
		struct CommonUISubsystem_eventGetInputManager_Parms
		{
			UCommonInputManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonUISubsystem_eventGetInputManager_Parms, ReturnValue), Z_Construct_UClass_UCommonInputManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUISubsystem, "GetInputManager", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonUISubsystem_eventGetInputManager_Parms), Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUISubsystem_GetInputManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonUISubsystem_GetInputManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonUISubsystem_NoRegister()
	{
		return UCommonUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonInputManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonInputManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputSuspensionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputSuspensionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputMethodChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputMethodChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUISubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUISubsystem_GetInputActionButtonIcon, "GetInputActionButtonIcon" }, // 2665986010
		{ &Z_Construct_UFunction_UCommonUISubsystem_GetInputManager, "GetInputManager" }, // 2522049863
		{ &Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature, "InputMethodChangedDelegate__DelegateSignature" }, // 754480484
		{ &Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature, "InputSuspensionChanged__DelegateSignature" }, // 4102445757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUISubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_CommonInputManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUISubsystem" },
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_CommonInputManager = { UE4CodeGen_Private::EPropertyClass::Object, "CommonInputManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002005, 1, nullptr, STRUCT_OFFSET(UCommonUISubsystem, CommonInputManager), Z_Construct_UClass_UCommonInputManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_CommonInputManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_CommonInputManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputSuspensionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUISubsystem" },
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputSuspensionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInputSuspensionChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonUISubsystem, OnInputSuspensionChanged), Z_Construct_UDelegateFunction_UCommonUISubsystem_InputSuspensionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputSuspensionChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputSuspensionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputMethodChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUISubsystem" },
		{ "ModuleRelativePath", "Public/CommonUISubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputMethodChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInputMethodChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonUISubsystem, OnInputMethodChanged), Z_Construct_UDelegateFunction_UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputMethodChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputMethodChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUISubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_CommonInputManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputSuspensionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISubsystem_Statics::NewProp_OnInputMethodChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUISubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonUISubsystem_Statics::ClassParams = {
		&UCommonUISubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonUISubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonUISubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUISubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUISubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonUISubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonUISubsystem, 1694189625);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonUISubsystem(Z_Construct_UClass_UCommonUISubsystem, &UCommonUISubsystem::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonUISubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUISubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
