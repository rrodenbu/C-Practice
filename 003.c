/*
 ============================================================================
 Name        : 003.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Declaring/Assigning Variables
 ============================================================================
 */

#include <stdio.h>

int main(void) 
{

	float price_of_gas_in_colorado = 0.99;
	int y = 0;
	short a = 1;
	double radius = 2.34567;
	y = 3;

	printf("Price of gas: %f \n", price_of_gas_in_colorado);
	printf("y: %d \n", y);
	printf("a: %d \n", a);
	printf("radius: %lf \n", radius);

	return 0;
}