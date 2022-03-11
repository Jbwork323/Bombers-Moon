// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class BOMBERSMOONTEST01_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	/* -------------------- *\
	\* \/ Initialization \/ */

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* /\ Initialization /\ *\
	\* -------------------- */

	/* ---------- *\
	\* \/ Tick \/ */

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* /\ Tick /\ *\
	\* ---------- */

	/* ------------- *\
	\* \/ Walking \/ */

private:

	/**
	 * Input axis for recieving the move forward input
	 * 
	 * @param AxisValue - The value of the input axis
	 */
	void InputAxisMoveForward(float AxisValue);

	/**
	 * Input axis for recieving the move right input
	 *
	 * @param AxisValue - The value of the input axis
	 */
	void InputAxisMoveRight(float AxisValue);

	/* /\ Walking /\ *\
	\* ------------- */

	/* ------------- *\
	\* \/ Looking \/ */

private:

	/**
	 * Input axis for recieving the turn input
	 * 
	 * @param AxisValue - The value of the input axis
	 */
	void InputAxisTurn(float AxisValue);

	/**
	 * Input axis for recieving the look up input
	 *
	 * @param AxisValue - The value of the input axis
	 */
	void InputAxisLookUp(float AxisValue);

	/* /\ Looking /\ *\
	\* ------------- */

	/* ------------- *\
	\* \/ Jumping \/ */

private:

	/**
	 * Input action for recieving the jump input
	 */
	void InputActionJump();

	/**
	 * Launches the character into the air
	 */
	void Jump();

	/* /\ Jumping /\ *\
	\* ------------- */
};
