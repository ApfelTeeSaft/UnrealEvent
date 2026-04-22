// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUserWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput();
// End Cross Module References
	static FName NAME_UCommonUserWidget_OnTouchLeave = FName(TEXT("OnTouchLeave"));
	void UCommonUserWidget::OnTouchLeave(FPointerEvent const& TouchEvent)
	{
		CommonUserWidget_eventOnTouchLeave_Parms Parms;
		Parms.TouchEvent=TouchEvent;
		ProcessEvent(FindFunctionChecked(NAME_UCommonUserWidget_OnTouchLeave),&Parms);
	}
	void UCommonUserWidget::StaticRegisterNativesUCommonUserWidget()
	{
		UClass* Class = UCommonUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetConsumePointerInput", &UCommonUserWidget::execSetConsumePointerInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TouchEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::NewProp_TouchEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::NewProp_TouchEvent = { UE4CodeGen_Private::EPropertyClass::Struct, "TouchEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonUserWidget_eventOnTouchLeave_Parms, TouchEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::NewProp_TouchEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::NewProp_TouchEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::NewProp_TouchEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserWidget, "OnTouchLeave", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C480808, sizeof(CommonUserWidget_eventOnTouchLeave_Parms), Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics
	{
		struct CommonUserWidget_eventSetConsumePointerInput_Parms
		{
			bool bInConsumePointerInput;
		};
		static void NewProp_bInConsumePointerInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInConsumePointerInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput_SetBit(void* Obj)
	{
		((CommonUserWidget_eventSetConsumePointerInput_Parms*)Obj)->bInConsumePointerInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bInConsumePointerInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonUserWidget_eventSetConsumePointerInput_Parms), &Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::NewProp_bInConsumePointerInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUserWidget, "SetConsumePointerInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonUserWidget_eventSetConsumePointerInput_Parms), Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonUserWidget_NoRegister()
	{
		return UCommonUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConsumePointerInput_MetaData[];
#endif
		static void NewProp_bConsumePointerInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConsumePointerInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUserWidget_OnTouchLeave, "OnTouchLeave" }, // 451447453
		{ &Z_Construct_UFunction_UCommonUserWidget_SetConsumePointerInput, "SetConsumePointerInput" }, // 925587586
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonUserWidget" },
		{ "ModuleRelativePath", "Public/CommonUserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_SetBit(void* Obj)
	{
		((UCommonUserWidget*)Obj)->bConsumePointerInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bConsumePointerInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonUserWidget), &Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUserWidget_Statics::NewProp_bConsumePointerInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonUserWidget_Statics::ClassParams = {
		&UCommonUserWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonUserWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUserWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonUserWidget, 3210314608);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonUserWidget(Z_Construct_UClass_UCommonUserWidget, &UCommonUserWidget::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
