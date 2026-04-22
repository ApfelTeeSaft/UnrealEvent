// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshNetwork/Public/OnMeshNodeTypeChangedDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnMeshNodeTypeChangedDelegate() {}
// Cross Module References
	MESHNETWORK_API UFunction* Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MeshNetwork();
	MESHNETWORK_API UEnum* Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics
	{
		struct _Script_MeshNetwork_eventOnMeshNodeTypeChanged_Parms
		{
			EMeshNetworkNodeType NodeType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NodeType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::NewProp_NodeType = { UE4CodeGen_Private::EPropertyClass::Enum, "NodeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_MeshNetwork_eventOnMeshNodeTypeChanged_Parms, NodeType), Z_Construct_UEnum_MeshNetwork_EMeshNetworkNodeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::NewProp_NodeType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::NewProp_NodeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::NewProp_NodeType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnMeshNodeTypeChangedDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MeshNetwork, "OnMeshNodeTypeChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04130000, sizeof(_Script_MeshNetwork_eventOnMeshNodeTypeChanged_Parms), Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MeshNetwork_OnMeshNodeTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
