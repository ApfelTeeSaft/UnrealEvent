// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/ECommonGamepadType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonGamepadType() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonGamepadType();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static UEnum* ECommonGamepadType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonGamepadType, Z_Construct_UPackage__Script_CommonInput(), TEXT("ECommonGamepadType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommonGamepadType(ECommonGamepadType_StaticEnum, TEXT("/Script/CommonInput"), TEXT("ECommonGamepadType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonInput_ECommonGamepadType_CRC() { return 2896377126U; }
	UEnum* Z_Construct_UEnum_CommonInput_ECommonGamepadType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommonGamepadType"), 0, Get_Z_Construct_UEnum_CommonInput_ECommonGamepadType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECommonGamepadType::XboxOneController", (int64)ECommonGamepadType::XboxOneController },
				{ "ECommonGamepadType::PS4Controller", (int64)ECommonGamepadType::PS4Controller },
				{ "ECommonGamepadType::SwitchController", (int64)ECommonGamepadType::SwitchController },
				{ "ECommonGamepadType::GenericController", (int64)ECommonGamepadType::GenericController },
				{ "ECommonGamepadType::Count", (int64)ECommonGamepadType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECommonGamepadType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonInput,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECommonGamepadType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECommonGamepadType",
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
