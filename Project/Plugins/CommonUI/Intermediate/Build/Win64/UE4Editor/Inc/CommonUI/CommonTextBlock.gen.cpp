// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextBlock_ResetScrollState();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextBlock_SetStyle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextBlock_SetTextCase();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextScrollStyle_NoRegister();
// End Cross Module References
	void UCommonTextBlock::StaticRegisterNativesUCommonTextBlock()
	{
		UClass* Class = UCommonTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetScrollState", &UCommonTextBlock::execResetScrollState },
			{ "SetStyle", &UCommonTextBlock::execSetStyle },
			{ "SetTextCase", &UCommonTextBlock::execSetTextCase },
			{ "SetWrapTextWidth", &UCommonTextBlock::execSetWrapTextWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, "ResetScrollState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_ResetScrollState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_ResetScrollState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics
	{
		struct CommonTextBlock_eventSetStyle_Parms
		{
			TSubclassOf<UCommonTextStyle>  InStyle;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::NewProp_InStyle = { UE4CodeGen_Private::EPropertyClass::Class, "InStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetStyle_Parms, InStyle), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, "SetStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTextBlock_eventSetStyle_Parms), Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics
	{
		struct CommonTextBlock_eventSetTextCase_Parms
		{
			bool bUseAllCaps;
		};
		static void NewProp_bUseAllCaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAllCaps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps_SetBit(void* Obj)
	{
		((CommonTextBlock_eventSetTextCase_Parms*)Obj)->bUseAllCaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAllCaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonTextBlock_eventSetTextCase_Parms), &Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::NewProp_bUseAllCaps,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, "SetTextCase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTextBlock_eventSetTextCase_Parms), Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetTextCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetTextCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics
	{
		struct CommonTextBlock_eventSetWrapTextWidth_Parms
		{
			int32 InWrapTextAt;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InWrapTextAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::NewProp_InWrapTextAt = { UE4CodeGen_Private::EPropertyClass::Int, "InWrapTextAt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonTextBlock_eventSetWrapTextWidth_Parms, InWrapTextAt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::NewProp_InWrapTextAt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonTextBlock, "SetWrapTextWidth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonTextBlock_eventSetWrapTextWidth_Parms), Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister()
	{
		return UCommonTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCollapseWithEmptyText_MetaData[];
#endif
		static void NewProp_bAutoCollapseWithEmptyText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCollapseWithEmptyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayAllCaps_MetaData[];
#endif
		static void NewProp_bDisplayAllCaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayAllCaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScrollStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Style;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonTextBlock_ResetScrollState, "ResetScrollState" }, // 2434309550
		{ &Z_Construct_UFunction_UCommonTextBlock_SetStyle, "SetStyle" }, // 3812603894
		{ &Z_Construct_UFunction_UCommonTextBlock_SetTextCase, "SetTextCase" }, // 1549066783
		{ &Z_Construct_UFunction_UCommonTextBlock_SetWrapTextWidth, "SetWrapTextWidth" }, // 2819132371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextBlock" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_SetBit(void* Obj)
	{
		((UCommonTextBlock*)Obj)->bAutoCollapseWithEmptyText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoCollapseWithEmptyText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonTextBlock), &Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextBlock" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit(void* Obj)
	{
		((UCommonTextBlock*)Obj)->bDisplayAllCaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayAllCaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonTextBlock), &Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextBlock" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle = { UE4CodeGen_Private::EPropertyClass::Class, "ScrollStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextBlock, ScrollStyle), Z_Construct_UClass_UCommonTextScrollStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonTextBlock" },
		{ "ModuleRelativePath", "Public/CommonTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Class, "Style", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000005, 1, nullptr, STRUCT_OFFSET(UCommonTextBlock, Style), Z_Construct_UClass_UCommonTextStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bAutoCollapseWithEmptyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_bDisplayAllCaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_ScrollStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonTextBlock_Statics::NewProp_Style,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonTextBlock_Statics::ClassParams = {
		&UCommonTextBlock::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A2u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonTextBlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::PropPointers),
		"CommonUI",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonTextBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonTextBlock, 3864984312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonTextBlock(Z_Construct_UClass_UCommonTextBlock, &UCommonTextBlock::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
