// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWare;
class ARobot;
class ATargetPoint;
enum class EWareType : uint8;
#ifdef WEINHOFER_LFB_Machine_generated_h
#error "Machine.generated.h already included, missing '#pragma once' in Machine.h"
#endif
#define WEINHOFER_LFB_Machine_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWare) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWare**)Z_Param__Result=P_THIS->GetCurrentWare(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentWare) \
	{ \
		P_GET_OBJECT(AWare,Z_Param_NewWare); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentWare(Z_Param_NewWare); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelCollection) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_ExCollector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelCollection(Z_Param_ExCollector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectWare) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_Collector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWare**)Z_Param__Result=P_THIS->CollectWare(Z_Param_Collector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterCollectionWorkerRobot) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewCollectionWorkerRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterCollectionWorkerRobot(Z_Param_NewCollectionWorkerRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasWareOpenForCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasWareOpenForCollection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSupplied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNewSupplyWorkerRobot) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewSupplyWorkerRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterNewSupplyWorkerRobot(Z_Param_NewSupplyWorkerRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNewProductionWorkerRobot) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewProductionWorkerRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterNewProductionWorkerRobot(Z_Param_NewProductionWorkerRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWareToCollect) \
	{ \
		P_GET_UBOOL(Z_Param_WareState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWareToCollect(Z_Param_WareState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseOneMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseOneMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWareToCollect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWareToCollect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWareClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AWare> *)Z_Param__Result=P_THIS->GetWareClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWareCollectionWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWareCollectionWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialDeliveryWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetMaterialDeliveryWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkstationWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWorkstationWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProducesWare) \
	{ \
		P_GET_ENUM(EWareType,Z_Param_WareType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ProducesWare(EWareType(Z_Param_WareType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducedWareType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWareType*)Z_Param__Result=P_THIS->GetProducedWareType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMachineNr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMachineNr(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWare) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWare**)Z_Param__Result=P_THIS->GetCurrentWare(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentWare) \
	{ \
		P_GET_OBJECT(AWare,Z_Param_NewWare); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentWare(Z_Param_NewWare); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelCollection) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_ExCollector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelCollection(Z_Param_ExCollector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectWare) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_Collector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWare**)Z_Param__Result=P_THIS->CollectWare(Z_Param_Collector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterCollectionWorkerRobot) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewCollectionWorkerRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterCollectionWorkerRobot(Z_Param_NewCollectionWorkerRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasWareOpenForCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasWareOpenForCollection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupplied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetSupplied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNewSupplyWorkerRobot) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewSupplyWorkerRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterNewSupplyWorkerRobot(Z_Param_NewSupplyWorkerRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterNewProductionWorkerRobot) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewProductionWorkerRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterNewProductionWorkerRobot(Z_Param_NewProductionWorkerRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWareToCollect) \
	{ \
		P_GET_UBOOL(Z_Param_WareState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWareToCollect(Z_Param_WareState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseOneMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseOneMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasMaterial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasMaterial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWareToCollect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWareToCollect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWareClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AWare> *)Z_Param__Result=P_THIS->GetWareClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProductionProgress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetProductionProgress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWareCollectionWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWareCollectionWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialDeliveryWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetMaterialDeliveryWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorkstationWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWorkstationWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProducesWare) \
	{ \
		P_GET_ENUM(EWareType,Z_Param_WareType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ProducesWare(EWareType(Z_Param_WareType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProducedWareType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWareType*)Z_Param__Result=P_THIS->GetProducedWareType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMachineNr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMachineNr(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_EVENT_PARMS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMachine(); \
	friend struct Z_Construct_UClass_AMachine_Statics; \
public: \
	DECLARE_CLASS(AMachine, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AMachine)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMachine(); \
	friend struct Z_Construct_UClass_AMachine_Statics; \
public: \
	DECLARE_CLASS(AMachine, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AMachine)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMachine(AMachine&&); \
	NO_API AMachine(const AMachine&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMachine(AMachine&&); \
	NO_API AMachine(const AMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMachine)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MachineBodyMesh() { return STRUCT_OFFSET(AMachine, MachineBodyMesh); } \
	FORCEINLINE static uint32 __PPO__MachineNr() { return STRUCT_OFFSET(AMachine, MachineNr); } \
	FORCEINLINE static uint32 __PPO__ProducedWareType() { return STRUCT_OFFSET(AMachine, ProducedWareType); } \
	FORCEINLINE static uint32 __PPO__WorkstationWaypoint() { return STRUCT_OFFSET(AMachine, WorkstationWaypoint); } \
	FORCEINLINE static uint32 __PPO__MaterialDeliveryWaypoint() { return STRUCT_OFFSET(AMachine, MaterialDeliveryWaypoint); } \
	FORCEINLINE static uint32 __PPO__WareCollectionWaypoint() { return STRUCT_OFFSET(AMachine, WareCollectionWaypoint); } \
	FORCEINLINE static uint32 __PPO__ProductionWorkerRobot() { return STRUCT_OFFSET(AMachine, ProductionWorkerRobot); } \
	FORCEINLINE static uint32 __PPO__ProductionProgress() { return STRUCT_OFFSET(AMachine, ProductionProgress); } \
	FORCEINLINE static uint32 __PPO__WareToCollect() { return STRUCT_OFFSET(AMachine, WareToCollect); } \
	FORCEINLINE static uint32 __PPO__NrOfStoredMaterial() { return STRUCT_OFFSET(AMachine, NrOfStoredMaterial); } \
	FORCEINLINE static uint32 __PPO__CurrentWare() { return STRUCT_OFFSET(AMachine, CurrentWare); } \
	FORCEINLINE static uint32 __PPO__SupplyWorkerRobot() { return STRUCT_OFFSET(AMachine, SupplyWorkerRobot); } \
	FORCEINLINE static uint32 __PPO__WareCollector() { return STRUCT_OFFSET(AMachine, WareCollector); } \
	FORCEINLINE static uint32 __PPO__WareClass() { return STRUCT_OFFSET(AMachine, WareClass); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_11_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class AMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Machine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
