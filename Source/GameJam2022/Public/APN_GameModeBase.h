// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "APN_WorldSettings.h"
#include "GameFramework/GameModeBase.h"
#include "APN_GameModeBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GAMEJAM2022_API AAPN_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure)
	AAPN_WorldSettings* GetWorldSettings();
};
