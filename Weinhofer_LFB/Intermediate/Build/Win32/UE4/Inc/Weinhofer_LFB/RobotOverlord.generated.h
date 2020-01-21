// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEINHOFER_LFB_RobotOverlord_generated_h
#error "RobotOverlord.generated.h already included, missing '#pragma once' in RobotOverlord.h"
#endif
#define WEINHOFER_LFB_RobotOverlord_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRobotAndAgenda_Statics; \
	WEINHOFER_LFB_API static class UScriptStruct* StaticStruct();


template<> WEINHOFER_LFB_API UScriptStruct* StaticStruct<struct FRobotAndAgenda>();

#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckIfRobotRequestsAreFulfilled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfRobotRequestsAreFulfilled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveNextOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveNextOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorTypeToBlocking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBehaviorTypeToBlocking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorTypeToEmotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBehaviorTypeToEmotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntervallVariation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetIntervallVariation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeIntervall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeIntervall(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckIfRobotRequestsAreFulfilled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckIfRobotRequestsAreFulfilled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveNextOrder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveNextOrder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorTypeToBlocking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBehaviorTypeToBlocking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorTypeToEmotion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBehaviorTypeToEmotion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntervallVariation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetIntervallVariation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeIntervall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTimeIntervall(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_EVENT_PARMS
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobotOverlord(); \
	friend struct Z_Construct_UClass_ARobotOverlord_Statics; \
public: \
	DECLARE_CLASS(ARobotOverlord, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobotOverlord)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_INCLASS \
private: \
	static void StaticRegisterNativesARobotOverlord(); \
	friend struct Z_Construct_UClass_ARobotOverlord_Statics; \
public: \
	DECLARE_CLASS(ARobotOverlord, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(ARobotOverlord)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobotOverlord(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobotOverlord) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotOverlord); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotOverlord); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotOverlord(ARobotOverlord&&); \
	NO_API ARobotOverlord(const ARobotOverlord&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobotOverlord(ARobotOverlord&&); \
	NO_API ARobotOverlord(const ARobotOverlord&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobotOverlord); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobotOverlord); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARobotOverlord)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Robots() { return STRUCT_OFFSET(ARobotOverlord, Robots); } \
	FORCEINLINE static uint32 __PPO__TimeIntervall() { return STRUCT_OFFSET(ARobotOverlord, TimeIntervall); } \
	FORCEINLINE static uint32 __PPO__IntervallVariation() { return STRUCT_OFFSET(ARobotOverlord, IntervallVariation); } \
	FORCEINLINE static uint32 __PPO__Storyboard() { return STRUCT_OFFSET(ARobotOverlord, Storyboard); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_28_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class ARobotOverlord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_RobotOverlord_h


#define FOREACH_ENUM_EBEHAVIORTYPE(op) \
	op(EBehaviorType::BTE_Unset) \
	op(EBehaviorType::BTE_Emotion) \
	op(EBehaviorType::BTE_Blocking) 

enum class EBehaviorType : uint8;
template<> WEINHOFER_LFB_API UEnum* StaticEnum<EBehaviorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
