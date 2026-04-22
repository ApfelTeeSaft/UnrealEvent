// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInput/Public/ECommonInputType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECommonInputType() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static UEnum* ECommonInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputType, Z_Construct_UPackage__Script_CommonInput(), TEXT("ECommonInputType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommonInputType(ECommonInputType_StaticEnum, TEXT("/Script/CommonInput"), TEXT("ECommonInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonInput_ECommonInputType_CRC() { return 2103381175U; }
	UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommonInputType"), 0, Get_Z_Construct_UEnum_CommonInput_ECommonInputType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECommonInputType::MouseAndKeyboard", (int64)ECommonInputType::MouseAndKeyboard },
				{ "ECommonInputType::Gamepad", (int64)ECommonInputType::Gamepad },
				{ "ECommonInputType::Touch", (int64)ECommonInputType::Touch },
				{ "ECommonInputType::Count", (int64)ECommonInputType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECommonInputType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonInput,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECommonInputType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECommonInputType",
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
