// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonActionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActionWidget() {}
// Cross Module References
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonActionWidget_GetDisplayText();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonActionWidget_GetIcon();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonActionWidget_IsHeldAction();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonActionWidget_SetInputAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics
	{
		struct CommonActionWidget_eventOnInputMethodChanged_Parms
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
	void Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad_SetBit(void* Obj)
	{
		((CommonActionWidget_eventOnInputMethodChanged_Parms*)Obj)->bUsingGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingGamepad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonActionWidget_eventOnInputMethodChanged_Parms), &Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::NewProp_bUsingGamepad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, "OnInputMethodChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(CommonActionWidget_eventOnInputMethodChanged_Parms), Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCommonActionWidget::StaticRegisterNativesUCommonActionWidget()
	{
		UClass* Class = UCommonActionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayText", &UCommonActionWidget::execGetDisplayText },
			{ "GetIcon", &UCommonActionWidget::execGetIcon },
			{ "IsHeldAction", &UCommonActionWidget::execIsHeldAction },
			{ "SetIconRimBrush", &UCommonActionWidget::execSetIconRimBrush },
			{ "SetInputAction", &UCommonActionWidget::execSetInputAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics
	{
		struct CommonActionWidget_eventGetDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonActionWidget_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, "GetDisplayText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonActionWidget_eventGetDisplayText_Parms), Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics
	{
		struct CommonActionWidget_eventGetIcon_Parms
		{
			FSlateBrush ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonActionWidget_eventGetIcon_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, "GetIcon", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonActionWidget_eventGetIcon_Parms), Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_GetIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_GetIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics
	{
		struct CommonActionWidget_eventIsHeldAction_Parms
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
	void Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonActionWidget_eventIsHeldAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonActionWidget_eventIsHeldAction_Parms), &Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, "IsHeldAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonActionWidget_eventIsHeldAction_Parms), Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_IsHeldAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_IsHeldAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics
	{
		struct CommonActionWidget_eventSetIconRimBrush_Parms
		{
			FSlateBrush InIconRimBrush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InIconRimBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::NewProp_InIconRimBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "InIconRimBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonActionWidget_eventSetIconRimBrush_Parms, InIconRimBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::NewProp_InIconRimBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, "SetIconRimBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonActionWidget_eventSetIconRimBrush_Parms), Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics
	{
		struct CommonActionWidget_eventSetInputAction_Parms
		{
			FDataTableRowHandle InputActionRow;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::NewProp_InputActionRow = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionRow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonActionWidget_eventSetInputAction_Parms, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::NewProp_InputActionRow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonActionWidget, "SetInputAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonActionWidget_eventSetInputAction_Parms), Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonActionWidget_SetInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonActionWidget_SetInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister()
	{
		return UCommonActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressDynamicMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressDynamicMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconRimBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconRimBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressMaterialParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProgressMaterialParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressMaterialBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressMaterialBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputActionDataRow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputActionDataRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInputMethodChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputMethodChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonActionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonActionWidget_GetDisplayText, "GetDisplayText" }, // 3988240531
		{ &Z_Construct_UFunction_UCommonActionWidget_GetIcon, "GetIcon" }, // 2161570025
		{ &Z_Construct_UFunction_UCommonActionWidget_IsHeldAction, "IsHeldAction" }, // 861440034
		{ &Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature, "OnInputMethodChanged__DelegateSignature" }, // 3940758378
		{ &Z_Construct_UFunction_UCommonActionWidget_SetIconRimBrush, "SetIconRimBrush" }, // 2689486916
		{ &Z_Construct_UFunction_UCommonActionWidget_SetInputAction, "SetInputAction" }, // 415763688
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonActionWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ProgressDynamicMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UCommonActionWidget, ProgressDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "IconRimBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonActionWidget, IconRimBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam = { UE4CodeGen_Private::EPropertyClass::Name, "ProgressMaterialParam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonActionWidget, ProgressMaterialParam), METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "ProgressMaterialBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonActionWidget, ProgressMaterialBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow = { UE4CodeGen_Private::EPropertyClass::Struct, "InputActionDataRow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonActionWidget, InputActionDataRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonActionWidget" },
		{ "ModuleRelativePath", "Public/CommonActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInputMethodChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonActionWidget, OnInputMethodChanged), Z_Construct_UDelegateFunction_UCommonActionWidget_OnInputMethodChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonActionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressDynamicMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_IconRimBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_ProgressMaterialBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_InputActionDataRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonActionWidget_Statics::NewProp_OnInputMethodChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonActionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonActionWidget_Statics::ClassParams = {
		&UCommonActionWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonActionWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActionWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonActionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonActionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonActionWidget, 3482791557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonActionWidget(Z_Construct_UClass_UCommonActionWidget, &UCommonActionWidget::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonActionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
