// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMachine;
enum class EWareType : uint8;
class URobotAgenda;
#ifdef WEINHOFER_LFB_Workscreen_generated_h
#error "Workscreen.generated.h already included, missing '#pragma once' in Workscreen.h"
#endif
#define WEINHOFER_LFB_Workscreen_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQueueHasRobot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->QueueHasRobot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismissRobotFromOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DismissRobotFromOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetRobotIntoOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LetRobotIntoOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCallToOfficeOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendCallToOfficeOrder(Z_Param_TargetRobotNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCollectOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendCollectOrder(Z_Param_TargetRobotNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSupplyOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSupplyOrder(Z_Param_TargetRobotNr,Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendProductionOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_GET_ENUM(EWareType,Z_Param_WareType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendProductionOrder(Z_Param_TargetRobotNr,EWareType(Z_Param_WareType)); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQueueHasRobot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->QueueHasRobot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDismissRobotFromOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DismissRobotFromOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLetRobotIntoOffice) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LetRobotIntoOffice(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCallToOfficeOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendCallToOfficeOrder(Z_Param_TargetRobotNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCollectOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendCollectOrder(Z_Param_TargetRobotNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSupplyOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_GET_OBJECT(AMachine,Z_Param_TargetMachine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendSupplyOrder(Z_Param_TargetRobotNr,Z_Param_TargetMachine); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendProductionOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetRobotNr); \
		P_GET_ENUM(EWareType,Z_Param_WareType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendProductionOrder(Z_Param_TargetRobotNr,EWareType(Z_Param_WareType)); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_EVENT_PARMS \
	struct Workscreen_eventGiveRobotAgenda_Parms \
	{ \
		int32 RobotNr; \
		URobotAgenda* RobotAgenda; \
	};


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorkscreen(); \
	friend struct Z_Construct_UClass_AWorkscreen_Statics; \
public: \
	DECLARE_CLASS(AWorkscreen, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AWorkscreen)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWorkscreen(); \
	friend struct Z_Construct_UClass_AWorkscreen_Statics; \
public: \
	DECLARE_CLASS(AWorkscreen, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AWorkscreen)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorkscreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorkscreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorkscreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorkscreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorkscreen(AWorkscreen&&); \
	NO_API AWorkscreen(const AWorkscreen&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorkscreen(AWorkscreen&&); \
	NO_API AWorkscreen(const AWorkscreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorkscreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorkscreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorkscreen)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Robots() { return STRUCT_OFFSET(AWorkscreen, Robots); } \
	FORCEINLINE static uint32 __PPO__Machines() { return STRUCT_OFFSET(AWorkscreen, Machines); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_10_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class AWorkscreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Workscreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
