// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "BaseAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class SLAPMAGIC_API UBaseAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

protected:

	TArray<FGameplayAbilitySpec> lastActivatableAbilities;

protected:

	void OnRep_ActivateAbilities() override;
	
};
