// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGreyUni/PatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolPath() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
THEGREYUNI_API UClass* Z_Construct_UClass_APatrolPath();
THEGREYUNI_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGreyUni();
// End Cross Module References

// Begin Class APatrolPath
void APatrolPath::StaticRegisterNativesAPatrolPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatrolPath);
UClass* Z_Construct_UClass_APatrolPath_NoRegister()
{
	return APatrolPath::StaticClass();
}
struct Z_Construct_UClass_APatrolPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PatrolPath.h" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[] = {
		{ "Category", "PatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacingDirection_MetaData[] = {
		{ "Category", "PatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "PatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FacingDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatrolPath, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Billboard_MetaData), NewProp_Billboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_FacingDirection = { "FacingDirection", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatrolPath, FacingDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacingDirection_MetaData), NewProp_FacingDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatrolPath, Path), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrolPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_Billboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_FacingDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APatrolPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGreyUni,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatrolPath_Statics::ClassParams = {
	&APatrolPath::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APatrolPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatrolPath()
{
	if (!Z_Registration_Info_UClass_APatrolPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatrolPath.OuterSingleton, Z_Construct_UClass_APatrolPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatrolPath.OuterSingleton;
}
template<> THEGREYUNI_API UClass* StaticClass<APatrolPath>()
{
	return APatrolPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolPath);
APatrolPath::~APatrolPath() {}
// End Class APatrolPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_PatrolPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatrolPath, APatrolPath::StaticClass, TEXT("APatrolPath"), &Z_Registration_Info_UClass_APatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatrolPath), 59073363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_PatrolPath_h_4036292682(TEXT("/Script/TheGreyUni"),
	Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_PatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_PatrolPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
