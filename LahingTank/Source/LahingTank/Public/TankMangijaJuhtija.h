// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankMangijaJuhtija.generated.h"

/**
 * 
 */
UCLASS()
class LAHINGTANK_API ATankMangijaJuhtija : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* SaaJuhitavTank() const;

	virtual void BeginPlay() override;
};
