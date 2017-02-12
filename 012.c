/*
 ============================================================================
 Name        : 012.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : For Loops
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void listEvenNumbers(void);
void listOddNumbers(void);

int main(void)
{

	listEvenNumbers();
	listOddNumbers();

	return 0;

}

void listEvenNumbers()
{

	printf("All the even numbers: \n");
	printf("––––––––––––––––––––– \n");
	for(int i = 0; i <= 100; i+=2){
		printf("%d\n", i);
	}

}

void listOddNumbers()
{

	printf("All the odd numbers: \n");
	printf("–––––––––––––––––––– \n");
	for(int i = 1; i <= 100; i+=2){
		printf("%d\n", i);
	}

}

