// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdatePosition();
}

/* ----------- *\
\* \/ Input \/ */

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/**
 * Input action of moving forward
 *
 * @param Scale - A number from -1 to 1 that defines how much moving forward is being inputted
 */
void APlayerPawn::InputMoveForward(float Scale)
{
	FVector VelocityToAdd = FVector(1, 0, 0).RotateAngleAxis(GetActorRotation().Yaw, (FVector(0, 0, 1))) * Scale * WalkAcceleration;
	if (VelocityToAdd.Length > MaxWalkSpeed)
	{
		VelocityToAdd.Normalize();
	}
	AddVelocity(FVector(1, 0, 0).RotateAngleAxis(GetActorRotation().Yaw, (FVector(0, 0, 1))) * Scale * WalkAcceleration);
}

/**
 * Input action of moving right
 *
 * @param Scale - A number from -1 to 1 that defines how much moving forward is being inputted
 */
void APlayerPawn::InputMoveRight(float Scale)
{
	AddVelocity(FVector(0, 1, 0).RotateAngleAxis(GetActorRotation().Yaw, (FVector(0, 0, 1))) * Scale * WalkAcceleration);
}

/* /\ Input /\ *\
\* ----------- */

/* ------------- *\
\* \/ Physics \/ */

/**
 * Updates the position of the player based on velocity
 */
void APlayerPawn::UpdatePosition()
{
	SetActorLocation(Velocity + GetActorLocation());
}

/**
 * Adds velocity to the velocity of the player
 *
 * @param AddedVelocity - The added velocity
 */
void APlayerPawn::AddVelocity(FVector AddedVelocity)
{
	Velocity += AddedVelocity;
}

/**
 * Sets the velocity of the player
 *
 * @param NewVelocity - The new velocity
 */
void APlayerPawn::SetVelocity(FVector NewVelocity)
{
	Velocity = NewVelocity;
}

/* /\ Physics /\ *\
\* ------------- */