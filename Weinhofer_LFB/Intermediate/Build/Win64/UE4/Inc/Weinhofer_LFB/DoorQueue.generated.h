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
#ifdef WEINHOFER_LFB_DoorQueue_generated_h
#error "DoorQueue.generated.h already included, missing '#pragma once' in DoorQueue.h"
#endif
#define WEINHOFER_LFB_DoorQueue_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNrOfWaitingRobots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfWaitingRobots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasRobot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasRobot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetFirstRobotInQueueIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LetFirstRobotInQueueIn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstOpenSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorQueueSlot**)Z_Param__Result=P_THIS->GetFirstOpenSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckInAtSlot) \
	{ \
		P_GET_OBJECT(ADoorQueueSlot,Z_Param_Slot); \
		P_GET_OBJECT(ARobot,Z_Param_Robot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckInAtSlot(Z_Param_Slot,Z_Param_Robot); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNrOfWaitingRobots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfWaitingRobots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasRobot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasRobot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetFirstRobotInQueueIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LetFirstRobotInQueueIn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstOpenSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ADoorQueueSlot**)Z_Param__Result=P_THIS->GetFirstOpenSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckInAtSlot) \
	{ \
		P_GET_OBJECT(ADoorQueueSlot,Z_Param_Slot); \
		P_GET_OBJECT(ARobot,Z_Param_Robot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckInAtSlot(Z_Param_Slot,Z_Param_Robot); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoorQueue(); \
	friend struct Z_Construct_UClass_ADoorQueue_Statics; \
public: \
	DECLARE_CLASS(ADoorQueue, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ADoorQueue)


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADoorQueue(); \
	friend struct Z_Construct_UClass_ADoorQueue_Statics; \
public: \
	DECLARE_CLASS(ADoorQueue, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ADoorQueue)


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoorQueue(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoorQueue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorQueue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorQueue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorQueue(ADoorQueue&&); \
	NO_API ADoorQueue(const ADoorQueue&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoorQueue(ADoorQueue&&); \
	NO_API ADoorQueue(const ADoorQueue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoorQueue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoorQueue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoorQueue)


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirstInLine() { return STRUCT_OFFSET(ADoorQueue, FirstInLine); } \
	FORCEINLINE static uint32 __PPO__SecondInLine() { return STRUCT_OFFSET(ADoorQueue, SecondInLine); } \
	FORCEINLINE static uint32 __PPO__ThirdInLine() { return STRUCT_OFFSET(ADoorQueue, ThirdInLine); } \
	FORCEINLINE static uint32 __PPO__FourthInLine() { return STRUCT_OFFSET(ADoorQueue, FourthInLine); } \
	FORCEINLINE static uint32 __PPO__FifthInLine() { return STRUCT_OFFSET(ADoorQueue, FifthInLine); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_10_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ADoorQueue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_DoorQueue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
