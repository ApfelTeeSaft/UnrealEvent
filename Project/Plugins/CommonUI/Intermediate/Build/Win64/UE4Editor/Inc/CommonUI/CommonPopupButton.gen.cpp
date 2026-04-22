// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonPopupButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonPopupButton() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPopupButton_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPopupButton();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPopupMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
// End Cross Module References
	void UCommonPopupButton::StaticRegisterNativesUCommonPopupButton()
	{
		UClass* Class = UCommonPopupButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMenuAnchorWidget", &UCommonPopupButton::execGetMenuAnchorWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics
	{
		struct CommonPopupButton_eventGetMenuAnchorWidget_Parms
		{
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonPopupButton_eventGetMenuAnchorWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupButton, "GetMenuAnchorWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(CommonPopupButton_eventGetMenuAnchorWidget_Parms), Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonPopupButton_NoRegister()
	{
		return UCommonPopupButton::StaticClass();
	}
	struct Z_Construct_UClass_UCommonPopupButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopupMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupMenuAnchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PopupMenuAnchor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonPopupButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonButton,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonPopupButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonPopupButton_GetMenuAnchorWidget, "GetMenuAnchorWidget" }, // 1263256498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupButton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonPopupButton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonPopupButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonPopupButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenu = { UE4CodeGen_Private::EPropertyClass::Object, "PopupMenu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(UCommonPopupButton, PopupMenu), Z_Construct_UClass_UCommonPopupMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenuAnchor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonPopupButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonPopupButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenuAnchor = { UE4CodeGen_Private::EPropertyClass::Object, "PopupMenuAnchor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UCommonPopupButton, PopupMenuAnchor), Z_Construct_UClass_UMenuAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenuAnchor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenuAnchor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonPopupButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonPopupButton_Statics::NewProp_PopupMenuAnchor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonPopupButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonPopupButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonPopupButton_Statics::ClassParams = {
		&UCommonPopupButton::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonPopupButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupButton_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonPopupButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonPopupButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonPopupButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonPopupButton, 3197939496);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonPopupButton(Z_Construct_UClass_UCommonPopupButton, &UCommonPopupButton::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonPopupButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonPopupButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
