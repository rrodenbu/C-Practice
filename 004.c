/*
 ============================================================================
 Name        : 004.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Displays sizes of integer data types
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

	/*
	 * 1 byte = 8 bits
	 * 4 byte = 8*4 = 32 bits
	 * max number = 2^(# bits)
	 */

	puts("Memory size of each type");
	puts("------------------------\n");

	printf("Storage size for char :   		   %lu bytes\n", sizeof(char));
	printf("Storage size for unsigned char :   %lu bytes\n", sizeof(unsigned char));
	printf("Storage size for signed char :     %lu bytes\n", sizeof(signed char));
	printf("Storage size for int :  	 	   %lu bytes\n", sizeof(int));
	printf("Storage size for unsigned int :    %lu bytes\n", sizeof(unsigned int));
	printf("Storage size for short :  		   %lu bytes\n", sizeof(short));
	printf("Storage size for unsigned short :  %lu bytes\n", sizeof(unsigned short));
	printf("Storage size for long :  		   %lu bytes\n", sizeof(long));
	printf("Storage size for unsigned long :   %lu bytes\n", sizeof(unsigned long));

	printf("Storage size for void :   		   %lu bytes\n", sizeof(void));

	return 0;

}