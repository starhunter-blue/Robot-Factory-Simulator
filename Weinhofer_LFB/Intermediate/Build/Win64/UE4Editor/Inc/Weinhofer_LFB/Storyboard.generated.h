// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEINHOFER_LFB_Storyboard_generated_h
#error "Storyboard.generated.h already included, missing '#pragma once' in Storyboard.h"
#endif
#define WEINHOFER_LFB_Storyboard_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequest_Statics; \
	WEINHOFER_LFB_API static class UScriptStruct* StaticStruct();


template<> WEINHOFER_LFB_API UScriptStruct* StaticStruct<struct FRequest>();

#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_RPC_WRAPPERS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoryboard(); \
	friend struct Z_Construct_UClass_UStoryboard_Statics; \
public: \
	DECLARE_CLASS(UStoryboard, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(UStoryboard)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUStoryboard(); \
	friend struct Z_Construct_UClass_UStoryboard_Statics; \
public: \
	DECLARE_CLASS(UStoryboard, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(UStoryboard)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoryboard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoryboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoryboard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoryboard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoryboard(UStoryboard&&); \
	NO_API UStoryboard(const UStoryboard&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoryboard(UStoryboard&&); \
	NO_API UStoryboard(const UStoryboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoryboard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoryboard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStoryboard)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_PRIVATE_PROPERTY_OFFSET
#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_32_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class UStoryboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Storyboard_h


#define FOREACH_ENUM_EAGENDAHAS(op) \
	op(EAgendaHas::AHE_Thought) \
	op(EAgendaHas::AHE_Request) \
	op(EAgendaHas::AHE_Both) 

enum class EAgendaHas : uint8;
template<> WEINHOFER_LFB_API UEnum* StaticEnum<EAgendaHas>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
