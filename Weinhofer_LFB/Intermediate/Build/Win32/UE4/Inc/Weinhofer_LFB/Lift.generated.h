// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARobot;
class ATargetPoint;
#ifdef WEINHOFER_LFB_Lift_generated_h
#error "Lift.generated.h already included, missing '#pragma once' in Lift.h"
#endif
#define WEINHOFER_LFB_Lift_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasOccupant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasOccupant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismissOccupant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DismissOccupant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsUnfolded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsUnfolded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsFolded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsFolded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFolded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFolded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Deactivate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeregisterWithLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeregisterWithLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWithLift) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithLift(Z_Param_NewRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLiftWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetLiftWaypoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasOccupant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasOccupant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismissOccupant) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DismissOccupant(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsUnfolded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsUnfolded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsFolded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsFolded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFolded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsFolded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeactivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Deactivate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Activate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeregisterWithLift) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeregisterWithLift(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterWithLift) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_NewRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithLift(Z_Param_NewRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLiftWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetLiftWaypoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_EVENT_PARMS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALift(); \
	friend struct Z_Construct_UClass_ALift_Statics; \
public: \
	DECLARE_CLASS(ALift, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ALift)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALift(); \
	friend struct Z_Construct_UClass_ALift_Statics; \
public: \
	DECLARE_CLASS(ALift, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ALift)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALift(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALift) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALift); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALift); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALift(ALift&&); \
	NO_API ALift(const ALift&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALift(ALift&&); \
	NO_API ALift(const ALift&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALift); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALift); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALift)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LiftMesh() { return STRUCT_OFFSET(ALift, LiftMesh); } \
	FORCEINLINE static uint32 __PPO__LiftWaypoint() { return STRUCT_OFFSET(ALift, LiftWaypoint); } \
	FORCEINLINE static uint32 __PPO__Robot() { return STRUCT_OFFSET(ALift, Robot); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_9_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ALift>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Lift_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
