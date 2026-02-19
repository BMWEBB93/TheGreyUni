// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGreyUni/Wolf.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWolf() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
THEGREYUNI_API UClass* Z_Construct_UClass_ABaseCharacter();
THEGREYUNI_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
THEGREYUNI_API UClass* Z_Construct_UClass_AWolf();
THEGREYUNI_API UClass* Z_Construct_UClass_AWolf_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGreyUni();
// End Cross Module References

// Begin Class AWolf
void AWolf::StaticRegisterNativesAWolf()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWolf);
UClass* Z_Construct_UClass_AWolf_NoRegister()
{
	return AWolf::StaticClass();
}
struct Z_Construct_UClass_AWolf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Wolf.h" },
		{ "ModuleRelativePath", "Wolf.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeAsset_MetaData[] = {
		{ "Category", "Wolf" },
		{ "ModuleRelativePath", "Wolf.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPath_MetaData[] = {
		{ "Category", "Wolf" },
		{ "ModuleRelativePath", "Wolf.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWolf>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWolf_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWolf, TreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeAsset_MetaData), NewProp_TreeAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWolf_Statics::NewProp_PatrolPath = { "PatrolPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWolf, PatrolPath), Z_Construct_UClass_APatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPath_MetaData), NewProp_PatrolPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWolf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWolf_Statics::NewProp_TreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWolf_Statics::NewProp_PatrolPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWolf_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWolf_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGreyUni,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWolf_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWolf_Statics::ClassParams = {
	&AWolf::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWolf_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWolf_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWolf_Statics::Class_MetaDataParams), Z_Construct_UClass_AWolf_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWolf()
{
	if (!Z_Registration_Info_UClass_AWolf.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWolf.OuterSingleton, Z_Construct_UClass_AWolf_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWolf.OuterSingleton;
}
template<> THEGREYUNI_API UClass* StaticClass<AWolf>()
{
	return AWolf::StaticClass();
}
AWolf::AWolf() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWolf);
AWolf::~AWolf() {}
// End Class AWolf

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_Wolf_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWolf, AWolf::StaticClass, TEXT("AWolf"), &Z_Registration_Info_UClass_AWolf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWolf), 3330360239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_Wolf_h_3566091464(TEXT("/Script/TheGreyUni"),
	Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_Wolf_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_bmw129_AppData_Local_Development_TheGreyUni_TheGreyUni_Source_TheGreyUni_Wolf_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
