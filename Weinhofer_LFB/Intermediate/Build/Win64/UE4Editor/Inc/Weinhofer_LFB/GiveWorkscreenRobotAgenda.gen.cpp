// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/GiveWorkscreenRobotAgenda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGiveWorkscreenRobotAgenda() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGiveWorkscreenRobotAgenda_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UGiveWorkscreenRobotAgenda();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UGiveWorkscreenRobotAgenda::StaticRegisterNativesUGiveWorkscreenRobotAgenda()
	{
	}
	UClass* Z_Construct_UClass_UGiveWorkscreenRobotAgenda_NoRegister()
	{
		return UGiveWorkscreenRobotAgenda::StaticClass();
	}
	struct Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RobotKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RobotKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GiveWorkscreenRobotAgenda.h" },
		{ "ModuleRelativePath", "GiveWorkscreenRobotAgenda.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::NewProp_RobotKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "GiveWorkscreenRobotAgenda.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::NewProp_RobotKey = { "RobotKey", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGiveWorkscreenRobotAgenda, RobotKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::NewProp_RobotKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::NewProp_RobotKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::NewProp_RobotKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGiveWorkscreenRobotAgenda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::ClassParams = {
		&UGiveWorkscreenRobotAgenda::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGiveWorkscreenRobotAgenda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGiveWorkscreenRobotAgenda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGiveWorkscreenRobotAgenda, 2115376287);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UGiveWorkscreenRobotAgenda>()
	{
		return UGiveWorkscreenRobotAgenda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGiveWorkscreenRobotAgenda(Z_Construct_UClass_UGiveWorkscreenRobotAgenda, &UGiveWorkscreenRobotAgenda::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UGiveWorkscreenRobotAgenda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGiveWorkscreenRobotAgenda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
