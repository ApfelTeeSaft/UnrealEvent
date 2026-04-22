// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetUI/Public/BadNetworkIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBadNetworkIndicator() {}
// Cross Module References
	NETUI_API UClass* Z_Construct_UClass_UBadNetworkIndicator_NoRegister();
	NETUI_API UClass* Z_Construct_UClass_UBadNetworkIndicator();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NetUI();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_GetPing();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay();
	NETUI_API UFunction* Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay();
// End Cross Module References
	static FName NAME_UBadNetworkIndicator_UpdateDisplay = FName(TEXT("UpdateDisplay"));
	void UBadNetworkIndicator::UpdateDisplay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBadNetworkIndicator_UpdateDisplay),NULL);
	}
	void UBadNetworkIndicator::StaticRegisterNativesUBadNetworkIndicator()
	{
		UClass* Class = UBadNetworkIndicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPacketLoss", &UBadNetworkIndicator::execGetPacketLoss },
			{ "GetPing", &UBadNetworkIndicator::execGetPing },
			{ "HasBadPacketLoss", &UBadNetworkIndicator::execHasBadPacketLoss },
			{ "HasBadPing", &UBadNetworkIndicator::execHasBadPing },
			{ "HasSeverePacketLoss", &UBadNetworkIndicator::execHasSeverePacketLoss },
			{ "HasSeverePing", &UBadNetworkIndicator::execHasSeverePing },
			{ "ShouldDisplay", &UBadNetworkIndicator::execShouldDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics
	{
		struct BadNetworkIndicator_eventGetPacketLoss_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BadNetworkIndicator_eventGetPacketLoss_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "GetPacketLoss", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventGetPacketLoss_Parms), Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics
	{
		struct BadNetworkIndicator_eventGetPing_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BadNetworkIndicator_eventGetPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "GetPing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventGetPing_Parms), Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_GetPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_GetPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics
	{
		struct BadNetworkIndicator_eventHasBadPacketLoss_Parms
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
	void Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BadNetworkIndicator_eventHasBadPacketLoss_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BadNetworkIndicator_eventHasBadPacketLoss_Parms), &Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "HasBadPacketLoss", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventHasBadPacketLoss_Parms), Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics
	{
		struct BadNetworkIndicator_eventHasBadPing_Parms
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
	void Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BadNetworkIndicator_eventHasBadPing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BadNetworkIndicator_eventHasBadPing_Parms), &Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "HasBadPing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventHasBadPing_Parms), Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics
	{
		struct BadNetworkIndicator_eventHasSeverePacketLoss_Parms
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
	void Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BadNetworkIndicator_eventHasSeverePacketLoss_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BadNetworkIndicator_eventHasSeverePacketLoss_Parms), &Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "HasSeverePacketLoss", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventHasSeverePacketLoss_Parms), Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics
	{
		struct BadNetworkIndicator_eventHasSeverePing_Parms
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
	void Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BadNetworkIndicator_eventHasSeverePing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BadNetworkIndicator_eventHasSeverePing_Parms), &Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "HasSeverePing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventHasSeverePing_Parms), Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics
	{
		struct BadNetworkIndicator_eventShouldDisplay_Parms
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
	void Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BadNetworkIndicator_eventShouldDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BadNetworkIndicator_eventShouldDisplay_Parms), &Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "ShouldDisplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BadNetworkIndicator_eventShouldDisplay_Parms), Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBadNetworkIndicator, "UpdateDisplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBadNetworkIndicator_NoRegister()
	{
		return UBadNetworkIndicator::StaticClass();
	}
	struct Z_Construct_UClass_UBadNetworkIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumDisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumDisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeverePacketLossThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeverePacketLossThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPacketLossThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BadPacketLossThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeverePingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeverePingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BadPingThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBadNetworkIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NetUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBadNetworkIndicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBadNetworkIndicator_GetPacketLoss, "GetPacketLoss" }, // 3304599427
		{ &Z_Construct_UFunction_UBadNetworkIndicator_GetPing, "GetPing" }, // 2042296733
		{ &Z_Construct_UFunction_UBadNetworkIndicator_HasBadPacketLoss, "HasBadPacketLoss" }, // 324169951
		{ &Z_Construct_UFunction_UBadNetworkIndicator_HasBadPing, "HasBadPing" }, // 2342190649
		{ &Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePacketLoss, "HasSeverePacketLoss" }, // 101109876
		{ &Z_Construct_UFunction_UBadNetworkIndicator_HasSeverePing, "HasSeverePing" }, // 3554285438
		{ &Z_Construct_UFunction_UBadNetworkIndicator_ShouldDisplay, "ShouldDisplay" }, // 3294935892
		{ &Z_Construct_UFunction_UBadNetworkIndicator_UpdateDisplay, "UpdateDisplay" }, // 708435296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BadNetworkIndicator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_InitialDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_InitialDelay = { UE4CodeGen_Private::EPropertyClass::Float, "InitialDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, InitialDelay), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_InitialDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_InitialDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_UpdateTime = { UE4CodeGen_Private::EPropertyClass::Float, "UpdateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, UpdateTime), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_UpdateTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_UpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_MinimumDisplayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_MinimumDisplayTime = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumDisplayTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, MinimumDisplayTime), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_MinimumDisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_MinimumDisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	void Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UBadNetworkIndicator*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBadNetworkIndicator), &Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePacketLossThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePacketLossThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "SeverePacketLossThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, SeverePacketLossThreshold), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePacketLossThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePacketLossThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPacketLossThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPacketLossThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BadPacketLossThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, BadPacketLossThreshold), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPacketLossThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPacketLossThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePingThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "SeverePingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, SeverePingThreshold), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPingThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BadNetworkIndicator" },
		{ "ModuleRelativePath", "Public/BadNetworkIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BadPingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004005, 1, nullptr, STRUCT_OFFSET(UBadNetworkIndicator, BadPingThreshold), METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPingThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBadNetworkIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_InitialDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_UpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_MinimumDisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePacketLossThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPacketLossThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_SeverePingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBadNetworkIndicator_Statics::NewProp_BadPingThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBadNetworkIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBadNetworkIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBadNetworkIndicator_Statics::ClassParams = {
		&UBadNetworkIndicator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBadNetworkIndicator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBadNetworkIndicator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBadNetworkIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBadNetworkIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBadNetworkIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBadNetworkIndicator, 1557981277);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBadNetworkIndicator(Z_Construct_UClass_UBadNetworkIndicator, &UBadNetworkIndicator::StaticClass, TEXT("/Script/NetUI"), TEXT("UBadNetworkIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBadNetworkIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
