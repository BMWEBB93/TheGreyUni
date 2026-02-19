// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "Wolf.generated.h"

/**
 * 
 */
UCLASS()
class THEGREYUNI_API AWolf : public ABaseCharacter
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UBehaviorTree* TreeAsset;
};
