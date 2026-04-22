// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonButtonStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButtonStyle() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UCommonButtonStyle::StaticRegisterNativesUCommonButtonStyle()
	{
		UClass* Class = UCommonButtonStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetButtonPadding", &UCommonButtonStyle::execGetButtonPadding },
			{ "GetCustomPadding", &UCommonButtonStyle::execGetCustomPadding },
			{ "GetDisabledBrush", &UCommonButtonStyle::execGetDisabledBrush },
			{ "GetDisabledTextStyle", &UCommonButtonStyle::execGetDisabledTextStyle },
			{ "GetMaterialBrush", &UCommonButtonStyle::execGetMaterialBrush },
			{ "GetNormalBaseBrush", &UCommonButtonStyle::execGetNormalBaseBrush },
			{ "GetNormalHoveredBrush", &UCommonButtonStyle::execGetNormalHoveredBrush },
			{ "GetNormalHoveredTextStyle", &UCommonButtonStyle::execGetNormalHoveredTextStyle },
			{ "GetNormalPressedBrush", &UCommonButtonStyle::execGetNormalPressedBrush },
			{ "GetNormalTextStyle", &UCommonButtonStyle::execGetNormalTextStyle },
			{ "GetSelectedBaseBrush", &UCommonButtonStyle::execGetSelectedBaseBrush },
			{ "GetSelectedHoveredBrush", &UCommonButtonStyle::execGetSelectedHoveredBrush },
			{ "GetSelectedHoveredTextStyle", &UCommonButtonStyle::execGetSelectedHoveredTextStyle },
			{ "GetSelectedPressedBrush", &UCommonButtonStyle::execGetSelectedPressedBrush },
			{ "GetSelectedTextStyle", &UCommonButtonStyle::execGetSelectedTextStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics
	{
		struct CommonButtonStyle_eventGetButtonPadding_Parms
		{
			FMargin OutButtonPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutButtonPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::NewProp_OutButtonPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "OutButtonPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetButtonPadding_Parms, OutButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::NewProp_OutButtonPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetButtonPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetButtonPadding_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics
	{
		struct CommonButtonStyle_eventGetCustomPadding_Parms
		{
			FMargin OutCustomPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCustomPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::NewProp_OutCustomPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "OutCustomPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetCustomPadding_Parms, OutCustomPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::NewProp_OutCustomPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetCustomPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetCustomPadding_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics
	{
		struct CommonButtonStyle_eventGetDisabledBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetDisabledBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetDisabledBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetDisabledBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetDisabledTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetDisabledTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetDisabledTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonStyle_eventGetDisabledTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics
	{
		struct CommonButtonStyle_eventGetMaterialBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetMaterialBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetMaterialBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetMaterialBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics
	{
		struct CommonButtonStyle_eventGetNormalBaseBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalBaseBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetNormalBaseBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetNormalBaseBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics
	{
		struct CommonButtonStyle_eventGetNormalHoveredBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalHoveredBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetNormalHoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetNormalHoveredBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetNormalHoveredTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalHoveredTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetNormalHoveredTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonStyle_eventGetNormalHoveredTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics
	{
		struct CommonButtonStyle_eventGetNormalPressedBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalPressedBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetNormalPressedBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetNormalPressedBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetNormalTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetNormalTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonStyle_eventGetNormalTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics
	{
		struct CommonButtonStyle_eventGetSelectedBaseBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedBaseBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetSelectedBaseBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetSelectedBaseBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics
	{
		struct CommonButtonStyle_eventGetSelectedHoveredBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedHoveredBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetSelectedHoveredBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetSelectedHoveredBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetSelectedHoveredTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedHoveredTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetSelectedHoveredTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonStyle_eventGetSelectedHoveredTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics
	{
		struct CommonButtonStyle_eventGetSelectedPressedBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedPressedBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetSelectedPressedBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonButtonStyle_eventGetSelectedPressedBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetSelectedTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, "GetSelectedTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonStyle_eventGetSelectedTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister()
	{
		return UCommonButtonStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledHoveredSlateSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledHoveredSlateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredSlateSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredSlateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledPressedSlateSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisabledPressedSlateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedSlateSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedPressedSlateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DisabledTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SelectedHoveredTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SelectedTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalHoveredTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NormalHoveredTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalTextStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NormalTextStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedHovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedHovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalPressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalHovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalHovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleMaterialBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleMaterialBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleMaterial_MetaData[];
#endif
		static void NewProp_bSingleMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonButtonStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding, "GetButtonPadding" }, // 1885894177
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding, "GetCustomPadding" }, // 1810234153
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush, "GetDisabledBrush" }, // 3577241037
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle, "GetDisabledTextStyle" }, // 1859563927
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush, "GetMaterialBrush" }, // 734161040
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush, "GetNormalBaseBrush" }, // 2565977154
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush, "GetNormalHoveredBrush" }, // 1410128388
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle, "GetNormalHoveredTextStyle" }, // 934561280
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush, "GetNormalPressedBrush" }, // 3501479467
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle, "GetNormalTextStyle" }, // 3320441627
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush, "GetSelectedBaseBrush" }, // 1694688493
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush, "GetSelectedHoveredBrush" }, // 3615222728
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle, "GetSelectedHoveredTextStyle" }, // 2079498688
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush, "GetSelectedPressedBrush" }, // 3242362648
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle, "GetSelectedTextStyle" }, // 3966059238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonButtonStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledHoveredSlateSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledHoveredSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "DisabledHoveredSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, DisabledHoveredSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledHoveredSlateSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledHoveredSlateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedHoveredSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedHoveredSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "HoveredSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledPressedSlateSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledPressedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "DisabledPressedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, DisabledPressedSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledPressedSlateSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledPressedSlateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedPressedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedPressedSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound = { UE4CodeGen_Private::EPropertyClass::Struct, "PressedSlateSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "DisabledTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, DisabledTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "SelectedHoveredTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedHoveredTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "SelectedTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "NormalHoveredTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalHoveredTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle = { UE4CodeGen_Private::EPropertyClass::Class, "NormalTextStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalTextStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight = { UE4CodeGen_Private::EPropertyClass::Int, "MinHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth = { UE4CodeGen_Private::EPropertyClass::Int, "MinWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, MinWidth), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, CustomPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled = { UE4CodeGen_Private::EPropertyClass::Struct, "Disabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, Disabled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedPressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedPressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedHovered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectedBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedBase), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalPressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalPressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalHovered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalBase), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "SingleMaterialBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SingleMaterialBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonStyle" },
		{ "ModuleRelativePath", "Public/CommonButtonStyle.h" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_SetBit(void* Obj)
	{
		((UCommonButtonStyle*)Obj)->bSingleMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "bSingleMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonButtonStyle), &Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledHoveredSlateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledPressedSlateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonStyle_Statics::ClassParams = {
		&UCommonButtonStyle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonButtonStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonButtonStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonButtonStyle, 616658967);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonButtonStyle(Z_Construct_UClass_UCommonButtonStyle, &UCommonButtonStyle::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonButtonStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
