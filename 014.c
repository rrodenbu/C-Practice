/*
 ============================================================================
 Name        : 014.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Accessing Elements of an Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_CLASSROOMS 20

void printArray(char dataName[], int dataSet[], int dataLength);

int main(void)
{

	int classrooms[NUMBER_OF_CLASSROOMS] = {15, 18, 10, 23, 15};
	classrooms[3] += 2;
	printf("The 5th element is: %d\n", classrooms[4]);

	printArray("classrooms", classrooms, NUMBER_OF_CLASSROOMS); 

	return 0;

}

void printArray(char dataName[], int dataSet[], int dataLength)
{

	for(int i=0; i<NUMBER_OF_CLASSROOMS; i++)
	{

		printf("%s[%d]: %d\n", dataName, i, dataSet[i]);

	}

}