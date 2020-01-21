// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEINHOFER_LFB_Overlord_generated_h
#error "Overlord.generated.h already included, missing '#pragma once' in Overlord.h"
#endif
#define WEINHOFER_LFB_Overlord_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_RPC_WRAPPERS \
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


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_EVENT_PARMS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_CALLBACK_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOverlord(); \
	friend struct Z_Construct_UClass_UOverlord_Statics; \
public: \
	DECLARE_CLASS(UOverlord, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(UOverlord)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOverlord(); \
	friend struct Z_Construct_UClass_UOverlord_Statics; \
public: \
	DECLARE_CLASS(UOverlord, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(UOverlord)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOverlord(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlord) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlord); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlord); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlord(UOverlord&&); \
	NO_API UOverlord(const UOverlord&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOverlord(UOverlord&&); \
	NO_API UOverlord(const UOverlord&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOverlord); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlord); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOverlord)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeIntervall() { return STRUCT_OFFSET(UOverlord, TimeIntervall); } \
	FORCEINLINE static uint32 __PPO__IntervallVariation() { return STRUCT_OFFSET(UOverlord, IntervallVariation); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_10_PROLOG \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_EVENT_PARMS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_CALLBACK_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class UOverlord>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Overlord_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
