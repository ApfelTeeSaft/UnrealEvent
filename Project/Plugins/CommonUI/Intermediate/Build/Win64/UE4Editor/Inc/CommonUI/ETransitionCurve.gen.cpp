// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/ETransitionCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETransitionCurve() {}
// Cross Module References
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static UEnum* ETransitionCurve_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ETransitionCurve, Z_Construct_UPackage__Script_CommonUI(), TEXT("ETransitionCurve"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionCurve(ETransitionCurve_StaticEnum, TEXT("/Script/CommonUI"), TEXT("ETransitionCurve"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonUI_ETransitionCurve_CRC() { return 4155310143U; }
	UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionCurve"), 0, Get_Z_Construct_UEnum_CommonUI_ETransitionCurve_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransitionCurve::Linear", (int64)ETransitionCurve::Linear },
				{ "ETransitionCurve::QuadIn", (int64)ETransitionCurve::QuadIn },
				{ "ETransitionCurve::QuadOut", (int64)ETransitionCurve::QuadOut },
				{ "ETransitionCurve::QuadInOut", (int64)ETransitionCurve::QuadInOut },
				{ "ETransitionCurve::CubicIn", (int64)ETransitionCurve::CubicIn },
				{ "ETransitionCurve::CubicOut", (int64)ETransitionCurve::CubicOut },
				{ "ETransitionCurve::CubicInOut", (int64)ETransitionCurve::CubicInOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ETransitionCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransitionCurve",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETransitionCurve",
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
