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
#ifdef WEINHOFER_LFB_MaterialDispenser_generated_h
#error "MaterialDispenser.generated.h already included, missing '#pragma once' in MaterialDispenser.h"
#endif
#define WEINHOFER_LFB_MaterialDispenser_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDispenseMaterial) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_TargetRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DispenseMaterial(Z_Param_TargetRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWaypoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDispenseMaterial) \
	{ \
		P_GET_OBJECT(ARobot,Z_Param_TargetRobot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DispenseMaterial(Z_Param_TargetRobot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetWaypoint(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaterialDispenser(); \
	friend struct Z_Construct_UClass_AMaterialDispenser_Statics; \
public: \
	DECLARE_CLASS(AMaterialDispenser, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AMaterialDispenser)


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMaterialDispenser(); \
	friend struct Z_Construct_UClass_AMaterialDispenser_Statics; \
public: \
	DECLARE_CLASS(AMaterialDispenser, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AMaterialDispenser)


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaterialDispenser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaterialDispenser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaterialDispenser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaterialDispenser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaterialDispenser(AMaterialDispenser&&); \
	NO_API AMaterialDispenser(const AMaterialDispenser&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaterialDispenser(AMaterialDispenser&&); \
	NO_API AMaterialDispenser(const AMaterialDispenser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaterialDispenser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaterialDispenser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaterialDispenser)


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DispenserBodyMesh() { return STRUCT_OFFSET(AMaterialDispenser, DispenserBodyMesh); } \
	FORCEINLINE static uint32 __PPO__PlatformMesh() { return STRUCT_OFFSET(AMaterialDispenser, PlatformMesh); } \
	FORCEINLINE static uint32 __PPO__MaterialPickupWaypoint() { return STRUCT_OFFSET(AMaterialDispenser, MaterialPickupWaypoint); } \
	FORCEINLINE static uint32 __PPO__MaterialClass() { return STRUCT_OFFSET(AMaterialDispenser, MaterialClass); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_10_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class AMaterialDispenser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_MaterialDispenser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
