// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DrawHUD.generated.h"
#define MAX_COLUMNS 100
#define MAX_ROWS 100
/**
 * 
 */
UCLASS()
class AI_BEHAVIOUR_API ADrawHUD : public AHUD
{
	GENERATED_BODY()
	
public:
		UFUNCTION(BlueprintCallable, Category = "DrawAlgorithms")
		void drawCA();
	

private:

	int curX = 0;
	int curY = 0;

	int generation = 0;
	
	//int ruleset[8] = { 0,1,0,1,1,0,1,0 };

	int ruleset[8] = { 1,0,1,0,0,1,0,1 };

	int cells[MAX_ROWS][MAX_COLUMNS] = { 0 };

	void generate();
	void drawGeneration();
	int  rules(int left, int me, int right);


};
