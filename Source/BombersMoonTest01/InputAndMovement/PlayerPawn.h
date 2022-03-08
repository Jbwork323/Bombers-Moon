// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

/**
 * The player pawn. Handles input and movement
 */
UCLASS()
class BOMBERSMOONTEST01_API APlayerPawn : public APawn
{
	GENERATED_BODY()

	/* -------------------- *\
	\* \/ Initialization \/ */

public:

	// Sets default values for this pawn's properties
	APlayerPawn();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/* /\ Initialization /\ *\
	\* -------------------- */

	/* ---------- *\
	\* \/ Tick \/ */

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/* /\ Tick /\ *\
	\* ---------- */

	/* ----------- *\
	\* \/ Input \/ */

public:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	/**
	 * Input action of moving forward
	 * 
	 * @param Scale - A number from -1 to 1 that defines how much moving forward is being inputted
	 */
	UFUNCTION()
	void InputMoveForward(float Scale);

	/**
	 * Input action of moving right
	 *
	 * @param Scale - A number from -1 to 1 that defines how much moving forward is being inputted
	 */
	UFUNCTION()
	void InputMoveRight(float Scale);

	/* /\ Input /\ *\
	\* ----------- */

	/* ------------- *\
	\* \/ Walking \/ */

public:

	//The walk speed of the player
	UPROPERTY(EditDefaultsOnly, Category = "Walking")
	float MaxWalkSpeed;

	//The multiplier of the walk speed
	UPROPERTY(EditAnywhere, Category = "Walking")
	float WalkSpeedMultiplier{ 1.0f };

	//The acceleration that it takes for the player to get up to full walk speed
	UPROPERTY(EditAnywhere, Category = "Walking")
	float WalkAcceleration;

	/* /\ Walking /\ *\
	\* ------------- */

	/* ------------- *\
	\* \/ Physics \/ */

private:

	/**
	 * Updates the position of the player based on velocity
	 */
	UFUNCTION()
	void UpdatePosition();

	/**
	 * Adds velocity to the velocity of the player
	 * 
	 * @param AddedVelocity - The added velocity
	 */
	UFUNCTION()
	void AddVelocity(FVector AddedVelocity);

	/**
	 * Sets the velocity of the player
	 * 
	 * @param NewVelocity - The new velocity
	 */
	UFUNCTION()
	void SetVelocity(FVector NewVelocity);

	//Stores the current velocity of the player
	UPROPERTY()
	FVector Velocity;

	/* /\ Physics /\ *\
	\* ------------- */
};
