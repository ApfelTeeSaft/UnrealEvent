// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/CommonActionHandlerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActionHandlerInterface() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionHandlerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonActionHandlerInterface::StaticRegisterNativesUCommonActionHandlerInterface()
	{
	}
	UClass* Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister()
	{
		return UCommonActionHandlerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActionHandlerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActionHandlerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionHandlerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActionHandlerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommonActionHandlerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommonActionHandlerInterface_Statics::ClassParams = {
		&UCommonActionHandlerInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActionHandlerInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommonActionHandlerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActionHandlerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommonActionHandlerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommonActionHandlerInterface, 700979708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommonActionHandlerInterface(Z_Construct_UClass_UCommonActionHandlerInterface, &UCommonActionHandlerInterface::StaticClass, TEXT("/Script/CommonUI"), TEXT("UCommonActionHandlerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActionHandlerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
