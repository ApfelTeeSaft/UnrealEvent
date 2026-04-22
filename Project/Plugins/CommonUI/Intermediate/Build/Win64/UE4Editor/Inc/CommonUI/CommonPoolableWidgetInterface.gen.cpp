// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonPoolableWidgetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonPoolableWidgetInterface() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool();
	COMMONUI_API UFunction* Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool();
// End Cross Module References
	void ICommonPoolableWidgetInterface::OnAcquireFromPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAcquireFromPool instead.");
	}
	void ICommonPoolableWidgetInterface::OnReleaseToPool()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReleaseToPool instead.");
	}
	void UCommonPoolableWidgetInterface::StaticRegisterNativesUCommonPoolableWidgetInterface()
	{
		UClass* Class = UCommonPoolableWidgetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAcquireFromPool", &ICommonPoolableWidgetInterface::execOnAcquireFromPool },
			{ "OnReleaseToPool", &ICommonPoolableWidgetInterface::execOnReleaseToPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPoolableWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPoolableWidgetInterface, "OnAcquireFromPool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonPoolableWidgetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonPoolableWidgetInterface, "OnReleaseToPool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface_NoRegister()
	{
		return UCommonPoolableWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnAcquireFromPool, "OnAcquireFromPool" }, // 1950648375
		{ &Z_Construct_UFunction_UCommonPoolableWidgetInterface_OnReleaseToPool, "OnReleaseToPool" }, // 1263351915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonPoolableWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommonPoolableWidgetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::ClassParams = {
		&UCommonPoolableWidgetInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonPoolableWidgetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonPoolableWidgetInterface, 3372983596);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonPoolableWidgetInterface(Z_Construct_UClass_UCommonPoolableWidgetInterface, &UCommonPoolableWidgetInterface::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonPoolableWidgetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonPoolableWidgetInterface);
	static FName NAME_UCommonPoolableWidgetInterface_OnAcquireFromPool = FName(TEXT("OnAcquireFromPool"));
	void ICommonPoolableWidgetInterface::Execute_OnAcquireFromPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCommonPoolableWidgetInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCommonPoolableWidgetInterface_OnAcquireFromPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICommonPoolableWidgetInterface*)(O->GetNativeInterfaceAddress(UCommonPoolableWidgetInterface::StaticClass())))
		{
			I->OnAcquireFromPool_Implementation();
		}
	}
	static FName NAME_UCommonPoolableWidgetInterface_OnReleaseToPool = FName(TEXT("OnReleaseToPool"));
	void ICommonPoolableWidgetInterface::Execute_OnReleaseToPool(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCommonPoolableWidgetInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UCommonPoolableWidgetInterface_OnReleaseToPool);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ICommonPoolableWidgetInterface*)(O->GetNativeInterfaceAddress(UCommonPoolableWidgetInterface::StaticClass())))
		{
			I->OnReleaseToPool_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
