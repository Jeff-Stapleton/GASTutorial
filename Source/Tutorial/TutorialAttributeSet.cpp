// Fill out your copyright notice in the Description page of Project Settings.

#include "TutorialAttributeSet.h"
#include "Net/UnrealNetwork.h"

UTutorialAttributeSet::UTutorialAttributeSet()
	: MaxHealth(100.0f)
{

}

void UTutorialAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTutorialAttributeSet, MaxHealth);
}

void UTutorialAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UTutorialAttributeSet, MaxHealth, OldMaxHealth);
}