// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonTextStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTextStyle() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetShadowColor();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void UCommonTextStyle::StaticRegisterNativesUCommonTextStyle()
	{
		UClass* Class = UCommonTextStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UCommonTextStyle::execGetColor },
			{ "GetFont", &UCommonTextStyle::execGetFont },
			{ "GetLineHeightPercentage", &UCommonTextStyle::execGetLineHeightPercentage },
			{ "GetMargin", &UCommonTextStyle::execGetMargin },
			{ "GetShadowColor", &UCommonTextStyle::execGetShadowColor },
			{ "GetShadowOffset", &UCommonTextStyle::execGetShadowOffset },
			{ "GetStrikeBrush", &UCommonTextStyle::execGetStrikeBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics
	{
		struct CommonTextStyle_eventGetColor_Parms
		{
			FLinearColor OutColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::NewProp_OutColor = { UE4CodeGen_Private::EPropertyClass::Struct, "OutColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetColor_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::NewProp_OutColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(CommonTextStyle_eventGetColor_Parms), Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics
	{
		struct CommonTextStyle_eventGetFont_Parms
		{
			FSlateFontInfo OutFont;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::NewProp_OutFont = { UE4CodeGen_Private::EPropertyClass::Struct, "OutFont", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetFont_Parms, OutFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::NewProp_OutFont,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetFont", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonTextStyle_eventGetFont_Parms), Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics
	{
		struct CommonTextStyle_eventGetLineHeightPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetLineHeightPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetLineHeightPercentage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonTextStyle_eventGetLineHeightPercentage_Parms), Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics
	{
		struct CommonTextStyle_eventGetMargin_Parms
		{
			FMargin OutMargin;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMargin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::NewProp_OutMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "OutMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetMargin_Parms, OutMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::NewProp_OutMargin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetMargin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonTextStyle_eventGetMargin_Parms), Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics
	{
		struct CommonTextStyle_eventGetShadowColor_Parms
		{
			FLinearColor OutColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::NewProp_OutColor = { UE4CodeGen_Private::EPropertyClass::Struct, "OutColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetShadowColor_Parms, OutColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::NewProp_OutColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetShadowColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(CommonTextStyle_eventGetShadowColor_Parms), Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetShadowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetShadowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics
	{
		struct CommonTextStyle_eventGetShadowOffset_Parms
		{
			FVector2D OutShadowOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutShadowOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::NewProp_OutShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "OutShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetShadowOffset_Parms, OutShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::NewProp_OutShadowOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(CommonTextStyle_eventGetShadowOffset_Parms), Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics
	{
		struct CommonTextStyle_eventGetStrikeBrush_Parms
		{
			FSlateBrush OutStrikeBrush;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutStrikeBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::NewProp_OutStrikeBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "OutStrikeBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonTextStyle_eventGetStrikeBrush_Parms, OutStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::NewProp_OutStrikeBrush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextStyle, "GetStrikeBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonTextStyle_eventGetStrikeBrush_Parms), Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister()
	{
		return UCommonTextStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTextStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrikeBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesDropShadow_MetaData[];
#endif
		static void NewProp_bUsesDropShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesDropShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTextStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonTextStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonTextStyle_GetColor, "GetColor" }, // 1446017617
		{ &Z_Construct_UFunction_UCommonTextStyle_GetFont, "GetFont" }, // 3287732247
		{ &Z_Construct_UFunction_UCommonTextStyle_GetLineHeightPercentage, "GetLineHeightPercentage" }, // 2205182309
		{ &Z_Construct_UFunction_UCommonTextStyle_GetMargin, "GetMargin" }, // 3587381973
		{ &Z_Construct_UFunction_UCommonTextStyle_GetShadowColor, "GetShadowColor" }, // 1024036361
		{ &Z_Construct_UFunction_UCommonTextStyle_GetShadowOffset, "GetShadowOffset" }, // 2038834346
		{ &Z_Construct_UFunction_UCommonTextStyle_GetStrikeBrush, "GetStrikeBrush" }, // 2315772568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonTextStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "LineHeightPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush = { UE4CodeGen_Private::EPropertyClass::Struct, "StrikeBrush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, StrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin = { UE4CodeGen_Private::EPropertyClass::Struct, "Margin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	void Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_SetBit(void* Obj)
	{
		((UCommonTextStyle*)Obj)->bUsesDropShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesDropShadow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonTextStyle), &Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextStyle" },
		{ "ModuleRelativePath", "Public/CommonTextStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextStyle, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTextStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_LineHeightPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_StrikeBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_bUsesDropShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextStyle_Statics::NewProp_Font,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTextStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTextStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonTextStyle_Statics::ClassParams = {
		&UCommonTextStyle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonTextStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTextStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonTextStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTextStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonTextStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonTextStyle, 3217915758);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonTextStyle(Z_Construct_UClass_UCommonTextStyle, &UCommonTextStyle::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonTextStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTextStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
