// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
class AActor;
#ifdef WEINHOFER_LFB_WareGrabber_generated_h
#error "WareGrabber.generated.h already included, missing '#pragma once' in WareGrabber.h"
#endif
#define WEINHOFER_LFB_WareGrabber_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWaypoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWaypoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_EVENT_PARMS \
	struct WareGrabber_eventMoveLowerPartUpAndDown_Parms \
	{ \
		AActor* WareToDropOff; \
	};


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWareGrabber(); \
	friend struct Z_Construct_UClass_AWareGrabber_Statics; \
public: \
	DECLARE_CLASS(AWareGrabber, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AWareGrabber)


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWareGrabber(); \
	friend struct Z_Construct_UClass_AWareGrabber_Statics; \
public: \
	DECLARE_CLASS(AWareGrabber, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AWareGrabber)


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWareGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWareGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWareGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWareGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWareGrabber(AWareGrabber&&); \
	NO_API AWareGrabber(const AWareGrabber&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWareGrabber(AWareGrabber&&); \
	NO_API AWareGrabber(const AWareGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWareGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWareGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWareGrabber)


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WareGrabberUpperMesh() { return STRUCT_OFFSET(AWareGrabber, WareGrabberUpperMesh); } \
	FORCEINLINE static uint32 __PPO__WareGrabberLowerMesh() { return STRUCT_OFFSET(AWareGrabber, WareGrabberLowerMesh); } \
	FORCEINLINE static uint32 __PPO__WareGrabberWaypoint() { return STRUCT_OFFSET(AWareGrabber, WareGrabberWaypoint); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_9_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class AWareGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_WareGrabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
