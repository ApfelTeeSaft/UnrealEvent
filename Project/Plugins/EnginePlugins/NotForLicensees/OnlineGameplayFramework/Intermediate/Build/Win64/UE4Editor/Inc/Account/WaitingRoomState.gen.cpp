// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/Public/WaitingRoomState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaitingRoomState() {}
// Cross Module References
	ACCOUNT_API UClass* Z_Construct_UClass_UWaitingRoomState_NoRegister();
	ACCOUNT_API UClass* Z_Construct_UClass_UWaitingRoomState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Account();
// End Cross Module References
	void UWaitingRoomState::StaticRegisterNativesUWaitingRoomState()
	{
	}
	UClass* Z_Construct_UClass_UWaitingRoomState_NoRegister()
	{
		return UWaitingRoomState::StaticClass();
	}
	struct Z_Construct_UClass_UWaitingRoomState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GracePeriodMins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GracePeriodMins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaitingRoomState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Account,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitingRoomState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WaitingRoomState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaitingRoomState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaitingRoomState_Statics::NewProp_GracePeriodMins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WaitingRoomState" },
		{ "ModuleRelativePath", "Public/WaitingRoomState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaitingRoomState_Statics::NewProp_GracePeriodMins = { UE4CodeGen_Private::EPropertyClass::Int, "GracePeriodMins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004005, 1, nullptr, STRUCT_OFFSET(UWaitingRoomState, GracePeriodMins), METADATA_PARAMS(Z_Construct_UClass_UWaitingRoomState_Statics::NewProp_GracePeriodMins_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWaitingRoomState_Statics::NewProp_GracePeriodMins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaitingRoomState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaitingRoomState_Statics::NewProp_GracePeriodMins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaitingRoomState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaitingRoomState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWaitingRoomState_Statics::ClassParams = {
		&UWaitingRoomState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A4u,
		nullptr, 0,
		Z_Construct_UClass_UWaitingRoomState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWaitingRoomState_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWaitingRoomState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWaitingRoomState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaitingRoomState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWaitingRoomState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWaitingRoomState, 3136464742);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaitingRoomState(Z_Construct_UClass_UWaitingRoomState, &UWaitingRoomState::StaticClass, TEXT("/Script/Account"), TEXT("UWaitingRoomState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaitingRoomState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
