// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/ECommonPlatformType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonPlatformType() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonPlatformType();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static UEnum* ECommonPlatformType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonPlatformType, Z_Construct_UPackage__Script_CommonInput(), TEXT("ECommonPlatformType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommonPlatformType(ECommonPlatformType_StaticEnum, TEXT("/Script/CommonInput"), TEXT("ECommonPlatformType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonInput_ECommonPlatformType_CRC() { return 4142150270U; }
	UEnum* Z_Construct_UEnum_CommonInput_ECommonPlatformType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommonPlatformType"), 0, Get_Z_Construct_UEnum_CommonInput_ECommonPlatformType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECommonPlatformType::PC", (int64)ECommonPlatformType::PC },
				{ "ECommonPlatformType::Mac", (int64)ECommonPlatformType::Mac },
				{ "ECommonPlatformType::PS4", (int64)ECommonPlatformType::PS4 },
				{ "ECommonPlatformType::XBox", (int64)ECommonPlatformType::XBox },
				{ "ECommonPlatformType::IOS", (int64)ECommonPlatformType::IOS },
				{ "ECommonPlatformType::Android", (int64)ECommonPlatformType::Android },
				{ "ECommonPlatformType::Switch", (int64)ECommonPlatformType::Switch },
				{ "ECommonPlatformType::Count", (int64)ECommonPlatformType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECommonPlatformType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonInput,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECommonPlatformType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECommonPlatformType",
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
