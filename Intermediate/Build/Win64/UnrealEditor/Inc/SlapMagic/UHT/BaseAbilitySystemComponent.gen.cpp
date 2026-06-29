// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlapMagic/GameplayAbilitySystem/BaseAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent();
SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlapMagic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAbilitySystemComponent **********************************************
void UBaseAbilitySystemComponent::StaticRegisterNativesUBaseAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAbilitySystemComponent;
UClass* UBaseAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UBaseAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UBaseAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseAbilitySystemComponent"),
			Z_Registration_Info_UClass_UBaseAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUBaseAbilitySystemComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UBaseAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister()
{
	return UBaseAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayAbilitySystem/BaseAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/BaseAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SlapMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams = {
	&UBaseAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UBaseAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAbilitySystemComponent.OuterSingleton;
}
UBaseAbilitySystemComponent::UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAbilitySystemComponent);
UBaseAbilitySystemComponent::~UBaseAbilitySystemComponent() {}
// ********** End Class UBaseAbilitySystemComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h__Script_SlapMagic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAbilitySystemComponent, UBaseAbilitySystemComponent::StaticClass, TEXT("UBaseAbilitySystemComponent"), &Z_Registration_Info_UClass_UBaseAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAbilitySystemComponent), 3882175088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h__Script_SlapMagic_295756555(TEXT("/Script/SlapMagic"),
	Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h__Script_SlapMagic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h__Script_SlapMagic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
