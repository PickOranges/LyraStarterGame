// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AbilityTask_WaitForTargetLoop.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPawnsOverlappedChangedEvent, const TArray<AActor*>&, OverlappedActors);

/**
 * 
 */
UCLASS()
class LYRAGAME_API UAbilityTask_WaitForTargetLoop : public UAbilityTask
{
	GENERATED_BODY()

};
