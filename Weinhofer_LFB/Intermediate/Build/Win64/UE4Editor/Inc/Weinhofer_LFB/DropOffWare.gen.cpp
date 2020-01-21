// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/DropOffWare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropOffWare() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UDropOffWare_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UDropOffWare();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UDropOffWare::StaticRegisterNativesUDropOffWare()
	{
	}
	UClass* Z_Construct_UClass_UDropOffWare_NoRegister()
	{
		return UDropOffWare::StaticClass();
	}
	struct Z_Construct_UClass_UDropOffWare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarriedWareKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CarriedWareKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareGrabberKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WareGrabberKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RobotKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropOffWare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropOffWare_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DropOffWare.h" },
		{ "ModuleRelativePath", "DropOffWare.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropOffWare_Statics::NewProp_CarriedWareKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "DropOffWare.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDropOffWare_Statics::NewProp_CarriedWareKey = { "CarriedWareKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropOffWare, CarriedWareKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UDropOffWare_Statics::NewProp_CarriedWareKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropOffWare_Statics::NewProp_CarriedWareKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropOffWare_Statics::NewProp_WareGrabberKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "DropOffWare.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDropOffWare_Statics::NewProp_WareGrabberKey = { "WareGrabberKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropOffWare, WareGrabberKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UDropOffWare_Statics::NewProp_WareGrabberKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropOffWare_Statics::NewProp_WareGrabberKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropOffWare_Statics::NewProp_RobotKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "DropOffWare.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDropOffWare_Statics::NewProp_RobotKey = { "RobotKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDropOffWare, RobotKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UDropOffWare_Statics::NewProp_RobotKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDropOffWare_Statics::NewProp_RobotKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropOffWare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropOffWare_Statics::NewProp_CarriedWareKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropOffWare_Statics::NewProp_WareGrabberKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropOffWare_Statics::NewProp_RobotKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropOffWare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropOffWare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDropOffWare_Statics::ClassParams = {
		&UDropOffWare::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDropOffWare_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDropOffWare_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDropOffWare_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDropOffWare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDropOffWare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDropOffWare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDropOffWare, 1861019625);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UDropOffWare>()
	{
		return UDropOffWare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDropOffWare(Z_Construct_UClass_UDropOffWare, &UDropOffWare::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UDropOffWare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropOffWare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
