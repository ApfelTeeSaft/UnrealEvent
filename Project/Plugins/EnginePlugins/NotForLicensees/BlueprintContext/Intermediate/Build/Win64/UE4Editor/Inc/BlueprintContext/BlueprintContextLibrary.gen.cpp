// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintContext/Public/BlueprintContextLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintContextLibrary() {}
// Cross Module References
	BLUEPRINTCONTEXT_API UClass* Z_Construct_UClass_UBlueprintContextLibrary_NoRegister();
	BLUEPRINTCONTEXT_API UClass* Z_Construct_UClass_UBlueprintContextLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlueprintContext();
	BLUEPRINTCONTEXT_API UFunction* Z_Construct_UFunction_UBlueprintContextLibrary_GetContext();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlueprintContextLibrary::StaticRegisterNativesUBlueprintContextLibrary()
	{
		UClass* Class = UBlueprintContextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContext", &UBlueprintContextLibrary::execGetContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics
	{
		struct BlueprintContextLibrary_eventGetContext_Parms
		{
			UObject* ContextObject;
			TSubclassOf<USubsystem>  Class;
			USubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintContextLibrary_eventGetContext_Parms, ReturnValue), Z_Construct_UClass_USubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::NewProp_Class = { UE4CodeGen_Private::EPropertyClass::Class, "Class", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintContextLibrary_eventGetContext_Parms, Class), Z_Construct_UClass_USubsystem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::NewProp_ContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "ContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintContextLibrary_eventGetContext_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::NewProp_ContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintContextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintContextLibrary, "GetContext", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022409, sizeof(BlueprintContextLibrary_eventGetContext_Parms), Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintContextLibrary_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintContextLibrary_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintContextLibrary_NoRegister()
	{
		return UBlueprintContextLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintContextLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintContextLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintContext,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintContextLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintContextLibrary_GetContext, "GetContext" }, // 3909146304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintContextLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintContextLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintContextLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintContextLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintContextLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintContextLibrary_Statics::ClassParams = {
		&UBlueprintContextLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintContextLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintContextLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintContextLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintContextLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintContextLibrary, 1864165184);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintContextLibrary(Z_Construct_UClass_UBlueprintContextLibrary, &UBlueprintContextLibrary::StaticClass, TEXT("/Script/BlueprintContext"), TEXT("UBlueprintContextLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintContextLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
