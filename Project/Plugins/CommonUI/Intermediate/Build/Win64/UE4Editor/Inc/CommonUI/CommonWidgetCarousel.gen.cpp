// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonWidgetCarousel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetCarousel() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_NextPage();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature();
// End Cross Module References
	void UCommonWidgetCarousel::StaticRegisterNativesUCommonWidgetCarousel()
	{
		UClass* Class = UCommonWidgetCarousel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginAutoScrolling", &UCommonWidgetCarousel::execBeginAutoScrolling },
			{ "EndAutoScrolling", &UCommonWidgetCarousel::execEndAutoScrolling },
			{ "GetActiveWidgetIndex", &UCommonWidgetCarousel::execGetActiveWidgetIndex },
			{ "GetWidgetAtIndex", &UCommonWidgetCarousel::execGetWidgetAtIndex },
			{ "NextPage", &UCommonWidgetCarousel::execNextPage },
			{ "PreviousPage", &UCommonWidgetCarousel::execPreviousPage },
			{ "SetActiveWidget", &UCommonWidgetCarousel::execSetActiveWidget },
			{ "SetActiveWidgetIndex", &UCommonWidgetCarousel::execSetActiveWidgetIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics
	{
		struct CommonWidgetCarousel_eventBeginAutoScrolling_Parms
		{
			float ScrollInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScrollInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::NewProp_ScrollInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ScrollInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventBeginAutoScrolling_Parms, ScrollInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::NewProp_ScrollInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "BeginAutoScrolling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetCarousel_eventBeginAutoScrolling_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "EndAutoScrolling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics
	{
		struct CommonWidgetCarousel_eventGetActiveWidgetIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventGetActiveWidgetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "GetActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonWidgetCarousel_eventGetActiveWidgetIndex_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics
	{
		struct CommonWidgetCarousel_eventGetWidgetAtIndex_Parms
		{
			int32 Index;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventGetWidgetAtIndex_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventGetWidgetAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "GetWidgetAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonWidgetCarousel_eventGetWidgetAtIndex_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "NextPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_NextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_NextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "PreviousPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics
	{
		struct CommonWidgetCarousel_eventSetActiveWidget_Parms
		{
			UWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventSetActiveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "SetActiveWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetCarousel_eventSetActiveWidget_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics
	{
		struct CommonWidgetCarousel_eventSetActiveWidgetIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarousel_eventSetActiveWidgetIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarousel, "SetActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetCarousel_eventSetActiveWidgetIndex_Parms), Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister()
	{
		return UCommonWidgetCarousel::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetCarousel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCurrentPageIndexChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentPageIndexChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveWidgetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveWidgetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetCarousel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetCarousel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_BeginAutoScrolling, "BeginAutoScrolling" }, // 570258446
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_EndAutoScrolling, "EndAutoScrolling" }, // 1266212172
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_GetActiveWidgetIndex, "GetActiveWidgetIndex" }, // 1505281266
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_GetWidgetAtIndex, "GetWidgetAtIndex" }, // 4258974630
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_NextPage, "NextPage" }, // 3401043164
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_PreviousPage, "PreviousPage" }, // 4210784779
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidget, "SetActiveWidget" }, // 3545934364
		{ &Z_Construct_UFunction_UCommonWidgetCarousel_SetActiveWidgetIndex, "SetActiveWidgetIndex" }, // 1682276044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarousel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonWidgetCarousel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarousel" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCurrentPageIndexChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarousel, OnCurrentPageIndexChanged), Z_Construct_UDelegateFunction_CommonUI_OnCurrentPageIndexChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarousel" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ActiveWidgetIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarousel, ActiveWidgetIndex), METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonWidgetCarousel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_OnCurrentPageIndexChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarousel_Statics::NewProp_ActiveWidgetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetCarousel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetCarousel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetCarousel_Statics::ClassParams = {
		&UCommonWidgetCarousel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonWidgetCarousel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarousel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarousel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetCarousel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonWidgetCarousel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonWidgetCarousel, 2570042260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonWidgetCarousel(Z_Construct_UClass_UCommonWidgetCarousel, &UCommonWidgetCarousel::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonWidgetCarousel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetCarousel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
