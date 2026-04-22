// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonDateTimeTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonDateTimeTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonDateTimeTextBlock();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
// End Cross Module References
	void UCommonDateTimeTextBlock::StaticRegisterNativesUCommonDateTimeTextBlock()
	{
		UClass* Class = UCommonDateTimeTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDateTime", &UCommonDateTimeTextBlock::execGetDateTime },
			{ "SetCountDownCompletionText", &UCommonDateTimeTextBlock::execSetCountDownCompletionText },
			{ "SetDateTimeValue", &UCommonDateTimeTextBlock::execSetDateTimeValue },
			{ "SetTimespanValue", &UCommonDateTimeTextBlock::execSetTimespanValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics
	{
		struct CommonDateTimeTextBlock_eventGetDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventGetDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, "GetDateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CommonDateTimeTextBlock_eventGetDateTime_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics
	{
		struct CommonDateTimeTextBlock_eventSetCountDownCompletionText_Parms
		{
			FText InCompletionText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCompletionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InCompletionText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText = { UE4CodeGen_Private::EPropertyClass::Text, "InCompletionText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetCountDownCompletionText_Parms, InCompletionText), METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::NewProp_InCompletionText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, "SetCountDownCompletionText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonDateTimeTextBlock_eventSetCountDownCompletionText_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics
	{
		struct CommonDateTimeTextBlock_eventSetDateTimeValue_Parms
		{
			FDateTime InDateTime;
			bool bShowAsCountdown;
		};
		static void NewProp_bShowAsCountdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAsCountdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown_SetBit(void* Obj)
	{
		((CommonDateTimeTextBlock_eventSetDateTimeValue_Parms*)Obj)->bShowAsCountdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowAsCountdown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonDateTimeTextBlock_eventSetDateTimeValue_Parms), &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetDateTimeValue_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_bShowAsCountdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, "SetDateTimeValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CommonDateTimeTextBlock_eventSetDateTimeValue_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics
	{
		struct CommonDateTimeTextBlock_eventSetTimespanValue_Parms
		{
			FTimespan InTimespan;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimespan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTimespan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan = { UE4CodeGen_Private::EPropertyClass::Struct, "InTimespan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CommonDateTimeTextBlock_eventSetTimespanValue_Parms, InTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::NewProp_InTimespan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonDateTimeTextBlock, "SetTimespanValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CommonDateTimeTextBlock_eventSetTimespanValue_Parms), Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonDateTimeTextBlock_NoRegister()
	{
		return UCommonDateTimeTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonDateTimeTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_GetDateTime, "GetDateTime" }, // 1629600684
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetCountDownCompletionText, "SetCountDownCompletionText" }, // 857800358
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetDateTimeValue, "SetDateTimeValue" }, // 2698650703
		{ &Z_Construct_UFunction_UCommonDateTimeTextBlock_SetTimespanValue, "SetTimespanValue" }, // 1053537419
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonDateTimeTextBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonDateTimeTextBlock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonDateTimeTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::ClassParams = {
		&UCommonDateTimeTextBlock::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A2u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonDateTimeTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonDateTimeTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonDateTimeTextBlock, 1692240040);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonDateTimeTextBlock(Z_Construct_UClass_UCommonDateTimeTextBlock, &UCommonDateTimeTextBlock::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonDateTimeTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonDateTimeTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
