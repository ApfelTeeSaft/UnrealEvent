// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/MeshNetworkSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshNetworkSubsystem() {}
// Cross Module References
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshNetworkSubsystem_NoRegister();
	MESHNETWORK_API UClass* Z_Construct_UClass_UMeshNetworkSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType();
	MESHNETWORK_API UEnum* Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata();
	MESHNETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMetaDataStruct();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData();
	MESHNETWORK_API UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey();
	MESHNETWORK_API UFunction* Z_Construct_UDelegateFunction_MeshNetwork_OnMeshMetaDataUpdated__DelegateSignature();
	MESHNETWORK_API UFunction* Z_Construct_UDelegateFunction_MeshNetwork_OnGameServerNodeTypeChanged__DelegateSignature();
	MESHNETWORK_API UFunction* Z_Construct_UDelegateFunction_MeshNetwork_OnConnectedToRootChanged__DelegateSignature();
	MESHNETWORK_API UFunction* Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature();
// End Cross Module References
	void UMeshNetworkSubsystem::StaticRegisterNativesUMeshNetworkSubsystem()
	{
		UClass* Class = UMeshNetworkSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConnectedToRoot", &UMeshNetworkSubsystem::execGetConnectedToRoot },
			{ "GetGameServerNodeType", &UMeshNetworkSubsystem::execGetGameServerNodeType },
			{ "GetMeshNetworkNodeType", &UMeshNetworkSubsystem::execGetMeshNetworkNodeType },
			{ "GetMetadata", &UMeshNetworkSubsystem::execGetMetadata },
			{ "GetMetaDataWithKey", &UMeshNetworkSubsystem::execGetMetaDataWithKey },
			{ "SetMetaData", &UMeshNetworkSubsystem::execSetMetaData },
			{ "SetMetaDataWithKey", &UMeshNetworkSubsystem::execSetMetaDataWithKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics
	{
		struct MeshNetworkSubsystem_eventGetConnectedToRoot_Parms
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
	void Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshNetworkSubsystem_eventGetConnectedToRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshNetworkSubsystem_eventGetConnectedToRoot_Parms), &Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "GetConnectedToRoot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshNetworkSubsystem_eventGetConnectedToRoot_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics
	{
		struct MeshNetworkSubsystem_eventGetGameServerNodeType_Parms
		{
			EMeshNetworkNodeType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventGetGameServerNodeType_Parms, ReturnValue), Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "GetGameServerNodeType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshNetworkSubsystem_eventGetGameServerNodeType_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics
	{
		struct MeshNetworkSubsystem_eventGetMeshNetworkNodeType_Parms
		{
			EMeshNetworkNodeType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventGetMeshNetworkNodeType_Parms, ReturnValue), Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "GetMeshNetworkNodeType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshNetworkSubsystem_eventGetMeshNetworkNodeType_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics
	{
		struct MeshNetworkSubsystem_eventGetMetadata_Parms
		{
			FMeshMetaDataStruct MetaData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventGetMetadata_Parms, MetaData), Z_Construct_UScriptStruct_FMeshMetaDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "GetMetadata", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(MeshNetworkSubsystem_eventGetMetadata_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics
	{
		struct MeshNetworkSubsystem_eventGetMetaDataWithKey_Parms
		{
			FName Key;
			FMeshMetaDataStruct MetaData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshNetworkSubsystem_eventGetMetaDataWithKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshNetworkSubsystem_eventGetMetaDataWithKey_Parms), &Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventGetMetaDataWithKey_Parms, MetaData), Z_Construct_UScriptStruct_FMeshMetaDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Name, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventGetMetaDataWithKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "GetMetaDataWithKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(MeshNetworkSubsystem_eventGetMetaDataWithKey_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics
	{
		struct MeshNetworkSubsystem_eventSetMetaData_Parms
		{
			FMeshMetaDataStruct MetaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventSetMetaData_Parms, MetaData), Z_Construct_UScriptStruct_FMeshMetaDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "SetMetaData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(MeshNetworkSubsystem_eventSetMetaData_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics
	{
		struct MeshNetworkSubsystem_eventSetMetaDataWithKey_Parms
		{
			FName Key;
			FMeshMetaDataStruct MetaData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_MetaData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventSetMetaDataWithKey_Parms, MetaData), Z_Construct_UScriptStruct_FMeshMetaDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Name, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshNetworkSubsystem_eventSetMetaDataWithKey_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshNetworkSubsystem, "SetMetaDataWithKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420405, sizeof(MeshNetworkSubsystem_eventSetMetaDataWithKey_Parms), Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshNetworkSubsystem_NoRegister()
	{
		return UMeshNetworkSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMeshNetworkSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConnectedToRoot_MetaData[];
#endif
		static void NewProp_bConnectedToRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConnectedToRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerNodeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameServerNodeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameServerNodeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMeshMetaDataUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeshMetaDataUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameServerNodeTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameServerNodeTypeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConnectedToRootChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectedToRootChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMeshNodeTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeshNodeTypeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshNetworkSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshNetwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshNetworkSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_GetConnectedToRoot, "GetConnectedToRoot" }, // 633619035
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_GetGameServerNodeType, "GetGameServerNodeType" }, // 3937948547
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_GetMeshNetworkNodeType, "GetMeshNetworkNodeType" }, // 3705012369
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetadata, "GetMetadata" }, // 515775114
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_GetMetaDataWithKey, "GetMetaDataWithKey" }, // 2175410210
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaData, "SetMetaData" }, // 522828125
		{ &Z_Construct_UFunction_UMeshNetworkSubsystem_SetMetaDataWithKey, "SetMetaDataWithKey" }, // 3047305634
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeshNetworkSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot_SetBit(void* Obj)
	{
		((UMeshNetworkSubsystem*)Obj)->bConnectedToRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot = { UE4CodeGen_Private::EPropertyClass::Bool, "bConnectedToRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshNetworkSubsystem), &Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType = { UE4CodeGen_Private::EPropertyClass::Enum, "GameServerNodeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkSubsystem, GameServerNodeType), Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType = { UE4CodeGen_Private::EPropertyClass::Enum, "NodeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkSubsystem, NodeType), Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshMetaDataUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshMetaDataUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMeshMetaDataUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkSubsystem, OnMeshMetaDataUpdated), Z_Construct_UDelegateFunction_MeshNetwork_OnMeshMetaDataUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshMetaDataUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshMetaDataUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnGameServerNodeTypeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnGameServerNodeTypeChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnGameServerNodeTypeChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkSubsystem, OnGameServerNodeTypeChanged), Z_Construct_UDelegateFunction_MeshNetwork_OnGameServerNodeTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnGameServerNodeTypeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnGameServerNodeTypeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnConnectedToRootChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnConnectedToRootChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnConnectedToRootChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkSubsystem, OnConnectedToRootChanged), Z_Construct_UDelegateFunction_MeshNetwork_OnConnectedToRootChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnConnectedToRootChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnConnectedToRootChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshNodeTypeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MeshNetworkSubsystem" },
		{ "ModuleRelativePath", "Public/MeshNetworkSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshNodeTypeChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMeshNodeTypeChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080005, 1, nullptr, STRUCT_OFFSET(UMeshNetworkSubsystem, OnMeshNodeTypeChanged), Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshNodeTypeChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshNodeTypeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshNetworkSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_bConnectedToRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_GameServerNodeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_NodeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshMetaDataUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnGameServerNodeTypeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnConnectedToRootChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshNetworkSubsystem_Statics::NewProp_OnMeshNodeTypeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshNetworkSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshNetworkSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshNetworkSubsystem_Statics::ClassParams = {
		&UMeshNetworkSubsystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMeshNetworkSubsystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshNetworkSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshNetworkSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshNetworkSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshNetworkSubsystem, 2839510379);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshNetworkSubsystem(Z_Construct_UClass_UMeshNetworkSubsystem, &UMeshNetworkSubsystem::StaticClass, TEXT("/Script/MeshNetwork"), TEXT("UMeshNetworkSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshNetworkSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
