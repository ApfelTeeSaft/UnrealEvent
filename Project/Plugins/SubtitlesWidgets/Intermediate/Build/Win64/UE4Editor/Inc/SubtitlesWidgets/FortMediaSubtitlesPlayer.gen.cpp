// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubtitlesWidgets/Public/FortMediaSubtitlesPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortMediaSubtitlesPlayer() {}
// Cross Module References
	SUBTITLESWIDGETS_API UClass* Z_Construct_UClass_UFortMediaSubtitlesPlayer_NoRegister();
	SUBTITLESWIDGETS_API UClass* Z_Construct_UClass_UFortMediaSubtitlesPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SubtitlesWidgets();
	SUBTITLESWIDGETS_API UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	SUBTITLESWIDGETS_API UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play();
	SUBTITLESWIDGETS_API UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays_NoRegister();
	SUBTITLESWIDGETS_API UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop();
// End Cross Module References
	void UFortMediaSubtitlesPlayer::StaticRegisterNativesUFortMediaSubtitlesPlayer()
	{
		UClass* Class = UFortMediaSubtitlesPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToMediaPlayer", &UFortMediaSubtitlesPlayer::execBindToMediaPlayer },
			{ "Play", &UFortMediaSubtitlesPlayer::execPlay },
			{ "SetSubtitles", &UFortMediaSubtitlesPlayer::execSetSubtitles },
			{ "Stop", &UFortMediaSubtitlesPlayer::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics
	{
		struct FortMediaSubtitlesPlayer_eventBindToMediaPlayer_Parms
		{
			UMediaPlayer* InMediaPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::NewProp_InMediaPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "InMediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FortMediaSubtitlesPlayer_eventBindToMediaPlayer_Parms, InMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::NewProp_InMediaPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FortMediaSubtitlesPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFortMediaSubtitlesPlayer, "BindToMediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FortMediaSubtitlesPlayer_eventBindToMediaPlayer_Parms), Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FortMediaSubtitlesPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFortMediaSubtitlesPlayer, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics
	{
		struct FortMediaSubtitlesPlayer_eventSetSubtitles_Parms
		{
			UOverlays* Subtitles;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::NewProp_Subtitles = { UE4CodeGen_Private::EPropertyClass::Object, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FortMediaSubtitlesPlayer_eventSetSubtitles_Parms, Subtitles), Z_Construct_UClass_UOverlays_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::NewProp_Subtitles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FortMediaSubtitlesPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFortMediaSubtitlesPlayer, "SetSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FortMediaSubtitlesPlayer_eventSetSubtitles_Parms), Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FortMediaSubtitlesPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFortMediaSubtitlesPlayer, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFortMediaSubtitlesPlayer_NoRegister()
	{
		return UFortMediaSubtitlesPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceSubtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubtitlesWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFortMediaSubtitlesPlayer_BindToMediaPlayer, "BindToMediaPlayer" }, // 253200984
		{ &Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Play, "Play" }, // 3878209138
		{ &Z_Construct_UFunction_UFortMediaSubtitlesPlayer_SetSubtitles, "SetSubtitles" }, // 4009272018
		{ &Z_Construct_UFunction_UFortMediaSubtitlesPlayer_Stop, "Stop" }, // 2554774793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FortMediaSubtitlesPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FortMediaSubtitlesPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::NewProp_SourceSubtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FortMediaSubtitlesPlayer" },
		{ "ModuleRelativePath", "Public/FortMediaSubtitlesPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::NewProp_SourceSubtitles = { UE4CodeGen_Private::EPropertyClass::Object, "SourceSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UFortMediaSubtitlesPlayer, SourceSubtitles), Z_Construct_UClass_UOverlays_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::NewProp_SourceSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::NewProp_SourceSubtitles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::NewProp_SourceSubtitles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFortMediaSubtitlesPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::ClassParams = {
		&UFortMediaSubtitlesPlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFortMediaSubtitlesPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFortMediaSubtitlesPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFortMediaSubtitlesPlayer, 2493503006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFortMediaSubtitlesPlayer(Z_Construct_UClass_UFortMediaSubtitlesPlayer, &UFortMediaSubtitlesPlayer::StaticClass, TEXT("/Script/SubtitlesWidgets"), TEXT("UFortMediaSubtitlesPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFortMediaSubtitlesPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
