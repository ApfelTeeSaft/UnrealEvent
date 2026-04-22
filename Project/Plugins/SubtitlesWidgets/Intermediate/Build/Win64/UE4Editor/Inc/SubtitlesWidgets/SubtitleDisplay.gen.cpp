// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubtitlesWidgets/Public/SubtitleDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitleDisplay() {}
// Cross Module References
	SUBTITLESWIDGETS_API UClass* Z_Construct_UClass_USubtitleDisplay_NoRegister();
	SUBTITLESWIDGETS_API UClass* Z_Construct_UClass_USubtitleDisplay();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_SubtitlesWidgets();
	SUBTITLESWIDGETS_API UFunction* Z_Construct_UFunction_USubtitleDisplay_HasSubtitles();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
// End Cross Module References
	void USubtitleDisplay::StaticRegisterNativesUSubtitleDisplay()
	{
		UClass* Class = USubtitleDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasSubtitles", &USubtitleDisplay::execHasSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics
	{
		struct SubtitleDisplay_eventHasSubtitles_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubtitleDisplay_eventHasSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SubtitleDisplay_eventHasSubtitles_Parms), &Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitleDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitleDisplay, "HasSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SubtitleDisplay_eventHasSubtitles_Parms), Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitleDisplay_HasSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitleDisplay_HasSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubtitleDisplay_NoRegister()
	{
		return USubtitleDisplay::StaticClass();
	}
	struct Z_Construct_UClass_USubtitleDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubtitleDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SubtitlesWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubtitleDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubtitleDisplay_HasSubtitles, "HasSubtitles" }, // 371877592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubtitleDisplay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SubtitleDisplay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubtitleDisplay" },
		{ "ModuleRelativePath", "Public/SubtitleDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt = { UE4CodeGen_Private::EPropertyClass::Float, "WrapTextAt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USubtitleDisplay, WrapTextAt), METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubtitleDisplay" },
		{ "ModuleRelativePath", "Public/SubtitleDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USubtitleDisplay, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_FontInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SubtitleDisplay" },
		{ "ModuleRelativePath", "Public/SubtitleDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_FontInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "FontInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USubtitleDisplay, FontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_FontInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_FontInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubtitleDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_WrapTextAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubtitleDisplay_Statics::NewProp_FontInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubtitleDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubtitleDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubtitleDisplay_Statics::ClassParams = {
		&USubtitleDisplay::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USubtitleDisplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USubtitleDisplay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubtitleDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubtitleDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubtitleDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubtitleDisplay, 3961937896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubtitleDisplay(Z_Construct_UClass_USubtitleDisplay, &USubtitleDisplay::StaticClass, TEXT("/Script/SubtitlesWidgets"), TEXT("USubtitleDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitleDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
