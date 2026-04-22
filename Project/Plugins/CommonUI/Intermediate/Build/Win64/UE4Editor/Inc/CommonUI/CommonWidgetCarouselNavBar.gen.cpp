// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonWidgetCarouselNavBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetCarouselNavBar() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroup_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UCommonWidgetCarouselNavBar::StaticRegisterNativesUCommonWidgetCarouselNavBar()
	{
		UClass* Class = UCommonWidgetCarouselNavBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UCommonWidgetCarouselNavBar::execHandleButtonClicked },
			{ "HandlePageChanged", &UCommonWidgetCarouselNavBar::execHandlePageChanged },
			{ "SetLinkedCarousel", &UCommonWidgetCarouselNavBar::execSetLinkedCarousel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics
	{
		struct CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms
		{
			UCommonButton* AssociatedButton;
			int32 ButtonIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_ButtonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ButtonIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton = { UE4CodeGen_Private::EPropertyClass::Object, "AssociatedButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms, AssociatedButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_ButtonIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarouselNavBar, "HandleButtonClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms), Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics
	{
		struct CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms
		{
			UCommonWidgetCarousel* CommonCarousel;
			int32 PageIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonCarousel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonCarousel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_PageIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PageIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel = { UE4CodeGen_Private::EPropertyClass::Object, "CommonCarousel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms, CommonCarousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarouselNavBar, "HandlePageChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms), Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics
	{
		struct CommonWidgetCarouselNavBar_eventSetLinkedCarousel_Parms
		{
			UCommonWidgetCarousel* CommonCarousel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonCarousel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonCarousel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel = { UE4CodeGen_Private::EPropertyClass::Object, "CommonCarousel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventSetLinkedCarousel_Parms, CommonCarousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarouselNavBar, "SetLinkedCarousel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonWidgetCarouselNavBar_eventSetLinkedCarousel_Parms), Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister()
	{
		return UCommonWidgetCarouselNavBar::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buttons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buttons_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buttons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkedCarousel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinkedCarousel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWidgetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked, "HandleButtonClicked" }, // 3384248965
		{ &Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged, "HandlePageChanged" }, // 910836206
		{ &Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel, "SetLinkedCarousel" }, // 3894492441
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonWidgetCarouselNavBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarouselNavBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons = { UE4CodeGen_Private::EPropertyClass::Array, "Buttons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008800000000d, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, Buttons), METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarouselNavBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Buttons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarouselNavBar" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup = { UE4CodeGen_Private::EPropertyClass::Object, "ButtonGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonGroup), Z_Construct_UClass_UCommonButtonGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarouselNavBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel = { UE4CodeGen_Private::EPropertyClass::Object, "LinkedCarousel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, LinkedCarousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarouselNavBar" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ButtonPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonWidgetCarouselNavBar" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType = { UE4CodeGen_Private::EPropertyClass::Class, "ButtonWidgetType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonWidgetType), Z_Construct_UClass_UCommonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetCarouselNavBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::ClassParams = {
		&UCommonWidgetCarouselNavBar::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonWidgetCarouselNavBar, 4065005652);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonWidgetCarouselNavBar(Z_Construct_UClass_UCommonWidgetCarouselNavBar, &UCommonWidgetCarouselNavBar::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonWidgetCarouselNavBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetCarouselNavBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
