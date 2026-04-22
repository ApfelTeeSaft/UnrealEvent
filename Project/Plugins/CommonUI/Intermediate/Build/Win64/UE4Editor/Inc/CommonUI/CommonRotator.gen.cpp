// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonRotator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonRotator() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonRotator();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonRotator_GetSelectedIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonRotator_GetSelectedText();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonRotator_PopulateTextLabels();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonRotator_SetSelectedItem();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonRotator_ShiftTextLeft();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonRotator_ShiftTextRight();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature();
// End Cross Module References
	void UCommonRotator::StaticRegisterNativesUCommonRotator()
	{
		UClass* Class = UCommonRotator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedIndex", &UCommonRotator::execGetSelectedIndex },
			{ "GetSelectedText", &UCommonRotator::execGetSelectedText },
			{ "PopulateTextLabels", &UCommonRotator::execPopulateTextLabels },
			{ "SetSelectedItem", &UCommonRotator::execSetSelectedItem },
			{ "ShiftTextLeft", &UCommonRotator::execShiftTextLeft },
			{ "ShiftTextRight", &UCommonRotator::execShiftTextRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics
	{
		struct CommonRotator_eventGetSelectedIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonRotator_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, "GetSelectedIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonRotator_eventGetSelectedIndex_Parms), Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_GetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonRotator_GetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics
	{
		struct CommonRotator_eventGetSelectedText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonRotator_eventGetSelectedText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, "GetSelectedText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonRotator_eventGetSelectedText_Parms), Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_GetSelectedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonRotator_GetSelectedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics
	{
		struct CommonRotator_eventPopulateTextLabels_Parms
		{
			TArray<FText> Labels;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Labels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels = { UE4CodeGen_Private::EPropertyClass::Array, "Labels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonRotator_eventPopulateTextLabels_Parms, Labels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels_Inner = { UE4CodeGen_Private::EPropertyClass::Text, "Labels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::NewProp_Labels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, "PopulateTextLabels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonRotator_eventPopulateTextLabels_Parms), Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_PopulateTextLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonRotator_PopulateTextLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics
	{
		struct CommonRotator_eventSetSelectedItem_Parms
		{
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Int, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonRotator_eventSetSelectedItem_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, "SetSelectedItem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonRotator_eventSetSelectedItem_Parms), Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_SetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonRotator_SetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, "ShiftTextLeft", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_ShiftTextLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonRotator_ShiftTextLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonRotator, "ShiftTextRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonRotator_ShiftTextRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonRotator_ShiftTextRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonRotator_NoRegister()
	{
		return UCommonRotator::StaticClass();
	}
	struct Z_Construct_UClass_UCommonRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRotated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRotated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButton,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonRotator_GetSelectedIndex, "GetSelectedIndex" }, // 1923851682
		{ &Z_Construct_UFunction_UCommonRotator_GetSelectedText, "GetSelectedText" }, // 2455627960
		{ &Z_Construct_UFunction_UCommonRotator_PopulateTextLabels, "PopulateTextLabels" }, // 108876604
		{ &Z_Construct_UFunction_UCommonRotator_SetSelectedItem, "SetSelectedItem" }, // 1230167720
		{ &Z_Construct_UFunction_UCommonRotator_ShiftTextLeft, "ShiftTextLeft" }, // 477242093
		{ &Z_Construct_UFunction_UCommonRotator_ShiftTextRight, "ShiftTextRight" }, // 2370957111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRotator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonRotator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRotator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText = { UE4CodeGen_Private::EPropertyClass::Object, "MyText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UCommonRotator, MyText), Z_Construct_UClass_UCommonTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonRotator" },
		{ "ModuleRelativePath", "Public/CommonRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnRotated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonRotator, OnRotated), Z_Construct_UDelegateFunction_CommonUI_OnRotated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRotator_Statics::NewProp_MyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonRotator_Statics::NewProp_OnRotated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonRotator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonRotator_Statics::ClassParams = {
		&UCommonRotator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonRotator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonRotator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonRotator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonRotator, 3729132108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonRotator(Z_Construct_UClass_UCommonRotator, &UCommonRotator::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonRotator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonRotator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
