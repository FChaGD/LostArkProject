// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Loa_5_2/YBot_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYBot_Controller() {}
// Cross Module References
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_AYBot_Controller();
	CPP_LOA_5_2_API UClass* Z_Construct_UClass_AYBot_Controller_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CPP_Loa_5_2();
// End Cross Module References
	void AYBot_Controller::StaticRegisterNativesAYBot_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYBot_Controller);
	UClass* Z_Construct_UClass_AYBot_Controller_NoRegister()
	{
		return AYBot_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AYBot_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYBot_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Loa_5_2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYBot_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "YBot_Controller.h" },
		{ "ModuleRelativePath", "YBot_Controller.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYBot_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYBot_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AYBot_Controller_Statics::ClassParams = {
		&AYBot_Controller::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AYBot_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYBot_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYBot_Controller()
	{
		if (!Z_Registration_Info_UClass_AYBot_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYBot_Controller.OuterSingleton, Z_Construct_UClass_AYBot_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AYBot_Controller.OuterSingleton;
	}
	template<> CPP_LOA_5_2_API UClass* StaticClass<AYBot_Controller>()
	{
		return AYBot_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYBot_Controller);
	AYBot_Controller::~AYBot_Controller() {}
	struct Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_YBot_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_YBot_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AYBot_Controller, AYBot_Controller::StaticClass, TEXT("AYBot_Controller"), &Z_Registration_Info_UClass_AYBot_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYBot_Controller), 2827056330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_YBot_Controller_h_3999356860(TEXT("/Script/CPP_Loa_5_2"),
		Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_YBot_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_CPP_Loa_5_2_Source_CPP_Loa_5_2_YBot_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
