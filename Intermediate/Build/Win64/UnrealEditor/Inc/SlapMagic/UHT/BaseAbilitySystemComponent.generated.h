// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitySystem/BaseAbilitySystemComponent.h"

#ifdef SLAPMAGIC_BaseAbilitySystemComponent_generated_h
#error "BaseAbilitySystemComponent.generated.h already included, missing '#pragma once' in BaseAbilitySystemComponent.h"
#endif
#define SLAPMAGIC_BaseAbilitySystemComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseAbilitySystemComponent **********************************************
SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();

#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UBaseAbilitySystemComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLAPMAGIC_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlapMagic"), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister) \
	DECLARE_SERIALIZER(UBaseAbilitySystemComponent)


#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseAbilitySystemComponent(UBaseAbilitySystemComponent&&) = delete; \
	UBaseAbilitySystemComponent(const UBaseAbilitySystemComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAbilitySystemComponent) \
	NO_API virtual ~UBaseAbilitySystemComponent();


#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h_12_PROLOG
#define FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseAbilitySystemComponent;

// ********** End Class UBaseAbilitySystemComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slap_Magic_Source_SlapMagic_GameplayAbilitySystem_BaseAbilitySystemComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
