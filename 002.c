/*
 ============================================================================
 Name        : 002.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Helper Functions
 ============================================================================
 */

#include <stdio.h>

//Function prototypes
void helper_function_1(void);
void helper_function_2(void);

int main(void) 
{
	helper_function_1();
	helper_function_2();

	return 0;
}

void helper_function_1(void)
{

	printf("Please enter a number: \n");

}

void helper_function_2(void) {

	int a_number;
	scanf("%d", &a_number); 				//&gets the address not the value.
	printf("You entered %d \n", a_number);

}