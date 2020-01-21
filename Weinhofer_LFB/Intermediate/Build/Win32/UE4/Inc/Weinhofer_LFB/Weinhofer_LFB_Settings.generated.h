// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInfluenceStrategy : uint8;
class UWeinhofer_LFB_Settings;
#ifdef WEINHOFER_LFB_Weinhofer_LFB_Settings_generated_h
#error "Weinhofer_LFB_Settings.generated.h already included, missing '#pragma once' in Weinhofer_LFB_Settings.h"
#endif
#define WEINHOFER_LFB_Weinhofer_LFB_Settings_generated_h

#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInfluenceStrategy) \
	{ \
		P_GET_ENUM(EInfluenceStrategy,Z_Param_NewStrategy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInfluenceStrategy(EInfluenceStrategy(Z_Param_NewStrategy)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNrOfRequiredHexagons) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNrOfRequiredHexagons(Z_Param_NewNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNrOfRequiredSquares) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNrOfRequiredSquares(Z_Param_NewNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNrOfRequiredTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNrOfRequiredTriangles(Z_Param_NewNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeLimit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewTimeLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeLimit(Z_Param_NewTimeLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInfluenceStrategy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EInfluenceStrategy*)Z_Param__Result=P_THIS->GetInfluenceStrategy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfRequiredHexagons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfRequiredHexagons(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfRequiredSquares) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfRequiredSquares(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfRequiredTriangles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfRequiredTriangles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTimeLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeinhofer_LFB_Settings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWeinhofer_LFB_Settings**)Z_Param__Result=UWeinhofer_LFB_Settings::GetWeinhofer_LFB_Settings(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInfluenceStrategy) \
	{ \
		P_GET_ENUM(EInfluenceStrategy,Z_Param_NewStrategy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInfluenceStrategy(EInfluenceStrategy(Z_Param_NewStrategy)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNrOfRequiredHexagons) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNrOfRequiredHexagons(Z_Param_NewNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNrOfRequiredSquares) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNrOfRequiredSquares(Z_Param_NewNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNrOfRequiredTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNrOfRequiredTriangles(Z_Param_NewNr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeLimit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewTimeLimit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeLimit(Z_Param_NewTimeLimit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInfluenceStrategy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EInfluenceStrategy*)Z_Param__Result=P_THIS->GetInfluenceStrategy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfRequiredHexagons) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfRequiredHexagons(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfRequiredSquares) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfRequiredSquares(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNrOfRequiredTriangles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNrOfRequiredTriangles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTimeLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTimeLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWeinhofer_LFB_Settings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWeinhofer_LFB_Settings**)Z_Param__Result=UWeinhofer_LFB_Settings::GetWeinhofer_LFB_Settings(); \
		P_NATIVE_END; \
	}


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeinhofer_LFB_Settings(); \
	friend struct Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics; \
public: \
	DECLARE_CLASS(UWeinhofer_LFB_Settings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(UWeinhofer_LFB_Settings)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWeinhofer_LFB_Settings(); \
	friend struct Z_Construct_UClass_UWeinhofer_LFB_Settings_Statics; \
public: \
	DECLARE_CLASS(UWeinhofer_LFB_Settings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weinhofer_LFB"), NO_API) \
	DECLARE_SERIALIZER(UWeinhofer_LFB_Settings)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeinhofer_LFB_Settings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeinhofer_LFB_Settings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeinhofer_LFB_Settings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeinhofer_LFB_Settings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeinhofer_LFB_Settings(UWeinhofer_LFB_Settings&&); \
	NO_API UWeinhofer_LFB_Settings(const UWeinhofer_LFB_Settings&); \
public:


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeinhofer_LFB_Settings(UWeinhofer_LFB_Settings&&); \
	NO_API UWeinhofer_LFB_Settings(const UWeinhofer_LFB_Settings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeinhofer_LFB_Settings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeinhofer_LFB_Settings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeinhofer_LFB_Settings)


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TimeLimit() { return STRUCT_OFFSET(UWeinhofer_LFB_Settings, TimeLimit); } \
	FORCEINLINE static uint32 __PPO__NrOfRequiredTriangles() { return STRUCT_OFFSET(UWeinhofer_LFB_Settings, NrOfRequiredTriangles); } \
	FORCEINLINE static uint32 __PPO__NrOfRequiredSquares() { return STRUCT_OFFSET(UWeinhofer_LFB_Settings, NrOfRequiredSquares); } \
	FORCEINLINE static uint32 __PPO__NrOfRequiredHexagons() { return STRUCT_OFFSET(UWeinhofer_LFB_Settings, NrOfRequiredHexagons); } \
	FORCEINLINE static uint32 __PPO__InfluenceStrategy() { return STRUCT_OFFSET(UWeinhofer_LFB_Settings, InfluenceStrategy); }


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_18_PROLOG
#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_RPC_WRAPPERS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_INCLASS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_PRIVATE_PROPERTY_OFFSET \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_INCLASS_NO_PURE_DECLS \
	Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEINHOFER_LFB_API UClass* StaticClass<class UWeinhofer_LFB_Settings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weinhofer_LFB_Source_Weinhofer_LFB_Weinhofer_LFB_Settings_h


#define FOREACH_ENUM_EINFLUENCESTRATEGY(op) \
	op(EInfluenceStrategy::Emotion) \
	op(EInfluenceStrategy::Obstruction) 

enum class EInfluenceStrategy : uint8;
template<> WEINHOFER_LFB_API UEnum* StaticEnum<EInfluenceStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
