// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/VRPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPawnBase() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AVRPawnBase_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AVRPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AControllerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AVRPawnBase::StaticRegisterNativesAVRPawnBase()
	{
	}
	UClass* Z_Construct_UClass_AVRPawnBase_NoRegister()
	{
		return AVRPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LeftHandControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RightHandControllerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRPawnBase.h" },
		{ "ModuleRelativePath", "VRPawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandController_MetaData[] = {
		{ "ModuleRelativePath", "VRPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandController = { "LeftHandController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPawnBase, LeftHandController), Z_Construct_UClass_AControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandController_MetaData[] = {
		{ "Comment", "//References\n" },
		{ "ModuleRelativePath", "VRPawnBase.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandController = { "RightHandController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPawnBase, RightHandController), Z_Construct_UClass_AControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VRPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawnBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPawnBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::NewProp_VRRoot_MetaData[] = {
		{ "Category", "VRPawnBase" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRPawnBase.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRPawnBase_Statics::NewProp_VRRoot = { "VRRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPawnBase, VRRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_VRRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_VRRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandControllerClass_MetaData[] = {
		{ "Category", "VRPawnBase" },
		{ "ModuleRelativePath", "VRPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandControllerClass = { "LeftHandControllerClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPawnBase, LeftHandControllerClass), Z_Construct_UClass_AControllerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandControllerClass_MetaData[] = {
		{ "Category", "VRPawnBase" },
		{ "Comment", "//Config\n" },
		{ "ModuleRelativePath", "VRPawnBase.h" },
		{ "ToolTip", "Config" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandControllerClass = { "RightHandControllerClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRPawnBase, RightHandControllerClass), Z_Construct_UClass_AControllerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandControllerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawnBase_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawnBase_Statics::NewProp_VRRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawnBase_Statics::NewProp_LeftHandControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPawnBase_Statics::NewProp_RightHandControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPawnBase_Statics::ClassParams = {
		&AVRPawnBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRPawnBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPawnBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVRPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPawnBase, 522711277);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AVRPawnBase>()
	{
		return AVRPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPawnBase(Z_Construct_UClass_AVRPawnBase, &AVRPawnBase::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AVRPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
