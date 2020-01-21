// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/WareGrabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWareGrabber() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWareGrabber_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_AWareGrabber();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWareGrabber_GetWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AWareGrabber_MoveLowerPartUpAndDown = FName(TEXT("MoveLowerPartUpAndDown"));
	void AWareGrabber::MoveLowerPartUpAndDown(AActor* WareToDropOff)
	{
		WareGrabber_eventMoveLowerPartUpAndDown_Parms Parms;
		Parms.WareToDropOff=WareToDropOff;
		ProcessEvent(FindFunctionChecked(NAME_AWareGrabber_MoveLowerPartUpAndDown),&Parms);
	}
	void AWareGrabber::StaticRegisterNativesAWareGrabber()
	{
		UClass* Class = AWareGrabber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWaypoint", &AWareGrabber::execGetWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics
	{
		struct WareGrabber_eventGetWaypoint_Parms
		{
			ATargetPoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WareGrabber_eventGetWaypoint_Parms, ReturnValue), Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Accessors\n" },
		{ "ModuleRelativePath", "WareGrabber.h" },
		{ "ToolTip", "Accessors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWareGrabber, nullptr, "GetWaypoint", nullptr, nullptr, sizeof(WareGrabber_eventGetWaypoint_Parms), Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWareGrabber_GetWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWareGrabber_GetWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareToDropOff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::NewProp_WareToDropOff = { "WareToDropOff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WareGrabber_eventMoveLowerPartUpAndDown_Parms, WareToDropOff), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::NewProp_WareToDropOff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "WareGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWareGrabber, nullptr, "MoveLowerPartUpAndDown", nullptr, nullptr, sizeof(WareGrabber_eventMoveLowerPartUpAndDown_Parms), Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWareGrabber_NoRegister()
	{
		return AWareGrabber::StaticClass();
	}
	struct Z_Construct_UClass_AWareGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareGrabberWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareGrabberWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareGrabberLowerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareGrabberLowerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WareGrabberUpperMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WareGrabberUpperMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWareGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWareGrabber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWareGrabber_GetWaypoint, "GetWaypoint" }, // 4146649373
		{ &Z_Construct_UFunction_AWareGrabber_MoveLowerPartUpAndDown, "MoveLowerPartUpAndDown" }, // 1369274878
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWareGrabber_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WareGrabber.h" },
		{ "ModuleRelativePath", "WareGrabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberWaypoint_MetaData[] = {
		{ "Category", "WareGrabber" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WareGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberWaypoint = { "WareGrabberWaypoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWareGrabber, WareGrabberWaypoint), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberWaypoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberLowerMesh_MetaData[] = {
		{ "Category", "WareGrabber" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WareGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberLowerMesh = { "WareGrabberLowerMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWareGrabber, WareGrabberLowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberLowerMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberLowerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberUpperMesh_MetaData[] = {
		{ "Category", "WareGrabber" },
		{ "Comment", "//Setup\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WareGrabber.h" },
		{ "ToolTip", "Setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberUpperMesh = { "WareGrabberUpperMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWareGrabber, WareGrabberUpperMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberUpperMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberUpperMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWareGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberLowerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWareGrabber_Statics::NewProp_WareGrabberUpperMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWareGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWareGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWareGrabber_Statics::ClassParams = {
		&AWareGrabber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWareGrabber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWareGrabber_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWareGrabber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWareGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWareGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWareGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWareGrabber, 2307408227);
	template<> WEINHOFER_LFB_API UClass* StaticClass<AWareGrabber>()
	{
		return AWareGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWareGrabber(Z_Construct_UClass_AWareGrabber, &AWareGrabber::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("AWareGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWareGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
