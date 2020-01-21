// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADoorQueueSlot;
class ARobot;
class ATargetPoint;
#ifdef WEINHOFER_LFB_DoorQueueSlot_generated_h
#error "DoorQueueSlot.generated.h already included, missing '#pragma once' in DoorQueueSlot.h"
#endif
#define WEINHOFER_LFB_DoorQueueSlot_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOccupantIsLeaving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OccupantIsLeaving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOccupantIntoOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendOccupantIntoOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotNr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotNr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCloserToDoorThan) \
	{ \
		P_GET_OBJECT(ADoorQueueSlot,Z_Param_OtherSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCloserToDoorThan(Z_Param_OtherSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterOccupant) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewOccupant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterOccupant(Z_Param_NewOccupant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetTargetPoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOccupantIsLeaving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OccupantIsLeaving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOccupantIntoOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendOccupantIntoOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSlotNr) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSlotNr(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCloserToDoorThan) \
	{ \
		P_GET_OBJECT(ADoorQueueSlot,Z_Param_OtherSlot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCloserToDoorThan(Z_Param_OtherSlot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterOccupant) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewOccupant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterOccupant(Z_Param_NewOccupant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetPoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetTargetPoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorQueueSlot(); \
	friend struct Z_Construct_UClass_ADoorQueueSlot_Statics; \
public: \
	DECLARE_CLASS(ADoorQueueSlot, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ADoorQueueSlot)


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADoorQueueSlot(); \
	friend struct Z_Construct_UClass_ADoorQueueSlot_Statics; \
public: \
	DECLARE_CLASS(ADoorQueueSlot, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ADoorQueueSlot)


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorQueueSlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorQueueSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorQueueSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorQueueSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorQueueSlot(ADoorQueueSlot&&); \
	NO_API ADoorQueueSlot(const ADoorQueueSlot&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorQueueSlot(ADoorQueueSlot&&); \
	NO_API ADoorQueueSlot(const ADoorQueueSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorQueueSlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorQueueSlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorQueueSlot)


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetPoint() { return STRUCT_OFFSET(ADoorQueueSlot, TargetPoint); } \
	FORCEINLINE static uint32 __PPO__Occupant() { return STRUCT_OFFSET(ADoorQueueSlot, Occupant); } \
	FORCEINLINE static uint32 __PPO__SlotNr() { return STRUCT_OFFSET(ADoorQueueSlot, SlotNr); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_10_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ADoorQueueSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueueSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
