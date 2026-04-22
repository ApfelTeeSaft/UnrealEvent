// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonPopupMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonPopupMenu() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPopupMenu_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPopupMenu();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatablePanel();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupMenu_RequestClose();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor();
	UMG_API UClass* Z_Construct_UClass_UMenuAnchor_NoRegister();
// End Cross Module References
	static FName NAME_UCommonPopupMenu_HandlePostDifferentContextProviderSet = FName(TEXT("HandlePostDifferentContextProviderSet"));
	void UCommonPopupMenu::HandlePostDifferentContextProviderSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonPopupMenu_HandlePostDifferentContextProviderSet),NULL);
	}
	static FName NAME_UCommonPopupMenu_HandlePreDifferentContextProviderSet = FName(TEXT("HandlePreDifferentContextProviderSet"));
	void UCommonPopupMenu::HandlePreDifferentContextProviderSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonPopupMenu_HandlePreDifferentContextProviderSet),NULL);
	}
	void UCommonPopupMenu::StaticRegisterNativesUCommonPopupMenu()
	{
		UClass* Class = UCommonPopupMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePostDifferentContextProviderSet", &UCommonPopupMenu::execHandlePostDifferentContextProviderSet },
			{ "HandlePreDifferentContextProviderSet", &UCommonPopupMenu::execHandlePreDifferentContextProviderSet },
			{ "OnIsOpenChanged", &UCommonPopupMenu::execOnIsOpenChanged },
			{ "RequestClose", &UCommonPopupMenu::execRequestClose },
			{ "SetContextProvider", &UCommonPopupMenu::execSetContextProvider },
			{ "SetOwningMenuAnchor", &UCommonPopupMenu::execSetOwningMenuAnchor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupMenu, "HandlePostDifferentContextProviderSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupMenu, "HandlePreDifferentContextProviderSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics
	{
		struct CommonPopupMenu_eventOnIsOpenChanged_Parms
		{
			bool IsOpen;
		};
		static void NewProp_IsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::NewProp_IsOpen_SetBit(void* Obj)
	{
		((CommonPopupMenu_eventOnIsOpenChanged_Parms*)Obj)->IsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::NewProp_IsOpen = { UE4CodeGen_Private::EPropertyClass::Bool, "IsOpen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CommonPopupMenu_eventOnIsOpenChanged_Parms), &Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::NewProp_IsOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupMenu, "OnIsOpenChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(CommonPopupMenu_eventOnIsOpenChanged_Parms), Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPopupMenu_RequestClose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_RequestClose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupMenu_RequestClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupMenu, "RequestClose", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_RequestClose_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_RequestClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupMenu_RequestClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupMenu_RequestClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics
	{
		struct CommonPopupMenu_eventSetContextProvider_Parms
		{
			const UObject* NewContextProvidingObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewContextProvidingObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewContextProvidingObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::NewProp_NewContextProvidingObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::NewProp_NewContextProvidingObject = { UE4CodeGen_Private::EPropertyClass::Object, "NewContextProvidingObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(CommonPopupMenu_eventSetContextProvider_Parms, NewContextProvidingObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::NewProp_NewContextProvidingObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::NewProp_NewContextProvidingObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::NewProp_NewContextProvidingObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupMenu, "SetContextProvider", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonPopupMenu_eventSetContextProvider_Parms), Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics
	{
		struct CommonPopupMenu_eventSetOwningMenuAnchor_Parms
		{
			const UMenuAnchor* MenuAnchor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuAnchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuAnchor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::NewProp_MenuAnchor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::NewProp_MenuAnchor = { UE4CodeGen_Private::EPropertyClass::Object, "MenuAnchor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080082, 1, nullptr, STRUCT_OFFSET(CommonPopupMenu_eventSetOwningMenuAnchor_Parms, MenuAnchor), Z_Construct_UClass_UMenuAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::NewProp_MenuAnchor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::NewProp_MenuAnchor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::NewProp_MenuAnchor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPopupMenu, "SetOwningMenuAnchor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CommonPopupMenu_eventSetOwningMenuAnchor_Parms), Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonPopupMenu_NoRegister()
	{
		return UCommonPopupMenu::StaticClass();
	}
	struct Z_Construct_UClass_UCommonPopupMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextProvidingObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ContextProvidingObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningMenuAnchor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwningMenuAnchor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInputStack_MetaData[];
#endif
		static void NewProp_bUseInputStack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInputStack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonPopupMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatablePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonPopupMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonPopupMenu_HandlePostDifferentContextProviderSet, "HandlePostDifferentContextProviderSet" }, // 2945595651
		{ &Z_Construct_UFunction_UCommonPopupMenu_HandlePreDifferentContextProviderSet, "HandlePreDifferentContextProviderSet" }, // 3388569570
		{ &Z_Construct_UFunction_UCommonPopupMenu_OnIsOpenChanged, "OnIsOpenChanged" }, // 3732362299
		{ &Z_Construct_UFunction_UCommonPopupMenu_RequestClose, "RequestClose" }, // 715789611
		{ &Z_Construct_UFunction_UCommonPopupMenu_SetContextProvider, "SetContextProvider" }, // 3733175314
		{ &Z_Construct_UFunction_UCommonPopupMenu_SetOwningMenuAnchor, "SetOwningMenuAnchor" }, // 1714625612
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonPopupMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_ContextProvidingObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonPopupMenu" },
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_ContextProvidingObject = { UE4CodeGen_Private::EPropertyClass::WeakObject, "ContextProvidingObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UCommonPopupMenu, ContextProvidingObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_ContextProvidingObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_ContextProvidingObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_OwningMenuAnchor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonPopupMenu" },
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_OwningMenuAnchor = { UE4CodeGen_Private::EPropertyClass::WeakObject, "OwningMenuAnchor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002408000008000d, 1, nullptr, STRUCT_OFFSET(UCommonPopupMenu, OwningMenuAnchor), Z_Construct_UClass_UMenuAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_OwningMenuAnchor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_OwningMenuAnchor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommonPopupMenu" },
		{ "ModuleRelativePath", "Public/CommonPopupMenu.h" },
	};
#endif
	void Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack_SetBit(void* Obj)
	{
		((UCommonPopupMenu*)Obj)->bUseInputStack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInputStack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCommonPopupMenu), &Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonPopupMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_ContextProvidingObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_OwningMenuAnchor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonPopupMenu_Statics::NewProp_bUseInputStack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonPopupMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonPopupMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonPopupMenu_Statics::ClassParams = {
		&UCommonPopupMenu::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCommonPopupMenu_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupMenu_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonPopupMenu_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonPopupMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonPopupMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonPopupMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonPopupMenu, 30103191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonPopupMenu(Z_Construct_UClass_UCommonPopupMenu, &UCommonPopupMenu::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonPopupMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonPopupMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
