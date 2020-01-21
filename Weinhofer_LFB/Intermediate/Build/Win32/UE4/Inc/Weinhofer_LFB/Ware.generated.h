// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWareType : uint8;
#ifdef WEINHOFER_LFB_Ware_generated_h
#error "Ware.generated.h already included, missing '#pragma once' in Ware.h"
#endif
#define WEINHOFER_LFB_Ware_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWareType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWareType*)Z_Param__Result=P_THIS->GetWareType(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWareType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EWareType*)Z_Param__Result=P_THIS->GetWareType(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWare(); \
	friend struct Z_Construct_UClass_AWare_Statics; \
public: \
	DECLARE_CLASS(AWare, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AWare)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAWare(); \
	friend struct Z_Construct_UClass_AWare_Statics; \
public: \
	DECLARE_CLASS(AWare, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(AWare)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWare(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWare) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWare); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWare(AWare&&); \
	NO_API AWare(const AWare&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWare(AWare&&); \
	NO_API AWare(const AWare&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWare)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WareType() { return STRUCT_OFFSET(AWare, WareType); } \
	FORCEINLINE static uint32 __PPO__WareMesh() { return STRUCT_OFFSET(AWare, WareMesh); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_20_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class AWare>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Ware_h


#define FOREACH_ENUM_EWARETYPE(op) \
	op(EWareType::WTE_UNSET) \
	op(EWareType::WTE_Pyramid) \
	op(EWareType::WTE_Cube) \
	op(EWareType::WTE_Dodecahedron) 

enum class EWareType : uint8;
template<> WEINHOFER_LFB_API UEnum* StaticEnum<EWareType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
