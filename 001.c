/*
 ============================================================================
 Name        : 001.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : User Input
 			   Types of #define
 			   Types of #include
 ============================================================================
 */

#include <stdio.h>

//#include "randomLibraryInMyDirectory.h" 	//looks in local directory

#define MSG "Random defined message."
#define WORK_WEEK 5

int main(void) 
{

	int a_number;

	printf("Please enter a number: \n");
	scanf("%d", &a_number); 				//&gets the address not the value.
	printf("You entered %d \n", a_number);

	return 0;
}