// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawHUD.h"

void ADrawHUD::drawCA()
{

	if (generation == 0)
	{
		for (int row = 0; row < MAX_ROWS; row++)
		{
			for (int col = 0; col < MAX_COLUMNS; col++)
			{
				cells[row][col] = 0;

			}
		}

		cells[0][MAX_COLUMNS / 2] = 1;

	}
		
	generation++;

	if (generation > MAX_ROWS - 1)
		generation = 0;

	generate();

	drawGeneration();




}

void ADrawHUD::generate() 
{

	for (int M = 0; M < MAX_COLUMNS; M++)
	{
		int L = M - 1;
		int R = M + 1;

		if (M == 0)
			L = MAX_COLUMNS - 1;
		
		if (M == MAX_COLUMNS - 1)
			R = 0;
	
		int left  = cells[generation-1][L];
		int me	  = cells[generation-1][M];
		int right = cells[generation-1][R];

		cells[generation][M] = rules(left, me, right);

	}


}
void ADrawHUD::drawGeneration() 
{


	float red = 0.5f;    // FMath::RandRange(0.0f, 1.0f);
	float green = 0.5f;  // FMath::RandRange(0.0f, 1.0f);
	float blue = 0.5f;   // FMath::RandRange(0.0f, 1.0f);

	FLinearColor mycolor = FLinearColor(red, green, blue);

	for (int row = 0; row < MAX_ROWS; row++)
	{
		for (int col = 0; col < MAX_COLUMNS; col++)
		{
			if(cells[row][col] == 1)
				DrawRect(mycolor, 10 * col, 10 * row, 10, 10);

		}
	}

}
int  ADrawHUD::rules(int left, int me, int right) 
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



