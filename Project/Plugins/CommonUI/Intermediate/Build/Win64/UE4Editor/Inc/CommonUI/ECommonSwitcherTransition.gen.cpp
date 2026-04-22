// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/ECommonSwitcherTransition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonSwitcherTransition() {}
// Cross Module References
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static UEnum* ECommonSwitcherTransition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition, Z_Construct_UPackage__Script_CommonUI(), TEXT("ECommonSwitcherTransition"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommonSwitcherTransition(ECommonSwitcherTransition_StaticEnum, TEXT("/Script/CommonUI"), TEXT("ECommonSwitcherTransition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_CRC() { return 659076921U; }
	UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommonSwitcherTransition"), 0, Get_Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECommonSwitcherTransition::FadeOnly", (int64)ECommonSwitcherTransition::FadeOnly },
				{ "ECommonSwitcherTransition::Horizontal", (int64)ECommonSwitcherTransition::Horizontal },
				{ "ECommonSwitcherTransition::Vertical", (int64)ECommonSwitcherTransition::Vertical },
				{ "ECommonSwitcherTransition::Zoom", (int64)ECommonSwitcherTransition::Zoom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECommonSwitcherTransition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECommonSwitcherTransition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECommonSwitcherTransition",
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
