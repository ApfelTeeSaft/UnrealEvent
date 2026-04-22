// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonBorder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBorder() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonBorder_SetStyle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	void UCommonBorder::StaticRegisterNativesUCommonBorder()
	{
		UClass* Class = UCommonBorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStyle", &UCommonBorder::execSetStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonBorder_SetStyle_Statics
	{
		struct CommonBorder_eventSetStyle_Parms
		{
			TSubclassOf<UCommonBorderStyle>  InStyle;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::NewProp_InStyle = { UE4CodeGen_Private::EPropertyClass::Class, "InStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CommonBorder_eventSetStyle_Parms, InStyle), Z_Construct_UClass_UCommonBorderStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBorder, "SetStyle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonBorder_eventSetStyle_Parms), Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonBorder_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonBorder_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonBorder_NoRegister()
	{
		return UCommonBorder::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinimumPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReducePaddingBySafezone_MetaData[];
#endif
		static void NewProp_bReducePaddingBySafezone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReducePaddingBySafezone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Style;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonBorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBorder_SetStyle, "SetStyle" }, // 1728272063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonBorder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonBorder" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "MinimumPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonBorder, MinimumPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonBorder" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
	void Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_SetBit(void* Obj)
	{
		((UCommonBorder*)Obj)->bReducePaddingBySafezone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone = { UE4CodeGen_Private::EPropertyClass::Bool, "bReducePaddingBySafezone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonBorder), &Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonBorder" },
		{ "ModuleRelativePath", "Public/CommonBorder.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style = { UE4CodeGen_Private::EPropertyClass::Class, "Style", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonBorder, Style), Z_Construct_UClass_UCommonBorderStyle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_MinimumPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_bReducePaddingBySafezone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorder_Statics::NewProp_Style,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBorder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonBorder_Statics::ClassParams = {
		&UCommonBorder::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A2u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonBorder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::PropPointers),
		"CommonUI",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonBorder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonBorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBorder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonBorder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonBorder, 1366419437);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonBorder(Z_Construct_UClass_UCommonBorder, &UCommonBorder::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonBorder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBorder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
