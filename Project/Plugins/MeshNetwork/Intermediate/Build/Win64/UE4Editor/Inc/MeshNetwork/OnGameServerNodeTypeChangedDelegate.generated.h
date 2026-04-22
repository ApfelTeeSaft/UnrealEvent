// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMeshNetworkNodeType : uint8;
#ifdef MESHNETWORK_OnGameServerNodeTypeChangedDelegate_generated_h
#error "OnGameServerNodeTypeChangedDelegate.generated.h already included, missing '#pragma once' in OnGameServerNodeTypeChangedDelegate.h"
#endif
#define MESHNETWORK_OnGameServerNodeTypeChangedDelegate_generated_h

#define FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_OnGameServerNodeTypeChangedDelegate_h_6_DELEGATE \
struct _Script_MeshNetwork_eventOnGameServerNodeTypeChanged_Parms \
{ \
	EMeshNetworkNodeType NodeType; \
}; \
static inline void FOnGameServerNodeTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameServerNodeTypeChanged, EMeshNetworkNodeType NodeType) \
{ \
	_Script_MeshNetwork_eventOnGameServerNodeTypeChanged_Parms Parms; \
	Parms.NodeType=NodeType; \
	OnGameServerNodeTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FNGameProj_4_22_Plugins_MeshNetwork_Source_MeshNetwork_Public_OnGameServerNodeTypeChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
