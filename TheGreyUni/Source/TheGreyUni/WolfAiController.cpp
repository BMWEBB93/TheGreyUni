// Fill out your copyright notice in the Description page of Project Settings.

#include "Wolf.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "WolfAiController.h"

AWolfAiController::AWolfAiController() 
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BBC = CreateDefaultSubobject<UBlackboardComponent>("Blackboard");
	BTC = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTree");	
}

void AWolfAiController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	AWolf* MyWolf = Cast<AWolf>(InPawn);
	if (MyWolf && MyWolf->TreeAsset)
	{
		BBC->InitializeBlackboard(*MyWolf->TreeAsset->BlackboardAsset);
		EnemyKeyID = BBC->GetKeyID("TargetActor");
		BTC->StartTree(*MyWolf->TreeAsset);
	}
}