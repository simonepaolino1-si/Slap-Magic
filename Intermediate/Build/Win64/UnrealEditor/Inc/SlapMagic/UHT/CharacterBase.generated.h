// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CharacterBase.h"

#ifdef SLAPMAGIC_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define SLAPMAGIC_CharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGameplayAbility;
struct FGameplayAbilitySpecHandle;

// ********** Begin Class ACharacterBase ***********************************************************
#define FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendAbilitiesChangedEvent); \
	DECLARE_FUNCTION(execRemoveAbilities); \
	DECLARE_FUNCTION(execGrantAbilities);


SLAPMAGIC_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();

#define FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SLAPMAGIC_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SlapMagic"), Z_Construct_UClass_ACharacterBase_NoRegister) \
	DECLARE_SERIALIZER(ACharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ACharacterBase*>(this); }


#define FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACharacterBase(ACharacterBase&&) = delete; \
	ACharacterBase(const ACharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase) \
	NO_API virtual ~ACharacterBase();


#define FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_11_PROLOG
#define FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACharacterBase;

// ********** End Class ACharacterBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Slap_Magic_Source_SlapMagic_Characters_CharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
