// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonUILibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUILibrary() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUILibrary_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUILibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UCommonUILibrary::StaticRegisterNativesUCommonUILibrary()
	{
		UClass* Class = UCommonUILibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindParentWidgetOfType", &UCommonUILibrary::execFindParentWidgetOfType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics
	{
		struct CommonUILibrary_eventFindParentWidgetOfType_Parms
		{
			UWidget* StartingWidget;
			TSubclassOf<UWidget>  Type;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartingWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(CommonUILibrary_eventFindParentWidgetOfType_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Class, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(CommonUILibrary_eventFindParentWidgetOfType_Parms, Type), Z_Construct_UClass_UWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget = { UE4CodeGen_Private::EPropertyClass::Object, "StartingWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CommonUILibrary_eventFindParentWidgetOfType_Parms, StartingWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::NewProp_StartingWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUILibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonUILibrary, "FindParentWidgetOfType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CommonUILibrary_eventFindParentWidgetOfType_Parms), Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonUILibrary_NoRegister()
	{
		return UCommonUILibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUILibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUILibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonUILibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonUILibrary_FindParentWidgetOfType, "FindParentWidgetOfType" }, // 3511514281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUILibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CommonUILibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUILibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUILibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUILibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonUILibrary_Statics::ClassParams = {
		&UCommonUILibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUILibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonUILibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUILibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonUILibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonUILibrary, 4271472391);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonUILibrary(Z_Construct_UClass_UCommonUILibrary, &UCommonUILibrary::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonUILibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUILibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
