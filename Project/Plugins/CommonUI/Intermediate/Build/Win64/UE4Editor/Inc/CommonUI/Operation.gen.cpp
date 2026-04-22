// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI/Public/Operation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperation() {}
// Cross Module References
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FOperation();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatablePanel_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EOperation();
// End Cross Module References
class UScriptStruct* FOperation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMMONUI_API uint32 Get_Z_Construct_UScriptStruct_FOperation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperation, Z_Construct_UPackage__Script_CommonUI(), TEXT("Operation"), sizeof(FOperation), Get_Z_Construct_UScriptStruct_FOperation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOperation(FOperation::StaticStruct, TEXT("/Script/CommonUI"), TEXT("Operation"), false, nullptr, nullptr);
static struct FScriptStruct_CommonUI_StaticRegisterNativesFOperation
{
	FScriptStruct_CommonUI_StaticRegisterNativesFOperation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Operation")),new UScriptStruct::TCppStructOps<FOperation>);
	}
} ScriptStruct_CommonUI_StaticRegisterNativesFOperation;
	struct Z_Construct_UScriptStruct_FOperation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutroPanelBelow_MetaData[];
#endif
		static void NewProp_bOutroPanelBelow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutroPanelBelow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActivatePanel_MetaData[];
#endif
		static void NewProp_bActivatePanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActivatePanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIntroPanel_MetaData[];
#endif
		static void NewProp_bIntroPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIntroPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Panel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Operation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Operation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow_SetBit(void* Obj)
	{
		((FOperation*)Obj)->bOutroPanelBelow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutroPanelBelow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FOperation), &Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Operation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel_SetBit(void* Obj)
	{
		((FOperation*)Obj)->bActivatePanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel = { UE4CodeGen_Private::EPropertyClass::Bool, "bActivatePanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FOperation), &Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Operation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel_SetBit(void* Obj)
	{
		((FOperation*)Obj)->bIntroPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel = { UE4CodeGen_Private::EPropertyClass::Bool, "bIntroPanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FOperation), &Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Operation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Operation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Panel = { UE4CodeGen_Private::EPropertyClass::Object, "Panel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001200000008000d, 1, nullptr, STRUCT_OFFSET(FOperation, Panel), Z_Construct_UClass_UCommonActivatablePanel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Panel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Panel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Operation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation = { UE4CodeGen_Private::EPropertyClass::Enum, "Operation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOperation, Operation), Z_Construct_UEnum_CommonUI_EOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bOutroPanelBelow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bActivatePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperation_Statics::NewProp_bIntroPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Panel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperation_Statics::NewProp_Operation_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"Operation",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FOperation),
		alignof(FOperation),
		Z_Construct_UScriptStruct_FOperation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOperation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOperation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOperation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CommonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Operation"), sizeof(FOperation), Get_Z_Construct_UScriptStruct_FOperation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOperation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOperation_CRC() { return 2379296918U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
