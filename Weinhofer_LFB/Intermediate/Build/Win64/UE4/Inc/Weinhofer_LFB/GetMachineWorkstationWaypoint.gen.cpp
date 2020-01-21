// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/GetMachineWorkstationWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetMachineWorkstationWaypoint() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGetMachineWorkstationWaypoint_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGetMachineWorkstationWaypoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGetMachineWorkstationWaypoint::StaticRegisterNativesUGetMachineWorkstationWaypoint()
	{
	}
	UClass* Z_Construct_UClass_UGetMachineWorkstationWaypoint_NoRegister()
	{
		return UGetMachineWorkstationWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMachineKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetMachineKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaypointKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GetMachineWorkstationWaypoint.h" },
		{ "ModuleRelativePath", "GetMachineWorkstationWaypoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_TargetMachineKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "GetMachineWorkstationWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_TargetMachineKey = { "TargetMachineKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetMachineWorkstationWaypoint, TargetMachineKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_TargetMachineKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_TargetMachineKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_WaypointKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "GetMachineWorkstationWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_WaypointKey = { "WaypointKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetMachineWorkstationWaypoint, WaypointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_WaypointKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_WaypointKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_TargetMachineKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::NewProp_WaypointKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetMachineWorkstationWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::ClassParams = {
		&UGetMachineWorkstationWaypoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetMachineWorkstationWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetMachineWorkstationWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetMachineWorkstationWaypoint, 2359971808);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UGetMachineWorkstationWaypoint>()
	{
		return UGetMachineWorkstationWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetMachineWorkstationWaypoint(Z_Construct_UClass_UGetMachineWorkstationWaypoint, &UGetMachineWorkstationWaypoint::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UGetMachineWorkstationWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetMachineWorkstationWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
