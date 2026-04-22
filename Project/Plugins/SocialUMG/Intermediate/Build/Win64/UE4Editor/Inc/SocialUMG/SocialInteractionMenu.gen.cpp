// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialInteractionMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialInteractionMenu() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInteractionMenu_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialInteractionMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FName NAME_USocialInteractionMenu_OnSocialContextSet = FName(TEXT("OnSocialContextSet"));
	void USocialInteractionMenu::OnSocialContextSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_USocialInteractionMenu_OnSocialContextSet),NULL);
	}
	static FName NAME_USocialInteractionMenu_OnToggleConfirmation = FName(TEXT("OnToggleConfirmation"));
	void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
	{
		SocialInteractionMenu_eventOnToggleConfirmation_Parms Parms;
		Parms.bIsVisible=bIsVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USocialInteractionMenu_OnToggleConfirmation),&Parms);
	}
	void USocialInteractionMenu::StaticRegisterNativesUSocialInteractionMenu()
	{
		UClass* Class = USocialInteractionMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstEntryToCenter", &USocialInteractionMenu::execGetFirstEntryToCenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics
	{
		struct SocialInteractionMenu_eventGetFirstEntryToCenter_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(SocialInteractionMenu_eventGetFirstEntryToCenter_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialInteractionMenu, "GetFirstEntryToCenter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SocialInteractionMenu_eventGetFirstEntryToCenter_Parms), Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialInteractionMenu, "OnSocialContextSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics
	{
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((SocialInteractionMenu_eventOnToggleConfirmation_Parms*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::NewProp_bIsVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SocialInteractionMenu_eventOnToggleConfirmation_Parms), &Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::NewProp_bIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialInteractionMenu, "OnToggleConfirmation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, sizeof(SocialInteractionMenu_eventOnToggleConfirmation_Parms), Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocialInteractionMenu_NoRegister()
	{
		return USocialInteractionMenu::StaticClass();
	}
	struct Z_Construct_UClass_USocialInteractionMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Decline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Decline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Confirm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Confirm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_ConfirmationLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Text_ConfirmationLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switcher_Confirmation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switcher_Confirmation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacer_InteractionSeparator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spacer_InteractionSeparator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryBox_NegativeInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryBox_NegativeInteractions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryBox_PositiveInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryBox_PositiveInteractions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocialContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialInteractionMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocialInteractionMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialInteractionMenu_GetFirstEntryToCenter, "GetFirstEntryToCenter" }, // 3436082933
		{ &Z_Construct_UFunction_USocialInteractionMenu_OnSocialContextSet, "OnSocialContextSet" }, // 2435767341
		{ &Z_Construct_UFunction_USocialInteractionMenu_OnToggleConfirmation, "OnToggleConfirmation" }, // 1939971012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialInteractionMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Decline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Decline = { UE4CodeGen_Private::EPropertyClass::Object, "Button_Decline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, Button_Decline), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Decline_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Decline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Confirm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Confirm = { UE4CodeGen_Private::EPropertyClass::Object, "Button_Confirm", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, Button_Confirm), Z_Construct_UClass_UCommonButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Confirm_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Confirm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Text_ConfirmationLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Text_ConfirmationLabel = { UE4CodeGen_Private::EPropertyClass::Object, "Text_ConfirmationLabel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, Text_ConfirmationLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Text_ConfirmationLabel_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Text_ConfirmationLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Switcher_Confirmation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Switcher_Confirmation = { UE4CodeGen_Private::EPropertyClass::Object, "Switcher_Confirmation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, Switcher_Confirmation), Z_Construct_UClass_UCommonWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Switcher_Confirmation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Switcher_Confirmation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Spacer_InteractionSeparator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Spacer_InteractionSeparator = { UE4CodeGen_Private::EPropertyClass::Object, "Spacer_InteractionSeparator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, Spacer_InteractionSeparator), Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Spacer_InteractionSeparator_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Spacer_InteractionSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_NegativeInteractions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_NegativeInteractions = { UE4CodeGen_Private::EPropertyClass::Object, "EntryBox_NegativeInteractions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, EntryBox_NegativeInteractions), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_NegativeInteractions_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_NegativeInteractions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_PositiveInteractions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_PositiveInteractions = { UE4CodeGen_Private::EPropertyClass::Object, "EntryBox_PositiveInteractions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004200000008000d, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, EntryBox_PositiveInteractions), Z_Construct_UClass_UDynamicEntryBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_PositiveInteractions_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_PositiveInteractions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_SocialContext_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialInteractionMenu" },
		{ "ModuleRelativePath", "Public/SocialInteractionMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_SocialContext = { UE4CodeGen_Private::EPropertyClass::Object, "SocialContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(USocialInteractionMenu, SocialContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_SocialContext_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_SocialContext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialInteractionMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Decline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Button_Confirm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Text_ConfirmationLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Switcher_Confirmation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_Spacer_InteractionSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_NegativeInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_EntryBox_PositiveInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialInteractionMenu_Statics::NewProp_SocialContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialInteractionMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialInteractionMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialInteractionMenu_Statics::ClassParams = {
		&USocialInteractionMenu::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USocialInteractionMenu_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialInteractionMenu_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialInteractionMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialInteractionMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialInteractionMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialInteractionMenu, 1298253474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialInteractionMenu(Z_Construct_UClass_USocialInteractionMenu, &USocialInteractionMenu::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialInteractionMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialInteractionMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
