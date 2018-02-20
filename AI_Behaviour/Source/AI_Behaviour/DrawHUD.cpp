// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawHUD.h"


void ADrawHUD::drawGOL()
{


	if (GOLinit == false)
	{
		initGOL();
		GOLinit = true;

	}

	generateGOL();
	drawGeneration();

}

void ADrawHUD::initGOL()
{

	for (int row = 1; row < MAX_ROWS ;row++) 
	{
		for (int col = 0; col < MAX_COLUMNS; col++)
		{
			cells[row][col] = FMath::RandRange(0,1);
		}
	}

}

void ADrawHUD::generateGOL()
{
	int next[MAX_ROWS][MAX_COLUMNS] = { 0 };

	// Loop through every spot in our 2D array and check spots neighbors
	for (int row = 1; row < MAX_ROWS - 1; row++) {
		for (int col = 1; col < MAX_COLUMNS - 1; col++) {

			// Add up all the states in a 3x3 surrounding grid, not including where i am now
			int neighbors = 0;
			
			neighbors += cells[row - 1][col];
			neighbors += cells[row + 1][col];
			neighbors += cells[row][col - 1];
			neighbors += cells[row][col + 1];			
			neighbors += cells[row + 1][col + 1];
			neighbors += cells[row + 1][col - 1];
			neighbors += cells[row - 1][col + 1];
			neighbors += cells[row - 1][col - 1];


			// Rules of Life
			if ((cells[row][col] == 1) && (neighbors <  2))				// Loneliness 
				next[row][col] = 0;           
			else if ((cells[row][col] == 1) && (neighbors >  3))		// Overpopulation
				next[row][col] = 0;           
			else if ((cells[row][col] == 0) && (neighbors == 3))		// Reproduction 
				next[row][col] = 1;           
			else														// Stasis         
				next[row][col] = cells[row][col];  
		}
	}

	//now swap new values for old
	for (int row = 1; row < MAX_ROWS - 1; row++) 
	{
		for (int col = 1; col < MAX_COLUMNS - 1; col++) 
		{
		
			cells[row][col] = next[row][col];
		
		}
	}

}

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



