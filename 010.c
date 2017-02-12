/*
 ============================================================================
 Name        : 010.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : If-Else Statements
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getNumber(void);
void tooSmall(void);
void tooLarge(void);
void justRight(void);
void checkError(int num);

int main(void) {

	int num = getNumber();

}


int getNumber(void)
{

	int num;
	printf("Enter a number between 0 and 100:\n");
	scanf("%d", &num);
	checkError(num);

	return 0;

}

void checkError(int num)
{

	if(num < 0)
		tooSmall();
	else if(num > 100)
		tooLarge();
	else
		justRight();

}

void tooSmall(void)
{

	printf("The number is too small.\n");

}

void tooLarge(void)
{

	printf("The number is too large.\n");

}

void justRight(void)
{

	printf("The number is just right.\n");

}
