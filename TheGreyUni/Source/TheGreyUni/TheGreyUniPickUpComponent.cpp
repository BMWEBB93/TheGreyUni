// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheGreyUniPickUpComponent.h"

UTheGreyUniPickUpComponent::UTheGreyUniPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UTheGreyUniPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UTheGreyUniPickUpComponent::OnSphereBeginOverlap);
}

void UTheGreyUniPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ATheGreyUniCharacter* Character = Cast<ATheGreyUniCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
