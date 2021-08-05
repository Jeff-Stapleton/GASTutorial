// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialGameplayEffect.h"

FEffectKeyPair::FEffectKeyPair()
{

}

FEffectKeyPair::FEffectKeyPair(FName id, FActiveGameplayEffectHandle handle)
{
	Id = id;
	EffectHandle = handle;
}