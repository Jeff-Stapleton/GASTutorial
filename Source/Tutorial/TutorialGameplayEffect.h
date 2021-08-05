// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "TutorialGameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct FEffectKeyPair
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effects")
	FActiveGameplayEffectHandle EffectHandle;

	FEffectKeyPair();

	FEffectKeyPair(FName id, FActiveGameplayEffectHandle handle);
};
 
UCLASS()
class TUTORIAL_API UTutorialGameplayEffect : public UGameplayEffect
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Effects")
	FName EffectId;
};
