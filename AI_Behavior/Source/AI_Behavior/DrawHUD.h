// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DrawHUD.generated.h"

/**
 * say some thing here about my code
 */
UCLASS()
class AI_BEHAVIOR_API ADrawHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "DrawAlgorithms")
	void drawRectangle();

};
