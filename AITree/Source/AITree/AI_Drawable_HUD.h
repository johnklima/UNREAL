// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AI_Drawable_HUD.generated.h"

//for CA
#define MAX_CELLS 100
#define MAX_GENERATIONS 100

//for Walker
#define MAX_COLUMNS 100
#define MAX_ROWS 100


/**
 * 
 */
UCLASS()
class AITREE_API AAI_Drawable_HUD : public AHUD
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "DrawAlgorithms")
	void RunCA_Algorithm();

	UFUNCTION(BlueprintCallable, Category = "DrawAlgorithms")
	void RunWalker_Algorithm();

private:

	//keep track of generation
	int generation = 0;
	int ruleset[8] = { 0, 1, 0, 1, 1, 0, 1, 0 };	// array to store the ruleset, for example {0,1,1,0,1,1,0,1}
	int rules(int left, int me, int right);
	int cells[MAX_CELLS] = { 0 };							// array to hold current generation to be drawn on screen

	void generate();
	void drawGeneration();
	
	
};
