// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Loa_5_2/CPP_Loa_5_2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Loa_5_2GameMode() {}
// Cross Module References
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_ACPP_Loa_5_2GameMode();
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_ACPP_Loa_5_2GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_Loa_5_2();
// End Cross Module References
	void ACPP_Loa_5_2GameMode::StaticRegisterNativesACPP_Loa_5_2GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Loa_5_2GameMode);
	UClass* Z_Construct_UClass_ACPP_Loa_5_2GameMode_NoRegister()
	{
		return ACPP_Loa_5_2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Loa_5_2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_Loa_5_2GameMode.h" },
		{ "ModuleRelativePath", "CPP_Loa_5_2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Loa_5_2GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::ClassParams = {
		&ACPP_Loa_5_2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Loa_5_2GameMode()
	{
		if (!Z_Registration_Info_UClass_ACPP_Loa_5_2GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Loa_5_2GameMode.OuterSingleton, Z_Construct_UClass_ACPP_Loa_5_2GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Loa_5_2GameMode.OuterSingleton;
	}
	template<> CPP_LOA_5_2_API UClass* StaticClass<ACPP_Loa_5_2GameMode>()
	{
		return ACPP_Loa_5_2GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Loa_5_2GameMode);
	ACPP_Loa_5_2GameMode::~ACPP_Loa_5_2GameMode() {}
	struct Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Loa_5_2GameMode, ACPP_Loa_5_2GameMode::StaticClass, TEXT("ACPP_Loa_5_2GameMode"), &Z_Registration_Info_UClass_ACPP_Loa_5_2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Loa_5_2GameMode), 473359261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2GameMode_h_3998937465(TEXT("/Script/CPP_Loa_5_2"),
		Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_CPP_Loa_5_2GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
