// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/RobotDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobotDoor() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotDoor_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_ARobotDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_CanOpen();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_CloseDoor();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_LetRobotIn();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_LockDoor();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_OpenDoor();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_QueueHasRobot();
	WEINHOFER_LFB_API UFunction* Z_Construct_UFunction_ARobotDoor_UnlockDoor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ARobotDoor_CloseDoor = FName(TEXT("CloseDoor"));
	void ARobotDoor::CloseDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotDoor_CloseDoor),NULL);
	}
	static FName NAME_ARobotDoor_OpenDoor = FName(TEXT("OpenDoor"));
	void ARobotDoor::OpenDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARobotDoor_OpenDoor),NULL);
	}
	void ARobotDoor::StaticRegisterNativesARobotDoor()
	{
		UClass* Class = ARobotDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanOpen", &ARobotDoor::execCanOpen },
			{ "LetRobotIn", &ARobotDoor::execLetRobotIn },
			{ "LockDoor", &ARobotDoor::execLockDoor },
			{ "QueueHasRobot", &ARobotDoor::execQueueHasRobot },
			{ "UnlockDoor", &ARobotDoor::execUnlockDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARobotDoor_CanOpen_Statics
	{
		struct RobotDoor_eventCanOpen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RobotDoor_eventCanOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RobotDoor_eventCanOpen_Parms), &Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Getters + Setters\n" },
		{ "ModuleRelativePath", "RobotDoor.h" },
		{ "ToolTip", "Getters + Setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "CanOpen", nullptr, nullptr, sizeof(RobotDoor_eventCanOpen_Parms), Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_CanOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_CanOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotDoor_CloseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "CloseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_CloseDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotDoor_LetRobotIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_LetRobotIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_LetRobotIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "LetRobotIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_LetRobotIn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_LetRobotIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_LetRobotIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_LetRobotIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotDoor_LockDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_LockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_LockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "LockDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_LockDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_LockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_LockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_LockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotDoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_OpenDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics
	{
		struct RobotDoor_eventQueueHasRobot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RobotDoor_eventQueueHasRobot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RobotDoor_eventQueueHasRobot_Parms), &Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "QueueHasRobot", nullptr, nullptr, sizeof(RobotDoor_eventQueueHasRobot_Parms), Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_QueueHasRobot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_QueueHasRobot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARobotDoor_UnlockDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARobotDoor_UnlockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARobotDoor_UnlockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARobotDoor, nullptr, "UnlockDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARobotDoor_UnlockDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARobotDoor_UnlockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARobotDoor_UnlockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARobotDoor_UnlockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARobotDoor_NoRegister()
	{
		return ARobotDoor::StaticClass();
	}
	struct Z_Construct_UClass_ARobotDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARobotDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARobotDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARobotDoor_CanOpen, "CanOpen" }, // 2959098392
		{ &Z_Construct_UFunction_ARobotDoor_CloseDoor, "CloseDoor" }, // 1461427756
		{ &Z_Construct_UFunction_ARobotDoor_LetRobotIn, "LetRobotIn" }, // 259726153
		{ &Z_Construct_UFunction_ARobotDoor_LockDoor, "LockDoor" }, // 1095994535
		{ &Z_Construct_UFunction_ARobotDoor_OpenDoor, "OpenDoor" }, // 492437833
		{ &Z_Construct_UFunction_ARobotDoor_QueueHasRobot, "QueueHasRobot" }, // 3545375541
		{ &Z_Construct_UFunction_ARobotDoor_UnlockDoor, "UnlockDoor" }, // 740187322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RobotDoor.h" },
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotDoor_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "RobotDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotDoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotDoor_Statics::NewProp_Door_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotDoor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARobotDoor_Statics::NewProp_DoorFrame_MetaData[] = {
		{ "Category", "RobotDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RobotDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARobotDoor_Statics::NewProp_DoorFrame = { "DoorFrame", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARobotDoor, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARobotDoor_Statics::NewProp_DoorFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARobotDoor_Statics::NewProp_DoorFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARobotDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotDoor_Statics::NewProp_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARobotDoor_Statics::NewProp_DoorFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARobotDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARobotDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARobotDoor_Statics::ClassParams = {
		&ARobotDoor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARobotDoor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARobotDoor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARobotDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARobotDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARobotDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARobotDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARobotDoor, 4237638683);
	template<> WEINHOFER_LFB_API UClass* StaticClass<ARobotDoor>()
	{
		return ARobotDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARobotDoor(Z_Construct_UClass_ARobotDoor, &ARobotDoor::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("ARobotDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARobotDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
