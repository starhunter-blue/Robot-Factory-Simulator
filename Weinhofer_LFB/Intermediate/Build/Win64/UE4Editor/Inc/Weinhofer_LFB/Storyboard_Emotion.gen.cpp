// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weinhofer_LFB/Storyboard_Emotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryboard_Emotion() {}
// Cross Module References
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UStoryboard_Emotion_NoRegister();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UStoryboard_Emotion();
	WEINHOFER_LFB_API UClass* Z_Construct_UClass_UStoryboard();
	UPackage* Z_Construct_UPackage__Script_Weinhofer_LFB();
// End Cross Module References
	void UStoryboard_Emotion::StaticRegisterNativesUStoryboard_Emotion()
	{
	}
	UClass* Z_Construct_UClass_UStoryboard_Emotion_NoRegister()
	{
		return UStoryboard_Emotion::StaticClass();
	}
	struct Z_Construct_UClass_UStoryboard_Emotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryboard_Emotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryboard,
		(UObject* (*)())Z_Construct_UPackage__Script_Weinhofer_LFB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryboard_Emotion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Storyboard_Emotion.h" },
		{ "ModuleRelativePath", "Storyboard_Emotion.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryboard_Emotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryboard_Emotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoryboard_Emotion_Statics::ClassParams = {
		&UStoryboard_Emotion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStoryboard_Emotion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStoryboard_Emotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoryboard_Emotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoryboard_Emotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoryboard_Emotion, 3938349525);
	template<> WEINHOFER_LFB_API UClass* StaticClass<UStoryboard_Emotion>()
	{
		return UStoryboard_Emotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoryboard_Emotion(Z_Construct_UClass_UStoryboard_Emotion, &UStoryboard_Emotion::StaticClass, TEXT("/Script/Weinhofer_LFB"), TEXT("UStoryboard_Emotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryboard_Emotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
