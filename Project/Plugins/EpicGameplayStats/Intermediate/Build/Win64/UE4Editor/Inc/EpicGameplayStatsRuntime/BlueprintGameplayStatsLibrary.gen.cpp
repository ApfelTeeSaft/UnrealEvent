// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicGameplayStatsRuntime/Public/BlueprintGameplayStatsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGameplayStatsLibrary() {}
// Cross Module References
	EPICGAMEPLAYSTATSRUNTIME_API UClass* Z_Construct_UClass_UBlueprintGameplayStatsLibrary_NoRegister();
	EPICGAMEPLAYSTATSRUNTIME_API UClass* Z_Construct_UClass_UBlueprintGameplayStatsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EpicGameplayStatsRuntime();
	EPICGAMEPLAYSTATSRUNTIME_API UFunction* Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag();
	EPICGAMEPLAYSTATSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayStatTag();
	EPICGAMEPLAYSTATSRUNTIME_API UFunction* Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag();
// End Cross Module References
	void UBlueprintGameplayStatsLibrary::StaticRegisterNativesUBlueprintGameplayStatsLibrary()
	{
		UClass* Class = UBlueprintGameplayStatsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EqualEqual_GameplayStatTagGameplayStatTag", &UBlueprintGameplayStatsLibrary::execEqualEqual_GameplayStatTagGameplayStatTag },
			{ "NotEqual_GameplayStatTagGameplayStatTag", &UBlueprintGameplayStatsLibrary::execNotEqual_GameplayStatTagGameplayStatTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics
	{
		struct BlueprintGameplayStatsLibrary_eventEqualEqual_GameplayStatTagGameplayStatTag_Parms
		{
			FGameplayStatTag A;
			FGameplayStatTag B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayStatsLibrary_eventEqualEqual_GameplayStatTagGameplayStatTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayStatsLibrary_eventEqualEqual_GameplayStatTagGameplayStatTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayStatsLibrary_eventEqualEqual_GameplayStatTagGameplayStatTag_Parms, B), Z_Construct_UScriptStruct_FGameplayStatTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayStatsLibrary_eventEqualEqual_GameplayStatTagGameplayStatTag_Parms, A), Z_Construct_UScriptStruct_FGameplayStatTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintGameplayStatsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayStatsLibrary, "EqualEqual_GameplayStatTagGameplayStatTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayStatsLibrary_eventEqualEqual_GameplayStatTagGameplayStatTag_Parms), Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics
	{
		struct BlueprintGameplayStatsLibrary_eventNotEqual_GameplayStatTagGameplayStatTag_Parms
		{
			FGameplayStatTag A;
			FGameplayStatTag B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayStatsLibrary_eventNotEqual_GameplayStatTagGameplayStatTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintGameplayStatsLibrary_eventNotEqual_GameplayStatTagGameplayStatTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayStatsLibrary_eventNotEqual_GameplayStatTagGameplayStatTag_Parms, B), Z_Construct_UScriptStruct_FGameplayStatTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintGameplayStatsLibrary_eventNotEqual_GameplayStatTagGameplayStatTag_Parms, A), Z_Construct_UScriptStruct_FGameplayStatTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintGameplayStatsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayStatsLibrary, "NotEqual_GameplayStatTagGameplayStatTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BlueprintGameplayStatsLibrary_eventNotEqual_GameplayStatTagGameplayStatTag_Parms), Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintGameplayStatsLibrary_NoRegister()
	{
		return UBlueprintGameplayStatsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicGameplayStatsRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, "EqualEqual_GameplayStatTagGameplayStatTag" }, // 2770854220
		{ &Z_Construct_UFunction_UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, "NotEqual_GameplayStatTagGameplayStatTag" }, // 184048268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintGameplayStatsLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintGameplayStatsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGameplayStatsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::ClassParams = {
		&UBlueprintGameplayStatsLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintGameplayStatsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintGameplayStatsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintGameplayStatsLibrary, 2144355122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintGameplayStatsLibrary(Z_Construct_UClass_UBlueprintGameplayStatsLibrary, &UBlueprintGameplayStatsLibrary::StaticClass, TEXT("/Script/EpicGameplayStatsRuntime"), TEXT("UBlueprintGameplayStatsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGameplayStatsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
