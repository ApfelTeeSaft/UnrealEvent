// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSTileCarousel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSTileCarousel() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSTileCarousel_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSTileCarousel();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage();
	EPICCMSUIFRAMEWORK_API UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
// End Cross Module References
	static FName NAME_UEpicCMSTileCarousel_HandleTilePageAdded = FName(TEXT("HandleTilePageAdded"));
	void UEpicCMSTileCarousel::HandleTilePageAdded(UWidget* TileWidget)
	{
		EpicCMSTileCarousel_eventHandleTilePageAdded_Parms Parms;
		Parms.TileWidget=TileWidget;
		ProcessEvent(FindFunctionChecked(NAME_UEpicCMSTileCarousel_HandleTilePageAdded),&Parms);
	}
	static FName NAME_UEpicCMSTileCarousel_NavigationVisibilityChanged = FName(TEXT("NavigationVisibilityChanged"));
	void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
	{
		EpicCMSTileCarousel_eventNavigationVisibilityChanged_Parms Parms;
		Parms.bShowNavigation=bShowNavigation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UEpicCMSTileCarousel_NavigationVisibilityChanged),&Parms);
	}
	void UEpicCMSTileCarousel::StaticRegisterNativesUEpicCMSTileCarousel()
	{
		UClass* Class = UEpicCMSTileCarousel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTilePage", &UEpicCMSTileCarousel::execAddTilePage },
			{ "BeginAutoScrolling", &UEpicCMSTileCarousel::execBeginAutoScrolling },
			{ "GetCurrentPageIndex", &UEpicCMSTileCarousel::execGetCurrentPageIndex },
			{ "HandleTilePageAdded", &UEpicCMSTileCarousel::execHandleTilePageAdded },
			{ "NextPage", &UEpicCMSTileCarousel::execNextPage },
			{ "PreviousPage", &UEpicCMSTileCarousel::execPreviousPage },
			{ "SetCurrentPageByIndex", &UEpicCMSTileCarousel::execSetCurrentPageByIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics
	{
		struct EpicCMSTileCarousel_eventAddTilePage_Parms
		{
			UWidget* TilePageWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilePageWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TilePageWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::NewProp_TilePageWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::NewProp_TilePageWidget = { UE4CodeGen_Private::EPropertyClass::Object, "TilePageWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(EpicCMSTileCarousel_eventAddTilePage_Parms, TilePageWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::NewProp_TilePageWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::NewProp_TilePageWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::NewProp_TilePageWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "AddTilePage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EpicCMSTileCarousel_eventAddTilePage_Parms), Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "BeginAutoScrolling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics
	{
		struct EpicCMSTileCarousel_eventGetCurrentPageIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EpicCMSTileCarousel_eventGetCurrentPageIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "GetCurrentPageIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(EpicCMSTileCarousel_eventGetCurrentPageIndex_Parms), Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::NewProp_TileWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::NewProp_TileWidget = { UE4CodeGen_Private::EPropertyClass::Object, "TileWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(EpicCMSTileCarousel_eventHandleTilePageAdded_Parms, TileWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::NewProp_TileWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::NewProp_TileWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::NewProp_TileWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "HandleTilePageAdded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080C00, sizeof(EpicCMSTileCarousel_eventHandleTilePageAdded_Parms), Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics
	{
		static void NewProp_bShowNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNavigation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::NewProp_bShowNavigation_SetBit(void* Obj)
	{
		((EpicCMSTileCarousel_eventNavigationVisibilityChanged_Parms*)Obj)->bShowNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::NewProp_bShowNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowNavigation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EpicCMSTileCarousel_eventNavigationVisibilityChanged_Parms), &Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::NewProp_bShowNavigation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::NewProp_bShowNavigation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "NavigationVisibilityChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, sizeof(EpicCMSTileCarousel_eventNavigationVisibilityChanged_Parms), Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "NextPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "PreviousPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics
	{
		struct EpicCMSTileCarousel_eventSetCurrentPageByIndex_Parms
		{
			int32 PageIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::NewProp_PageIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::NewProp_PageIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PageIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(EpicCMSTileCarousel_eventSetCurrentPageByIndex_Parms, PageIndex), METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::NewProp_PageIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::NewProp_PageIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::NewProp_PageIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicCMSTileCarousel, "SetCurrentPageByIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(EpicCMSTileCarousel_eventSetCurrentPageByIndex_Parms), Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicCMSTileCarousel_NoRegister()
	{
		return UEpicCMSTileCarousel::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSTileCarousel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowingNavigation_MetaData[];
#endif
		static void NewProp_bIsShowingNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowingNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInputActionsForPaging_MetaData[];
#endif
		static void NewProp_bInputActionsForPaging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInputActionsForPaging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldShowNavigationOnlyOnHover_MetaData[];
#endif
		static void NewProp_bShouldShowNavigationOnlyOnHover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldShowNavigationOnlyOnHover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousPageButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousPageButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPageButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextPageButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Carousel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Carousel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextButtonSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextButtonSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousButtonSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousButtonSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSTileCarousel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEpicCMSTileCarousel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_AddTilePage, "AddTilePage" }, // 1563368109
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_BeginAutoScrolling, "BeginAutoScrolling" }, // 3741405156
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_GetCurrentPageIndex, "GetCurrentPageIndex" }, // 3120485715
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_HandleTilePageAdded, "HandleTilePageAdded" }, // 3242857933
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_NavigationVisibilityChanged, "NavigationVisibilityChanged" }, // 1722037764
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_NextPage, "NextPage" }, // 724027443
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_PreviousPage, "PreviousPage" }, // 3159928307
		{ &Z_Construct_UFunction_UEpicCMSTileCarousel_SetCurrentPageByIndex, "SetCurrentPageByIndex" }, // 2330443141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSTileCarousel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation_SetBit(void* Obj)
	{
		((UEpicCMSTileCarousel*)Obj)->bIsShowingNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsShowingNavigation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSTileCarousel), &Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging_SetBit(void* Obj)
	{
		((UEpicCMSTileCarousel*)Obj)->bInputActionsForPaging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging = { UE4CodeGen_Private::EPropertyClass::Bool, "bInputActionsForPaging", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSTileCarousel), &Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	void Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover_SetBit(void* Obj)
	{
		((UEpicCMSTileCarousel*)Obj)->bShouldShowNavigationOnlyOnHover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldShowNavigationOnlyOnHover", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEpicCMSTileCarousel), &Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousPageButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousPageButton = { UE4CodeGen_Private::EPropertyClass::Object, "PreviousPageButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileCarousel, PreviousPageButton), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousPageButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousPageButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextPageButton_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextPageButton = { UE4CodeGen_Private::EPropertyClass::Object, "NextPageButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileCarousel, NextPageButton), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextPageButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextPageButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_Carousel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_Carousel = { UE4CodeGen_Private::EPropertyClass::Object, "Carousel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002208000008000d, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileCarousel, Carousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_Carousel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_Carousel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextButtonSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextButtonSound = { UE4CodeGen_Private::EPropertyClass::Struct, "NextButtonSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileCarousel, NextButtonSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextButtonSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextButtonSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousButtonSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSTileCarousel" },
		{ "ModuleRelativePath", "Public/EpicCMSTileCarousel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousButtonSound = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviousButtonSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSTileCarousel, PreviousButtonSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousButtonSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousButtonSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSTileCarousel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bIsShowingNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bInputActionsForPaging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_bShouldShowNavigationOnlyOnHover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousPageButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextPageButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_Carousel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_NextButtonSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSTileCarousel_Statics::NewProp_PreviousButtonSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSTileCarousel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSTileCarousel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSTileCarousel_Statics::ClassParams = {
		&UEpicCMSTileCarousel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEpicCMSTileCarousel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSTileCarousel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSTileCarousel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSTileCarousel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSTileCarousel, 3394571639);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSTileCarousel(Z_Construct_UClass_UEpicCMSTileCarousel, &UEpicCMSTileCarousel::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSTileCarousel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSTileCarousel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
