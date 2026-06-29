// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAbilitySystemComponent.h"
#include "SlapMagic/Characters/CharacterBase.h"

void UBaseAbilitySystemComponent::OnRep_ActivateAbilities()
{
	Super::OnRep_ActivateAbilities();

    ACharacterBase* Character = Cast<ACharacterBase>(GetOwner());
    if (Character)
    {
        Character->SendAbilitiesChangedEvent();

        bool bAbilitiesChanged = false;

        if (lastActivatableAbilities.Num() != ActivatableAbilities.Items.Num())
        {
            bAbilitiesChanged = true;
        }
        else
        {
            for (int32 i = 0; i < ActivatableAbilities.Items.Num(); ++i)
            {
                if (ActivatableAbilities.Items[i].Ability != lastActivatableAbilities[i].Ability)
                {
                    bAbilitiesChanged = true;
                    break;
                }
            }
        }

        if (bAbilitiesChanged)
        {
            Character->SendAbilitiesChangedEvent();
            lastActivatableAbilities = ActivatableAbilities.Items;
        }
    }
}