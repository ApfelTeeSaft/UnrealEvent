// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintContext/Public/BlueprintContextBase.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintContextBase() {}
// Cross Module References
	BLUEPRINTCONTEXT_API UClass* Z_Construct_UClass_UBlueprintContextBase_NoRegister();
	BLUEPRINTCONTEXT_API UClass* Z_Construct_UClass_UBlueprintContextBase();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_BlueprintContext();
// End Cross Module References
	void UBlueprintContextBase::StaticRegisterNativesUBlueprintContextBase()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintContextBase_NoRegister()
	{
		return UBlueprintContextBase::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintContextBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintContextBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintContextBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintContextBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlueprintContextBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintContextBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintContextBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintContextBase_Statics::ClassParams = {
		&UBlueprintContextBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A9u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintContextBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintContextBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintContextBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintContextBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintContextBase, 582143198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintContextBase(Z_Construct_UClass_UBlueprintContextBase, &UBlueprintContextBase::StaticClass, TEXT("/Script/BlueprintContext"), TEXT("UBlueprintContextBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintContextBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
