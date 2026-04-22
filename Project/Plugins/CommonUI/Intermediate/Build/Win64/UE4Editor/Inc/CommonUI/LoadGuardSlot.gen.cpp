// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/LoadGuardSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadGuardSlot() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_ULoadGuardSlot_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_ULoadGuardSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	COMMONUI_API UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetPadding();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	COMMONUI_API UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	void ULoadGuardSlot::StaticRegisterNativesULoadGuardSlot()
	{
		UClass* Class = ULoadGuardSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &ULoadGuardSlot::execSetHorizontalAlignment },
			{ "SetPadding", &ULoadGuardSlot::execSetPadding },
			{ "SetVerticalAlignment", &ULoadGuardSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics
	{
		struct LoadGuardSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LoadGuardSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGuardSlot, "SetHorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LoadGuardSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics
	{
		struct LoadGuardSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::NewProp_InPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "InPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LoadGuardSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGuardSlot, "SetPadding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LoadGuardSlot_eventSetPadding_Parms), Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics
	{
		struct LoadGuardSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "InVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LoadGuardSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGuardSlot, "SetVerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LoadGuardSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoadGuardSlot_NoRegister()
	{
		return ULoadGuardSlot::StaticClass();
	}
	struct Z_Construct_UClass_ULoadGuardSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadGuardSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadGuardSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 613777529
		{ &Z_Construct_UFunction_ULoadGuardSlot_SetPadding, "SetPadding" }, // 4106341597
		{ &Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2123922640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadGuardSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadGuardSlot" },
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "VerticalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(ULoadGuardSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadGuardSlot" },
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "HorizontalAlignment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(ULoadGuardSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadGuardSlot" },
		{ "ModuleRelativePath", "Public/LoadGuardSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding = { UE4CodeGen_Private::EPropertyClass::Struct, "Padding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000005, 1, nullptr, STRUCT_OFFSET(ULoadGuardSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadGuardSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadGuardSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadGuardSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadGuardSlot_Statics::ClassParams = {
		&ULoadGuardSlot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULoadGuardSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadGuardSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadGuardSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadGuardSlot, 667887528);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadGuardSlot(Z_Construct_UClass_ULoadGuardSlot, &ULoadGuardSlot::StaticClass, TEXT("/Script/CommonUI"), TEXT("ULoadGuardSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadGuardSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
