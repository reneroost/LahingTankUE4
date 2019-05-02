// Fill out your copyright notice in the Description page of Project Settings.

#include "TankMangijaJuhtija.h"
#include "LahingTank.h" 

void ATankMangijaJuhtija::BeginPlay() 
{
	Super::BeginPlay();

	auto JuhitavTank = SaaJuhitavTank();
	if (!JuhitavTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("MangijaJuhtija ei oma tanki"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MangijaJuhtija omab tanki %s"), *(JuhitavTank->GetName()));
	}
	UE_LOG(LogTemp, Warning, TEXT("MangijaJuhtija BeginPlay()"));
}

ATank* ATankMangijaJuhtija::SaaJuhitavTank() const 
{
	return Cast<ATank>(GetPawn());
}

