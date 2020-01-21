// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWareType : uint8;
enum class ERobotState : uint8;
#ifdef WEINHOFER_LFB_RobotAgenda_generated_h
#error "RobotAgenda.generated.h already included, missing '#pragma once' in RobotAgenda.h"
#endif
#define WEINHOFER_LFB_RobotAgenda_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDesiredKindOfMachine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWareType*)Z_Param__Result=P_THIS->GetDesiredKindOfMachine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERobotState*)Z_Param__Result=P_THIS->GetDesiredState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThought) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetThought(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetRequest(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDesiredKindOfMachine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWareType*)Z_Param__Result=P_THIS->GetDesiredKindOfMachine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERobotState*)Z_Param__Result=P_THIS->GetDesiredState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThought) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetThought(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetRequest(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURobotAgenda(); \
	friend struct Z_Construct_UClass_URobotAgenda_Statics; \
public: \
	DECLARE_CLASS(URobotAgenda, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(URobotAgenda)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURobotAgenda(); \
	friend struct Z_Construct_UClass_URobotAgenda_Statics; \
public: \
	DECLARE_CLASS(URobotAgenda, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(URobotAgenda)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URobotAgenda(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URobotAgenda) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URobotAgenda); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URobotAgenda); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URobotAgenda(URobotAgenda&&); \
	NO_API URobotAgenda(const URobotAgenda&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URobotAgenda(URobotAgenda&&); \
	NO_API URobotAgenda(const URobotAgenda&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URobotAgenda); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URobotAgenda); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URobotAgenda)


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_PRIVATE_PROPERTY_OFFSET
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_12_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class URobotAgenda>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_RobotAgenda_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
