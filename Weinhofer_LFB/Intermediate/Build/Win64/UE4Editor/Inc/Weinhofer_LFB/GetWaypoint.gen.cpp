// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/GetWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetWaypoint() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGetWaypoint_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGetWaypoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGetWaypoint::StaticRegisterNativesUGetWaypoint()
	{
	}
	UClass* Z_Construct_UClass_UGetWaypoint_NoRegister()
	{
		return UGetWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_UGetWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaypointKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaypointKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWaypoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GetWaypoint.h" },
		{ "ModuleRelativePath", "GetWaypoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetWaypoint_Statics::NewProp_WaypointKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "GetWaypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGetWaypoint_Statics::NewProp_WaypointKey = { "WaypointKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGetWaypoint, WaypointKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGetWaypoint_Statics::NewProp_WaypointKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGetWaypoint_Statics::NewProp_WaypointKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetWaypoint_Statics::NewProp_WaypointKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetWaypoint_Statics::ClassParams = {
		&UGetWaypoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGetWaypoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGetWaypoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetWaypoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGetWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetWaypoint, 1584742657);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UGetWaypoint>()
	{
		return UGetWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetWaypoint(Z_Construct_UClass_UGetWaypoint, &UGetWaypoint::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UGetWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
