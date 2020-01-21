// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEINHOFER_LFB_RobotDoor_generated_h
#error "RobotDoor.generated.h already included, missing '#pragma once' in RobotDoor.h"
#endif
#define WEINHOFER_LFB_RobotDoor_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueueHasRobot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->QueueHasRobot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetRobotIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LetRobotIn(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQueueHasRobot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->QueueHasRobot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetRobotIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LetRobotIn(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_EVENT_PARMS
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotDoor(); \
	friend struct Z_Construct_UClass_ARobotDoor_Statics; \
public: \
	DECLARE_CLASS(ARobotDoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobotDoor)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARobotDoor(); \
	friend struct Z_Construct_UClass_ARobotDoor_Statics; \
public: \
	DECLARE_CLASS(ARobotDoor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobotDoor)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobotDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobotDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotDoor(ARobotDoor&&); \
	NO_API ARobotDoor(const ARobotDoor&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotDoor(ARobotDoor&&); \
	NO_API ARobotDoor(const ARobotDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobotDoor)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoorFrame() { return STRUCT_OFFSET(ARobotDoor, DoorFrame); } \
	FORCEINLINE static uint32 __PPO__Door() { return STRUCT_OFFSET(ARobotDoor, Door); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_9_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ARobotDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_RobotDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
