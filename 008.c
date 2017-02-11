/*
 ============================================================================
 Name        : 008.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Bit-level calculations and bitwise operations
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	puts("Bit-level calculations:");
	puts("_______________________");

	unsigned int x = 10;
	unsigned int y = 1;
	unsigned int result;

	// and
	result = x & y;
	printf("x & 1 = %d\n", result);

	// or
	result = x | y;
	printf("x | 1 = %d\n", result);

	// xor
	result = x ^ y;
	printf("x >> 1 = %d\n", result);

	// ones complement
	result = ~x;
	printf("~x = %d\n", result);

	// Right-shift 1 is equivalent to dividing by 2
	result = x >> 1;
	printf("x >> 1 (Divide 2^n) = %d\n", result);

	// Left-shift 1 is equivalent to multiplying by 2
	result = y << 1;
	printf("y << 2 (Multiply 2^n) = %d\n",result);

	return 0;
}