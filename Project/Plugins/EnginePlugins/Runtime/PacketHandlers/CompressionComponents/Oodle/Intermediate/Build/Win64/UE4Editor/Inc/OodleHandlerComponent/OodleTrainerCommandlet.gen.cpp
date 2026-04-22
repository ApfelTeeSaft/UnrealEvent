// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OodleHandlerComponent/Public/OodleTrainerCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOodleTrainerCommandlet() {}
// Cross Module References
	OODLEHANDLERCOMPONENT_API UClass* Z_Construct_UClass_UOodleTrainerCommandlet_NoRegister();
	OODLEHANDLERCOMPONENT_API UClass* Z_Construct_UClass_UOodleTrainerCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_OodleHandlerComponent();
// End Cross Module References
	void UOodleTrainerCommandlet::StaticRegisterNativesUOodleTrainerCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UOodleTrainerCommandlet_NoRegister()
	{
		return UOodleTrainerCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UOodleTrainerCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOodleTrainerCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_OodleHandlerComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOodleTrainerCommandlet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OodleTrainerCommandlet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OodleTrainerCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOodleTrainerCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOodleTrainerCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOodleTrainerCommandlet_Statics::ClassParams = {
		&UOodleTrainerCommandlet::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOodleTrainerCommandlet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOodleTrainerCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOodleTrainerCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOodleTrainerCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOodleTrainerCommandlet, 4248108275);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOodleTrainerCommandlet(Z_Construct_UClass_UOodleTrainerCommandlet, &UOodleTrainerCommandlet::StaticClass, TEXT("/Script/OodleHandlerComponent"), TEXT("UOodleTrainerCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOodleTrainerCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
