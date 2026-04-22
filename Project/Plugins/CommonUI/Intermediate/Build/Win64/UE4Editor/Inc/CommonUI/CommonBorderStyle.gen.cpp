// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonBorderStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBorderStyle() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorderStyle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	void UCommonBorderStyle::StaticRegisterNativesUCommonBorderStyle()
	{
		UClass* Class = UCommonBorderStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackgroundBrush", &UCommonBorderStyle::execGetBackgroundBrush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics
	{
		struct CommonBorderStyle_eventGetBackgroundBrush_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::NewProp_Brush = { UE4CodeGen_Private::EPropertyClass::Struct, "Brush", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CommonBorderStyle_eventGetBackgroundBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonBorderStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBorderStyle, "GetBackgroundBrush", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(CommonBorderStyle_eventGetBackgroundBrush_Parms), Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonBorderStyle_NoRegister()
	{
		return UCommonBorderStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBorderStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Background;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBorderStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonBorderStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBorderStyle_GetBackgroundBrush, "GetBackgroundBrush" }, // 239233074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorderStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonBorderStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonBorderStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonBorderStyle" },
		{ "ModuleRelativePath", "Public/CommonBorderStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background = { UE4CodeGen_Private::EPropertyClass::Struct, "Background", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonBorderStyle, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBorderStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBorderStyle_Statics::NewProp_Background,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBorderStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBorderStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonBorderStyle_Statics::ClassParams = {
		&UCommonBorderStyle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonBorderStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonBorderStyle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonBorderStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonBorderStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBorderStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonBorderStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonBorderStyle, 3800634763);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonBorderStyle(Z_Construct_UClass_UCommonBorderStyle, &UCommonBorderStyle::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonBorderStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBorderStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
