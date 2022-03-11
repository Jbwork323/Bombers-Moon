// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(FName("MoveForward"), this, &APlayerCharacter::InputAxisMoveForward);
	PlayerInputComponent->BindAxis(FName("MoveRight"), this, &APlayerCharacter::InputAxisMoveRight);
	PlayerInputComponent->BindAxis(FName("Turn"), this, &APlayerCharacter::InputAxisTurn);
	PlayerInputComponent->BindAxis(FName("LookUp"), this, &APlayerCharacter::InputAxisLookUp);

	PlayerInputComponent->BindAction(FName("Jump"), EInputEvent::IE_Pressed, this, &APlayerCharacter::InputActionJump);
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/* ------------- *\
\* \/ Walking \/ */

/**
 * Input axis for recieving the move forward input
 *
 * @param AxisValue - The value of the input axis
 */
void APlayerCharacter::InputAxisMoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector(), AxisValue);
}

/**
 * Input axis for recieving the move right input
 *
 * @param AxisValue - The value of the input axis
 */
void APlayerCharacter::InputAxisMoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue);
}

/* /\ Walking /\ *\
\* ------------- */

/* ------------- *\
\* \/ Looking \/ */

/**
 * Input axis for recieving the turn input
 *
 * @param AxisValue - The value of the input axis
 */
void APlayerCharacter::InputAxisTurn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

/**
 * Input axis for recieving the look up input
 *
 * @param AxisValue - The value of the input axis
 */
void APlayerCharacter::InputAxisLookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

/* /\ Looking /\ *\
\* ------------- */

/* ------------- *\
\* \/ Jumping \/ */

/**
 * Input action for recieving the jump input
 */
void APlayerCharacter::InputActionJump()
{
	Jump();
}

void APlayerCharacter::Jump()
{
	if (!GetCharacterMovement()->IsFalling())
	{
		float MagicTestNumber = 200;
		LaunchCharacter((GetActorForwardVector() * MagicTestNumber) + FVector(0, 0, MagicTestNumber), false, false);
	}
}

/* /\ Jumping /\ *\
\* ------------- */