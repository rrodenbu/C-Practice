/*
 ============================================================================
 Name        : 007.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Incrementing Oddities
 ============================================================================
 */

#import <stdio.h>

int main(void) 
{

	int random = 2;

	printf("random:   %d \n", random);
	printf("++random: %d \n", ++random); //Increments then prints
	printf("random++: %d \n", random++); //Prints then increments
	printf("random:   %d \n", random);

	return 0;

}