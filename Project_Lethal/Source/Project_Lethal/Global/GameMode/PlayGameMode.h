// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/GameMode/LCGameMode.h"
#include "PlayGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_LETHAL_API APlayGameMode : public ALCGameMode
{
	GENERATED_BODY()

public:

	APlayGameMode();

	virtual void BeginPlay() override;
	
};
