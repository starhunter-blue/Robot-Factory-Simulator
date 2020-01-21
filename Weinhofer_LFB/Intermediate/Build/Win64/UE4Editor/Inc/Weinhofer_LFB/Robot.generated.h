// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWareGrabber;
class AMachine;
class AMachineMaterial;
class ADoorQueueSlot;
class URobotAgenda;
enum class ERobotState : uint8;
class ALift;
class ADoorQueue;
class AActor;
#ifdef WEINHOFER_LFB_Robot_generated_h
#error "Robot.generated.h already included, missing '#pragma once' in Robot.h"
#endif
#define WEINHOFER_LFB_Robot_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeaveLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWithLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDoorSlotOfLeaving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyDoorSlotOfLeaving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeliverWare) \
	{ \
		P_GET_OBJECT(AWareGrabber,Z_Param_AtWareGrabber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeliverWare(Z_Param_AtWareGrabber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectWare) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CollectWare(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindMachineToCollectFrom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindMachineToCollectFrom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupplyMachine) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SupplyMachine(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectMaterial) \
	{ \
		P_GET_OBJECT(AMachineMaterial,Z_Param_MaterialToCollect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectMaterial(Z_Param_MaterialToCollect); \
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
	DECLARE_FUNCTION(execSendIntoOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendIntoOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckInAtSlot) \
	{ \
		P_GET_OBJECT(ADoorQueueSlot,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckInAtSlot(Z_Param_Slot); \
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
	DECLARE_FUNCTION(execSetIdling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIdling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasBeenInOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasBeenInOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasNotBeenInOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasNotBeenInOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasAlreadyInOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasAlreadyInOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveOverlordOrder) \
	{ \
		P_GET_OBJECT(URobotAgenda,Z_Param_NewAgenda); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveOverlordOrder(Z_Param_NewAgenda); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBehaviorState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERobotState*)Z_Param__Result=P_THIS->GetBehaviorState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAgenda) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URobotAgenda**)Z_Param__Result=P_THIS->GetAgenda(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotOnLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNotOnLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALift**)Z_Param__Result=P_THIS->GetLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQueueSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorQueueSlot**)Z_Param__Result=P_THIS->GetQueueSlot(); \
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
	DECLARE_FUNCTION(execGetCarriedWare) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCarriedWare(); \
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
	DECLARE_FUNCTION(execDestroyCarriedStuff) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyCarriedStuff(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCarriedMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCarriedMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumber) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasNumber(Z_Param_Number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRobotNr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRobotNr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRequestFulfilled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRequestFulfilled(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeaveLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LeaveLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWithLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDoorSlotOfLeaving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyDoorSlotOfLeaving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeliverWare) \
	{ \
		P_GET_OBJECT(AWareGrabber,Z_Param_AtWareGrabber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeliverWare(Z_Param_AtWareGrabber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectWare) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CollectWare(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindMachineToCollectFrom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindMachineToCollectFrom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSupplyMachine) \
	{ \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SupplyMachine(Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectMaterial) \
	{ \
		P_GET_OBJECT(AMachineMaterial,Z_Param_MaterialToCollect); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectMaterial(Z_Param_MaterialToCollect); \
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
	DECLARE_FUNCTION(execSendIntoOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendIntoOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckInAtSlot) \
	{ \
		P_GET_OBJECT(ADoorQueueSlot,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckInAtSlot(Z_Param_Slot); \
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
	DECLARE_FUNCTION(execSetIdling) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIdling(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasBeenInOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasBeenInOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHasNotBeenInOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHasNotBeenInOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasAlreadyInOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->WasAlreadyInOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveOverlordOrder) \
	{ \
		P_GET_OBJECT(URobotAgenda,Z_Param_NewAgenda); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveOverlordOrder(Z_Param_NewAgenda); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBehaviorState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERobotState*)Z_Param__Result=P_THIS->GetBehaviorState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAgenda) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URobotAgenda**)Z_Param__Result=P_THIS->GetAgenda(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOnLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOnLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNotOnLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNotOnLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOnLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOnLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALift**)Z_Param__Result=P_THIS->GetLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQueueSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorQueueSlot**)Z_Param__Result=P_THIS->GetQueueSlot(); \
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
	DECLARE_FUNCTION(execGetCarriedWare) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCarriedWare(); \
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
	DECLARE_FUNCTION(execDestroyCarriedStuff) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyCarriedStuff(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCarriedMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetCarriedMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNumber) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasNumber(Z_Param_Number); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRobotNr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRobotNr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRequestFulfilled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRequestFulfilled(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_EVENT_PARMS \
	struct Robot_eventDropOffWare_Parms \
	{ \
		AWareGrabber* WareGrabber; \
	};


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobot(); \
	friend struct Z_Construct_UClass_ARobot_Statics; \
public: \
	DECLARE_CLASS(ARobot, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobot)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARobot(); \
	friend struct Z_Construct_UClass_ARobot_Statics; \
public: \
	DECLARE_CLASS(ARobot, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobot)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobot(ARobot&&); \
	NO_API ARobot(const ARobot&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobot(ARobot&&); \
	NO_API ARobot(const ARobot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobot)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RobotNr() { return STRUCT_OFFSET(ARobot, RobotNr); } \
	FORCEINLINE static uint32 __PPO__CarriedMaterial() { return STRUCT_OFFSET(ARobot, CarriedMaterial); } \
	FORCEINLINE static uint32 __PPO__CarriedWare() { return STRUCT_OFFSET(ARobot, CarriedWare); } \
	FORCEINLINE static uint32 __PPO__DoorQueueSlot() { return STRUCT_OFFSET(ARobot, DoorQueueSlot); } \
	FORCEINLINE static uint32 __PPO__Lift() { return STRUCT_OFFSET(ARobot, Lift); } \
	FORCEINLINE static uint32 __PPO__OnLift() { return STRUCT_OFFSET(ARobot, OnLift); } \
	FORCEINLINE static uint32 __PPO__Agenda() { return STRUCT_OFFSET(ARobot, Agenda); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_11_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ARobot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Robot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
