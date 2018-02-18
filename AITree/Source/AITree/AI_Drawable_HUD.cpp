// Fill out your copyright notice in the Description page of Project Settings.

#include "AI_Drawable_HUD.h"
int nextgen[MAX_CELLS][MAX_GENERATIONS];
void AAI_Drawable_HUD::RunWalker_Algorithm()
{

}
void AAI_Drawable_HUD::RunCA_Algorithm()
{

	

	if (generation == 0)
	{

		//initialize all cells to zero
		for (int i = 0; i < MAX_CELLS; i++)
			cells[i] = 0;

		//create the first genereration, basicaly make middle cell 1
		cells[MAX_CELLS / 2] = 1;

	}

	//make next gen
	generate();

	//draw the next gen
	drawGeneration();

	//increment generation
	generation++;
	
	if (generation > MAX_GENERATIONS - 1)
		generation = 0;

}

void AAI_Drawable_HUD::generate()
{
	
	// determine new state by examing current state, and neighbor states
	// wrapping around for edge states
	for (int i = 0; i < MAX_CELLS; i++) 
	{
		//determine left and right indexes
		int L = i - 1;
		int R = i + 1;

		// if i is the first cell, use the last cell as left neighbor
		if (i == 0)
			L = MAX_CELLS - 1;

		//if i is the last cell, use the first cell as right neighbor
		if (i == MAX_CELLS - 1)
			R = 0;


		int left = cells[L];    // Left neighbor state
		int me = cells[i];      // Current state
		int right = cells[R];	// Right neighbor state
	
		
		nextgen[i][generation] = rules(left, me, right); // Compute next generation state based on ruleset
	}

	//now put next gen into current gen
	for (int i = 0; i < MAX_CELLS; i++)
	{
		cells[i] = nextgen[i][generation];
	}

}

void AAI_Drawable_HUD::drawGeneration()
{

	FLinearColor color = FLinearColor(0.5f, 0.5f, 0.5f);

	for (int g = 0; g < MAX_GENERATIONS; g++)
	{
		for (int i = 0; i < MAX_CELLS; i++)
		{
			if (nextgen[i][g] == 1)
				DrawRect(color, 10 * i, 10 * g, 10, 10);

		}
	}

}



// Implementing the Wolfram rules
// Could be improved and made more concise, but here we can explicitly see what is going on for each case
int AAI_Drawable_HUD::rules(int left, int me, int right)
{

	if (left == 1 && me == 1 && right == 1) return ruleset[0];
	if (left == 1 && me == 1 && right == 0) return ruleset[1];
	if (left == 1 && me == 0 && right == 1) return ruleset[2];
	if (left == 1 && me == 0 && right == 0) return ruleset[3];
	if (left == 0 && me == 1 && right == 1) return ruleset[4];
	if (left == 0 && me == 1 && right == 0) return ruleset[5];
	if (left == 0 && me == 0 && right == 1) return ruleset[6];
	if (left == 0 && me == 0 && right == 0) return ruleset[7];
	return 0;
}
