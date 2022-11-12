// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "APN_WorldSettings.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class GAMEJAM2022_API AAPN_WorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=GameMode)
	bool bUseMainMenu = false;
};
