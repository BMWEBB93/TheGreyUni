// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGreyUni/WolfAiController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWolfAiController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
THEGREYUNI_API UClass* Z_Construct_UClass_AWolfAiController();
THEGREYUNI_API UClass* Z_Construct_UClass_AWolfAiController_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGreyUni();
// End Cross Module References

// Begin Class AWolfAiController
void AWolfAiController::StaticRegisterNativesAWolfAiController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWolfAiController);
UClass* Z_Construct_UClass_AWolfAiController_NoRegister()
{
	return AWolfAiController::StaticClass();
}
struct Z_Construct_UClass_AWolfAiController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WolfAiController.h" },
		{ "ModuleRelativePath", "WolfAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WolfAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BBC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WolfAiController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BBC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWolfAiController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWolfAiController_Statics::NewProp_BTC = { "BTC", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWolfAiController, BTC), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTC_MetaData), NewProp_BTC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWolfAiController_Statics::NewProp_BBC = { "BBC", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWolfAiController, BBC), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BBC_MetaData), NewProp_BBC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWolfAiController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWolfAiController_Statics::NewProp_BTC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWolfAiController_Statics::NewProp_BBC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWolfAiController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWolfAiController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGreyUni,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWolfAiController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWolfAiController_Statics::ClassParams = {
	&AWolfAiController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWolfAiController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWolfAiController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWolfAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWolfAiController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWolfAiController()
{
	if (!Z_Registration_Info_UClass_AWolfAiController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWolfAiController.OuterSingleton, Z_Construct_UClass_AWolfAiController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWolfAiController.OuterSingleton;
}
template<> THEGREYUNI_API UClass* StaticClass<AWolfAiController>()
{
	return AWolfAiController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWolfAiController);
AWolfAiController::~AWolfAiController() {}
// End Class AWolfAiController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_WolfAiController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWolfAiController, AWolfAiController::StaticClass, TEXT("AWolfAiController"), &Z_Registration_Info_UClass_AWolfAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWolfAiController), 3747131461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_WolfAiController_h_1369920467(TEXT("/Script/TheGreyUni"),
	Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_WolfAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_WolfAiController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
