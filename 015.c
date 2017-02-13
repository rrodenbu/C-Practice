/*
 ============================================================================
 Name        : 015.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Two-Dimensional Arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_ROWS 2
#define NUM_COLS 3

void printTable(int table[][NUM_COLS]);

int main(void)
{

	int table[NUM_ROWS][NUM_COLS] = {
		{1,2,3},
		{4,5,6}
	};

	printf("Row 1 Column 2 contains: %d\n", table[0][1]);

	printTable(table);

	return 0;

}

void printTable(int table[][NUM_COLS])
{


	for(int i=0; i<NUM_ROWS; i++){
		printf("{ ");
		for(int j=0; j<NUM_COLS; j++){
			printf("%d ", table[i][j]);
		}
		printf("}\n");
	}

}