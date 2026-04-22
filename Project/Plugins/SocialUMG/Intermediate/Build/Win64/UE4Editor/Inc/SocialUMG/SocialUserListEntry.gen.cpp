// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialUMG/Public/SocialUserListEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialUserListEntry() {}
// Cross Module References
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserListEntry_NoRegister();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialUserListEntry();
	SOCIALUMG_API UClass* Z_Construct_UClass_USocialListEntry();
	UPackage* Z_Construct_UPackage__Script_SocialUMG();
	SOCIALUMG_API UFunction* Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged();
	SOCIALUMG_API UEnum* Z_Construct_UEnum_SocialUMG_EOnlineStatus();
	PARTY_API UClass* Z_Construct_UClass_USocialUser_NoRegister();
// End Cross Module References
	static FName NAME_USocialUserListEntry_OnUserPresenceChanged = FName(TEXT("OnUserPresenceChanged"));
	void USocialUserListEntry::OnUserPresenceChanged(EOnlineStatus OnlineStatus)
	{
		SocialUserListEntry_eventOnUserPresenceChanged_Parms Parms;
		Parms.OnlineStatus=OnlineStatus;
		ProcessEvent(FindFunctionChecked(NAME_USocialUserListEntry_OnUserPresenceChanged),&Parms);
	}
	void USocialUserListEntry::StaticRegisterNativesUSocialUserListEntry()
	{
	}
	struct Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OnlineStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OnlineStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::NewProp_OnlineStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "OnlineStatus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SocialUserListEntry_eventOnUserPresenceChanged_Parms, OnlineStatus), Z_Construct_UEnum_SocialUMG_EOnlineStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::NewProp_OnlineStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::NewProp_OnlineStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::NewProp_OnlineStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialUserListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USocialUserListEntry, "OnUserPresenceChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C080800, sizeof(SocialUserListEntry_eventOnUserPresenceChanged_Parms), Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USocialUserListEntry_NoRegister()
	{
		return USocialUserListEntry::StaticClass();
	}
	struct Z_Construct_UClass_USocialUserListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocialUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocialUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialUserListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USocialListEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USocialUserListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USocialUserListEntry_OnUserPresenceChanged, "OnUserPresenceChanged" }, // 1241958891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserListEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SocialUserListEntry.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SocialUserListEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialUserListEntry_Statics::NewProp_SocialUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SocialUserListEntry" },
		{ "ModuleRelativePath", "Public/SocialUserListEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USocialUserListEntry_Statics::NewProp_SocialUser = { UE4CodeGen_Private::EPropertyClass::Object, "SocialUser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(USocialUserListEntry, SocialUser), Z_Construct_UClass_USocialUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialUserListEntry_Statics::NewProp_SocialUser_MetaData, ARRAY_COUNT(Z_Construct_UClass_USocialUserListEntry_Statics::NewProp_SocialUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialUserListEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialUserListEntry_Statics::NewProp_SocialUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialUserListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialUserListEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USocialUserListEntry_Statics::ClassParams = {
		&USocialUserListEntry::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USocialUserListEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USocialUserListEntry_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USocialUserListEntry_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USocialUserListEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialUserListEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USocialUserListEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USocialUserListEntry, 4209958395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USocialUserListEntry(Z_Construct_UClass_USocialUserListEntry, &USocialUserListEntry::StaticClass, TEXT("/Script/SocialUMG"), TEXT("USocialUserListEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialUserListEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
