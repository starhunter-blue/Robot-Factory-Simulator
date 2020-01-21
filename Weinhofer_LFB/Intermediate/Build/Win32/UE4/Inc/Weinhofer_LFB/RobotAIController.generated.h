// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMachine;
class ADoorQueue;
class AActor;
enum class ERobotState : uint8;
class UWaypointCollection;
#ifdef WEINHOFER_LFB_RobotAIController_generated_h
#error "RobotAIController.generated.h already included, missing '#pragma once' in RobotAIController.h"
#endif
#define WEINHOFER_LFB_RobotAIController_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindMachineToCollectFrom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindMachineToCollectFrom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveCallToOfficeCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveCallToOfficeCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateCollectCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateCollectCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveCollectWorkCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveCollectWorkCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateSupplyWorkCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateSupplyWorkCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveSupplyWorkCommand) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveSupplyWorkCommand(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateProductionWorkCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateProductionWorkCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveProductionWorkCommand) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveProductionWorkCommand(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStateAutonomous) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateAutonomous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIdling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIdling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDoorQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorQueue**)Z_Param__Result=P_THIS->GetDoorQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMachineToCollectFrom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMachineToCollectFrom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWareGrabber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetWareGrabber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialDispenser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetMaterialDispenser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkTargetMachine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetWorkTargetMachine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkProductionTargetWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetWorkProductionTargetWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERobotState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaypointCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWaypointCollection**)Z_Param__Result=P_THIS->GetWaypointCollection(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindMachineToCollectFrom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindMachineToCollectFrom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveCallToOfficeCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveCallToOfficeCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateCollectCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateCollectCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveCollectWorkCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveCollectWorkCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateSupplyWorkCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateSupplyWorkCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveSupplyWorkCommand) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveSupplyWorkCommand(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTerminateProductionWorkCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TerminateProductionWorkCommand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveProductionWorkCommand) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveProductionWorkCommand(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStateAutonomous) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStateAutonomous(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIdling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIdling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDoorQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorQueue**)Z_Param__Result=P_THIS->GetDoorQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMachineToCollectFrom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMachineToCollectFrom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWareGrabber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetWareGrabber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialDispenser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetMaterialDispenser(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkTargetMachine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetWorkTargetMachine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkProductionTargetWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetWorkProductionTargetWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERobotState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaypointCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWaypointCollection**)Z_Param__Result=P_THIS->GetWaypointCollection(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_EVENT_PARMS
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotAIController(); \
	friend struct Z_Construct_UClass_ARobotAIController_Statics; \
public: \
	DECLARE_CLASS(ARobotAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobotAIController)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_INCLASS \
private: \
	static void StaticRegisterNativesARobotAIController(); \
	friend struct Z_Construct_UClass_ARobotAIController_Statics; \
public: \
	DECLARE_CLASS(ARobotAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobotAIController)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobotAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobotAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotAIController(ARobotAIController&&); \
	NO_API ARobotAIController(const ARobotAIController&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotAIController(ARobotAIController&&); \
	NO_API ARobotAIController(const ARobotAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobotAIController)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(ARobotAIController, Waypoints); } \
	FORCEINLINE static uint32 __PPO__RobotState() { return STRUCT_OFFSET(ARobotAIController, RobotState); } \
	FORCEINLINE static uint32 __PPO__WorkTargetMachine() { return STRUCT_OFFSET(ARobotAIController, WorkTargetMachine); } \
	FORCEINLINE static uint32 __PPO__MaterialDispenser() { return STRUCT_OFFSET(ARobotAIController, MaterialDispenser); } \
	FORCEINLINE static uint32 __PPO__WareGrabber() { return STRUCT_OFFSET(ARobotAIController, WareGrabber); } \
	FORCEINLINE static uint32 __PPO__Machines() { return STRUCT_OFFSET(ARobotAIController, Machines); } \
	FORCEINLINE static uint32 __PPO__NextMachineToCheckForWare() { return STRUCT_OFFSET(ARobotAIController, NextMachineToCheckForWare); } \
	FORCEINLINE static uint32 __PPO__DoorQueue() { return STRUCT_OFFSET(ARobotAIController, DoorQueue); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_26_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ARobotAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_RobotAIController_h


#define FOREACH_ENUM_EROBOTSTATE(op) \
	op(ERobotState::RSE_UNSET) \
	op(ERobotState::RSE_Autonomous) \
	op(ERobotState::RSE_Idle) \
	op(ERobotState::RSE_Producing) \
	op(ERobotState::RSE_Supplying) \
	op(ERobotState::RSE_Collecting) \
	op(ERobotState::RSE_CalledToOffice) 

enum class ERobotState : uint8;
template<> WEINHOFER_LFB_API UEnum* StaticEnum<ERobotState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
