// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EDateType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDateType() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UEnum* Z_Construct_UEnum_EpicCMSUIFramework_EDateType();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
// End Cross Module References
	static UEnum* EDateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EpicCMSUIFramework_EDateType, Z_Construct_UPackage__Script_EpicCMSUIFramework(), TEXT("EDateType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDateType(EDateType_StaticEnum, TEXT("/Script/EpicCMSUIFramework"), TEXT("EDateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EpicCMSUIFramework_EDateType_CRC() { return 1278926198U; }
	UEnum* Z_Construct_UEnum_EpicCMSUIFramework_EDateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EpicCMSUIFramework();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDateType"), 0, Get_Z_Construct_UEnum_EpicCMSUIFramework_EDateType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDateType::None", (int64)EDateType::None },
				{ "EDateType::Coming", (int64)EDateType::Coming },
				{ "EDateType::Ending", (int64)EDateType::Ending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EDateType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDateType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDateType",
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
