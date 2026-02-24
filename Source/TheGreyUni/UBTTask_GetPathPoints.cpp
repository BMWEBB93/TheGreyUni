// Fill out your copyright notice in the Description page of Project Settings.


#include "WolfAiController.h"
#include "Components/SplineComponent.h"
#include "Wolf.h"
#include "PatrolPath.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"

UUBTTask_GetPathPoints::UUBTTask_GetPathPoints()
{
	bCreateNodeInstance = true;
	NodeName = "GetPathPoints";
}

