// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEINHOFER_LFB_ControllerBase_generated_h
#error "ControllerBase.generated.h already included, missing '#pragma once' in ControllerBase.h"
#endif
#define WEINHOFER_LFB_ControllerBase_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_RPC_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControllerBase(); \
	friend struct Z_Construct_UClass_AControllerBase_Statics; \
public: \
	DECLARE_CLASS(AControllerBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AControllerBase)


#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAControllerBase(); \
	friend struct Z_Construct_UClass_AControllerBase_Statics; \
public: \
	DECLARE_CLASS(AControllerBase, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AControllerBase)


#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControllerBase(AControllerBase&&); \
	NO_API AControllerBase(const AControllerBase&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControllerBase(AControllerBase&&); \
	NO_API AControllerBase(const AControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AControllerBase)


#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MotionController() { return STRUCT_OFFSET(AControllerBase, MotionController); } \
	FORCEINLINE static uint32 __PPO__Pointer() { return STRUCT_OFFSET(AControllerBase, Pointer); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_9_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class AControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_ControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
