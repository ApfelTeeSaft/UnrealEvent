// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHNETWORK_OnConnectedToRootChangedDelegate_generated_h
#error "OnConnectedToRootChangedDelegate.generated.h already included, missing '#pragma once' in OnConnectedToRootChangedDelegate.h"
#endif
#define MESHNETWORK_OnConnectedToRootChangedDelegate_generated_h

#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_OnConnectedToRootChangedDelegate_h_5_DELEGATE \
struct _Script_MeshNetwork_eventOnConnectedToRootChanged_Parms \
{ \
	bool bConnected; \
}; \
static inline void FOnConnectedToRootChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedToRootChanged, bool bConnected) \
{ \
	_Script_MeshNetwork_eventOnConnectedToRootChanged_Parms Parms; \
	Parms.bConnected=bConnected ? true : false; \
	OnConnectedToRootChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_OnConnectedToRootChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
