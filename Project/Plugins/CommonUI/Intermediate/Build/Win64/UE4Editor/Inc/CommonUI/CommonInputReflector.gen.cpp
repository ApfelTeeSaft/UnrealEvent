// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonInputReflector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputReflector() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputReflector_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputReflector();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionHandlerData();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_UCommonInputReflector_OnButtonAdded = FName(TEXT("OnButtonAdded"));
	void UCommonInputReflector::OnButtonAdded(UCommonButton* AddedButton, FCommonInputActionHandlerData const& Data)
	{
		CommonInputReflector_eventOnButtonAdded_Parms Parms;
		Parms.AddedButton=AddedButton;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_UCommonInputReflector_OnButtonAdded),&Parms);
	}
	void UCommonInputReflector::StaticRegisterNativesUCommonInputReflector()
	{
	}
	struct Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddedButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AddedButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CommonInputReflector_eventOnButtonAdded_Parms, Data), Z_Construct_UScriptStruct_FCommonInputActionHandlerData, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_AddedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_AddedButton = { UE4CodeGen_Private::EPropertyClass::Object, "AddedButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonInputReflector_eventOnButtonAdded_Parms, AddedButton), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_AddedButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_AddedButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::NewProp_AddedButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputReflector, "OnButtonAdded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(CommonInputReflector_eventOnButtonAdded_Parms), Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonInputReflector_NoRegister()
	{
		return UCommonInputReflector::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputReflector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InactiveButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveButtons_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveButtons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveButtons_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ButtonType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputReflector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonInputReflector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonInputReflector_OnButtonAdded, "OnButtonAdded" }, // 1331179862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputReflector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonInputReflector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputReflector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons = { UE4CodeGen_Private::EPropertyClass::Array, "InactiveButtons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004000800000000d, 1, nullptr, STRUCT_OFFSET(UCommonInputReflector, InactiveButtons), METADATA_PARAMS(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputReflector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InactiveButtons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputReflector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveButtons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004000800000000d, 1, nullptr, STRUCT_OFFSET(UCommonInputReflector, ActiveButtons), METADATA_PARAMS(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputReflector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveButtons", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ButtonType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonInputReflector" },
		{ "ModuleRelativePath", "Public/CommonInputReflector.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ButtonType = { UE4CodeGen_Private::EPropertyClass::Class, "ButtonType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UCommonInputReflector, ButtonType), Z_Construct_UClass_UCommonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ButtonType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ButtonType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputReflector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_InactiveButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ActiveButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputReflector_Statics::NewProp_ButtonType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputReflector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputReflector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputReflector_Statics::ClassParams = {
		&UCommonInputReflector::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonInputReflector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputReflector_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonInputReflector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputReflector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonInputReflector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonInputReflector, 3832253456);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonInputReflector(Z_Construct_UClass_UCommonInputReflector, &UCommonInputReflector::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonInputReflector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputReflector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
