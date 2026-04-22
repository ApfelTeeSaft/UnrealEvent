// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/EOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOperation() {}
// Cross Module References
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EOperation();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static UEnum* EOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_EOperation, Z_Construct_UPackage__Script_CommonUI(), TEXT("EOperation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOperation(EOperation_StaticEnum, TEXT("/Script/CommonUI"), TEXT("EOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonUI_EOperation_CRC() { return 2525405325U; }
	UEnum* Z_Construct_UEnum_CommonUI_EOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOperation"), 0, Get_Z_Construct_UEnum_CommonUI_EOperation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOperation::Intro", (int64)EOperation::Intro },
				{ "EOperation::Outro", (int64)EOperation::Outro },
				{ "EOperation::Push", (int64)EOperation::Push },
				{ "EOperation::Pop", (int64)EOperation::Pop },
				{ "EOperation::Invalid", (int64)EOperation::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EOperation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOperation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EOperation",
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
