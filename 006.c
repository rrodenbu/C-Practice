/*
 ============================================================================
 Name        : 006.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char *p = "String"; 	// Declaring pointer that pionts to a string somewhere
							// Modifying this string is undefined behavior

	char p2[] = "String"; 	// Leaves it the compiler to determine size of array

	char p3[7] = "String";	// Correct declaration ('\0' counts as a character)


	return 0;

}