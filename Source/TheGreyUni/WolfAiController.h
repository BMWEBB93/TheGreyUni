// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WolfAiController.generated.h"

/**
 * 
 */
UCLASS()
class THEGREYUNI_API AWolfAiController : public AAIController
{
	GENERATED_BODY()
	
public:
	AWolfAiController();

	UPROPERTY(transient)
	class UBehaviorTreeComponent* BTC;
	UPROPERTY(transient)
	class UBlackboardComponent* BBC;
	uint16 EnemyKeyID; //This variable is not used today, but a usual practice

protected:
	virtual void OnPossess(APawn* InPawn) override;

};
