// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicCMSUIFramework/Public/EpicCMSScreenBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicCMSScreenBase() {}
// Cross Module References
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSScreenBase_NoRegister();
	EPICCMSUIFRAMEWORK_API UClass* Z_Construct_UClass_UEpicCMSScreenBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatablePanel();
	UPackage* Z_Construct_UPackage__Script_EpicCMSUIFramework();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UEpicCMSScreenBase::StaticRegisterNativesUEpicCMSScreenBase()
	{
	}
	UClass* Z_Construct_UClass_UEpicCMSScreenBase_NoRegister()
	{
		return UEpicCMSScreenBase::StaticClass();
	}
	struct Z_Construct_UClass_UEpicCMSScreenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutTypeToLayoutClassDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LayoutTypeToLayoutClassDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutErrorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LayoutErrorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileTypeToTileClassDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TileTypeToTileClassDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSetFieldName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TileSetFieldName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicCMSScreenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatablePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicCMSUIFramework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSScreenBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicCMSScreenBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EpicCMSScreenBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutTypeToLayoutClassDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSScreenBase" },
		{ "ModuleRelativePath", "Public/EpicCMSScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutTypeToLayoutClassDataTable = { UE4CodeGen_Private::EPropertyClass::SoftObject, "LayoutTypeToLayoutClassDataTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSScreenBase, LayoutTypeToLayoutClassDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutTypeToLayoutClassDataTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutTypeToLayoutClassDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutErrorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSScreenBase" },
		{ "ModuleRelativePath", "Public/EpicCMSScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutErrorClass = { UE4CodeGen_Private::EPropertyClass::SoftClass, "LayoutErrorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSScreenBase, LayoutErrorClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutErrorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutErrorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileTypeToTileClassDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSScreenBase" },
		{ "ModuleRelativePath", "Public/EpicCMSScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileTypeToTileClassDataTable = { UE4CodeGen_Private::EPropertyClass::SoftObject, "TileTypeToTileClassDataTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSScreenBase, TileTypeToTileClassDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileTypeToTileClassDataTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileTypeToTileClassDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileSetFieldName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EpicCMSScreenBase" },
		{ "ModuleRelativePath", "Public/EpicCMSScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileSetFieldName = { UE4CodeGen_Private::EPropertyClass::Str, "TileSetFieldName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEpicCMSScreenBase, TileSetFieldName), METADATA_PARAMS(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileSetFieldName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileSetFieldName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicCMSScreenBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutTypeToLayoutClassDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_LayoutErrorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileTypeToTileClassDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicCMSScreenBase_Statics::NewProp_TileSetFieldName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicCMSScreenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicCMSScreenBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicCMSScreenBase_Statics::ClassParams = {
		&UEpicCMSScreenBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		nullptr, 0,
		Z_Construct_UClass_UEpicCMSScreenBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSScreenBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicCMSScreenBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicCMSScreenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicCMSScreenBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicCMSScreenBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicCMSScreenBase, 3879302287);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicCMSScreenBase(Z_Construct_UClass_UEpicCMSScreenBase, &UEpicCMSScreenBase::StaticClass, TEXT("/Script/EpicCMSUIFramework"), TEXT("UEpicCMSScreenBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicCMSScreenBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
