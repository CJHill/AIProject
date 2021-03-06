// Fill out your copyright notice in the Description page of Project Settings.


#include "NonHostileAI.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
// Sets default values
ANonHostileAI::ANonHostileAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 600.0f, 0.0f);
	

}

// Called when the game starts or when spawned
void ANonHostileAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANonHostileAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ANonHostileAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

