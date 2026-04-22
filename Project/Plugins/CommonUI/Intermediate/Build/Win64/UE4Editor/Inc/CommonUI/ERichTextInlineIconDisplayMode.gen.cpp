// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/ERichTextInlineIconDisplayMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERichTextInlineIconDisplayMode() {}
// Cross Module References
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static UEnum* ERichTextInlineIconDisplayMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode, Z_Construct_UPackage__Script_CommonUI(), TEXT("ERichTextInlineIconDisplayMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichTextInlineIconDisplayMode(ERichTextInlineIconDisplayMode_StaticEnum, TEXT("/Script/CommonUI"), TEXT("ERichTextInlineIconDisplayMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_CRC() { return 2586627185U; }
	UEnum* Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichTextInlineIconDisplayMode"), 0, Get_Z_Construct_UEnum_CommonUI_ERichTextInlineIconDisplayMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERichTextInlineIconDisplayMode::IconOnly", (int64)ERichTextInlineIconDisplayMode::IconOnly },
				{ "ERichTextInlineIconDisplayMode::TextOnly", (int64)ERichTextInlineIconDisplayMode::TextOnly },
				{ "ERichTextInlineIconDisplayMode::IconAndText", (int64)ERichTextInlineIconDisplayMode::IconAndText },
				{ "ERichTextInlineIconDisplayMode::MAX", (int64)ERichTextInlineIconDisplayMode::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERichTextInlineIconDisplayMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERichTextInlineIconDisplayMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERichTextInlineIconDisplayMode",
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
