// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonButtonGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButtonGroup() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroup_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroup();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetGroupBase();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_DeselectAll();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_SimpleButtonGroupDelegate__DelegateSignature();
// End Cross Module References
	void UCommonButtonGroup::StaticRegisterNativesUCommonButtonGroup()
	{
		UClass* Class = UCommonButtonGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeselectAll", &UCommonButtonGroup::execDeselectAll },
			{ "FindButtonIndex", &UCommonButtonGroup::execFindButtonIndex },
			{ "GetButtonAtIndex", &UCommonButtonGroup::execGetButtonAtIndex },
			{ "GetButtonCount", &UCommonButtonGroup::execGetButtonCount },
			{ "GetHoveredButtonIndex", &UCommonButtonGroup::execGetHoveredButtonIndex },
			{ "GetSelectedButtonIndex", &UCommonButtonGroup::execGetSelectedButtonIndex },
			{ "HasAnyButtons", &UCommonButtonGroup::execHasAnyButtons },
			{ "OnButtonHovered", &UCommonButtonGroup::execOnButtonHovered },
			{ "OnButtonUnhovered", &UCommonButtonGroup::execOnButtonUnhovered },
			{ "OnHandleButtonClicked", &UCommonButtonGroup::execOnHandleButtonClicked },
			{ "OnHandleButtonDoubleClicked", &UCommonButtonGroup::execOnHandleButtonDoubleClicked },
			{ "OnSelectionStateChanged", &UCommonButtonGroup::execOnSelectionStateChanged },
			{ "SelectButtonAtIndex", &UCommonButtonGroup::execSelectButtonAtIndex },
			{ "SelectNextButton", &UCommonButtonGroup::execSelectNextButton },
			{ "SelectPreviousButton", &UCommonButtonGroup::execSelectPreviousButton },
			{ "SetSelectionRequired", &UCommonButtonGroup::execSetSelectionRequired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_DeselectAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_DeselectAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_DeselectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "DeselectAll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_DeselectAll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_DeselectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_DeselectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_DeselectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics
	{
		struct CommonButtonGroup_eventFindButtonIndex_Parms
		{
			const UCommonButton* ButtonToFind;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonToFind_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonToFind;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventFindButtonIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ButtonToFind_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ButtonToFind = { UE4CodeGen_Private::EPropertyClass::Object, "ButtonToFind", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080082, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventFindButtonIndex_Parms, ButtonToFind), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ButtonToFind_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ButtonToFind_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::NewProp_ButtonToFind,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "FindButtonIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonGroup_eventFindButtonIndex_Parms), Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics
	{
		struct CommonButtonGroup_eventGetButtonAtIndex_Parms
		{
			int32 Index;
			UCommonButton* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventGetButtonAtIndex_Parms, ReturnValue), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventGetButtonAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "GetButtonAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonGroup_eventGetButtonAtIndex_Parms), Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics
	{
		struct CommonButtonGroup_eventGetButtonCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventGetButtonCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "GetButtonCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonGroup_eventGetButtonCount_Parms), Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics
	{
		struct CommonButtonGroup_eventGetHoveredButtonIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventGetHoveredButtonIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "GetHoveredButtonIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonGroup_eventGetHoveredButtonIndex_Parms), Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics
	{
		struct CommonButtonGroup_eventGetSelectedButtonIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventGetSelectedButtonIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "GetSelectedButtonIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonGroup_eventGetSelectedButtonIndex_Parms), Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics
	{
		struct CommonButtonGroup_eventHasAnyButtons_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonGroup_eventHasAnyButtons_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonButtonGroup_eventHasAnyButtons_Parms), &Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "HasAnyButtons", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CommonButtonGroup_eventHasAnyButtons_Parms), Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics
	{
		struct CommonButtonGroup_eventOnButtonHovered_Parms
		{
			UCommonButton* BaseButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::NewProp_BaseButton = { UE4CodeGen_Private::EPropertyClass::Object, "BaseButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventOnButtonHovered_Parms, BaseButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::NewProp_BaseButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::NewProp_BaseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "OnButtonHovered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonButtonGroup_eventOnButtonHovered_Parms), Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics
	{
		struct CommonButtonGroup_eventOnButtonUnhovered_Parms
		{
			UCommonButton* BaseButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::NewProp_BaseButton = { UE4CodeGen_Private::EPropertyClass::Object, "BaseButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventOnButtonUnhovered_Parms, BaseButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::NewProp_BaseButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::NewProp_BaseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "OnButtonUnhovered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonButtonGroup_eventOnButtonUnhovered_Parms), Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics
	{
		struct CommonButtonGroup_eventOnHandleButtonClicked_Parms
		{
			UCommonButton* BaseButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::NewProp_BaseButton = { UE4CodeGen_Private::EPropertyClass::Object, "BaseButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventOnHandleButtonClicked_Parms, BaseButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::NewProp_BaseButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::NewProp_BaseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "OnHandleButtonClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonButtonGroup_eventOnHandleButtonClicked_Parms), Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics
	{
		struct CommonButtonGroup_eventOnHandleButtonDoubleClicked_Parms
		{
			UCommonButton* BaseButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::NewProp_BaseButton = { UE4CodeGen_Private::EPropertyClass::Object, "BaseButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventOnHandleButtonDoubleClicked_Parms, BaseButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::NewProp_BaseButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::NewProp_BaseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "OnHandleButtonDoubleClicked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonButtonGroup_eventOnHandleButtonDoubleClicked_Parms), Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics
	{
		struct CommonButtonGroup_eventOnSelectionStateChanged_Parms
		{
			UCommonButton* BaseButton;
			bool bIsSelected;
		};
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((CommonButtonGroup_eventOnSelectionStateChanged_Parms*)Obj)->bIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_bIsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSelected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonButtonGroup_eventOnSelectionStateChanged_Parms), &Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_BaseButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_BaseButton = { UE4CodeGen_Private::EPropertyClass::Object, "BaseButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventOnSelectionStateChanged_Parms, BaseButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_BaseButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_BaseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_bIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::NewProp_BaseButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "OnSelectionStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonButtonGroup_eventOnSelectionStateChanged_Parms), Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics
	{
		struct CommonButtonGroup_eventSelectButtonAtIndex_Parms
		{
			int32 ButtonIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::NewProp_ButtonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ButtonIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CommonButtonGroup_eventSelectButtonAtIndex_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::NewProp_ButtonIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "SelectButtonAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonButtonGroup_eventSelectButtonAtIndex_Parms), Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics
	{
		struct CommonButtonGroup_eventSelectNextButton_Parms
		{
			bool bAllowWrap;
		};
		static void NewProp_bAllowWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::NewProp_bAllowWrap_SetBit(void* Obj)
	{
		((CommonButtonGroup_eventSelectNextButton_Parms*)Obj)->bAllowWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::NewProp_bAllowWrap = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowWrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonButtonGroup_eventSelectNextButton_Parms), &Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::NewProp_bAllowWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::NewProp_bAllowWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "SelectNextButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonButtonGroup_eventSelectNextButton_Parms), Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics
	{
		struct CommonButtonGroup_eventSelectPreviousButton_Parms
		{
			bool bAllowWrap;
		};
		static void NewProp_bAllowWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::NewProp_bAllowWrap_SetBit(void* Obj)
	{
		((CommonButtonGroup_eventSelectPreviousButton_Parms*)Obj)->bAllowWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::NewProp_bAllowWrap = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowWrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonButtonGroup_eventSelectPreviousButton_Parms), &Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::NewProp_bAllowWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::NewProp_bAllowWrap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "SelectPreviousButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonButtonGroup_eventSelectPreviousButton_Parms), Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics
	{
		struct CommonButtonGroup_eventSetSelectionRequired_Parms
		{
			bool bRequireSelection;
		};
		static void NewProp_bRequireSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireSelection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::NewProp_bRequireSelection_SetBit(void* Obj)
	{
		((CommonButtonGroup_eventSetSelectionRequired_Parms*)Obj)->bRequireSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::NewProp_bRequireSelection = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequireSelection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonButtonGroup_eventSetSelectionRequired_Parms), &Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::NewProp_bRequireSelection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::NewProp_bRequireSelection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonGroup, "SetSelectionRequired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonButtonGroup_eventSetSelectionRequired_Parms), Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonButtonGroup_NoRegister()
	{
		return UCommonButtonGroup::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectionRequired_MetaData[];
#endif
		static void NewProp_bSelectionRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectionRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionCleared_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionCleared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonDoubleClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonDoubleClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonClicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredButtonChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredButtonChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedButtonChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedButtonChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonWidgetGroupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonButtonGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonButtonGroup_DeselectAll, "DeselectAll" }, // 194559871
		{ &Z_Construct_UFunction_UCommonButtonGroup_FindButtonIndex, "FindButtonIndex" }, // 156260586
		{ &Z_Construct_UFunction_UCommonButtonGroup_GetButtonAtIndex, "GetButtonAtIndex" }, // 3620843572
		{ &Z_Construct_UFunction_UCommonButtonGroup_GetButtonCount, "GetButtonCount" }, // 2538108394
		{ &Z_Construct_UFunction_UCommonButtonGroup_GetHoveredButtonIndex, "GetHoveredButtonIndex" }, // 1035401697
		{ &Z_Construct_UFunction_UCommonButtonGroup_GetSelectedButtonIndex, "GetSelectedButtonIndex" }, // 1536410757
		{ &Z_Construct_UFunction_UCommonButtonGroup_HasAnyButtons, "HasAnyButtons" }, // 87680472
		{ &Z_Construct_UFunction_UCommonButtonGroup_OnButtonHovered, "OnButtonHovered" }, // 837807189
		{ &Z_Construct_UFunction_UCommonButtonGroup_OnButtonUnhovered, "OnButtonUnhovered" }, // 211463976
		{ &Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonClicked, "OnHandleButtonClicked" }, // 557782549
		{ &Z_Construct_UFunction_UCommonButtonGroup_OnHandleButtonDoubleClicked, "OnHandleButtonDoubleClicked" }, // 281117329
		{ &Z_Construct_UFunction_UCommonButtonGroup_OnSelectionStateChanged, "OnSelectionStateChanged" }, // 2623407307
		{ &Z_Construct_UFunction_UCommonButtonGroup_SelectButtonAtIndex, "SelectButtonAtIndex" }, // 1572747523
		{ &Z_Construct_UFunction_UCommonButtonGroup_SelectNextButton, "SelectNextButton" }, // 2499158692
		{ &Z_Construct_UFunction_UCommonButtonGroup_SelectPreviousButton, "SelectPreviousButton" }, // 92319909
		{ &Z_Construct_UFunction_UCommonButtonGroup_SetSelectionRequired, "SetSelectionRequired" }, // 1503648347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonButtonGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonGroup" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired_SetBit(void* Obj)
	{
		((UCommonButtonGroup*)Obj)->bSelectionRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelectionRequired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonButtonGroup), &Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectionCleared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonGroup" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectionCleared = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectionCleared", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonButtonGroup, OnSelectionCleared), Z_Construct_UDelegateFunction_CommonUI_OnSelectionCleared__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectionCleared_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectionCleared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonDoubleClicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonGroup" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonDoubleClicked = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnButtonDoubleClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonButtonGroup, OnButtonDoubleClicked), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonDoubleClicked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonDoubleClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonClicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonGroup" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonClicked = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnButtonClicked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonButtonGroup, OnButtonClicked), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonClicked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonClicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnHoveredButtonChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonGroup" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnHoveredButtonChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHoveredButtonChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonButtonGroup, OnHoveredButtonChanged), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnHoveredButtonChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnHoveredButtonChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectedButtonChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonButtonGroup" },
		{ "ModuleRelativePath", "Public/CommonButtonGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectedButtonChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectedButtonChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UCommonButtonGroup, OnSelectedButtonChanged), Z_Construct_UDelegateFunction_CommonUI_SimpleButtonGroupDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectedButtonChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectedButtonChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_bSelectionRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectionCleared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonDoubleClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnButtonClicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnHoveredButtonChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonGroup_Statics::NewProp_OnSelectedButtonChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonGroup_Statics::ClassParams = {
		&UCommonButtonGroup::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonButtonGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonGroup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonButtonGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonButtonGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonButtonGroup, 1245382849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonButtonGroup(Z_Construct_UClass_UCommonButtonGroup, &UCommonButtonGroup::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonButtonGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
