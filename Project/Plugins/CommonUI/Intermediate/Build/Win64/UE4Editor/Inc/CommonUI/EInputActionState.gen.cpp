// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/EInputActionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInputActionState() {}
// Cross Module References
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EInputActionState();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static UEnum* EInputActionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_EInputActionState, Z_Construct_UPackage__Script_CommonUI(), TEXT("EInputActionState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputActionState(EInputActionState_StaticEnum, TEXT("/Script/CommonUI"), TEXT("EInputActionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonUI_EInputActionState_CRC() { return 2595287990U; }
	UEnum* Z_Construct_UEnum_CommonUI_EInputActionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputActionState"), 0, Get_Z_Construct_UEnum_CommonUI_EInputActionState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputActionState::Enabled", (int64)EInputActionState::Enabled },
				{ "EInputActionState::Disabled", (int64)EInputActionState::Disabled },
				{ "EInputActionState::Hidden", (int64)EInputActionState::Hidden },
				{ "EInputActionState::HiddenAndDisabled", (int64)EInputActionState::HiddenAndDisabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EInputActionState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInputActionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EInputActionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
