/*
 ============================================================================
 Name        : 013.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Do-While Loops
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getInputData1(void);
void getInputData2(void);

int main(void)
{
	getInputData1();
	getInputData2();

}

//Using Do-While (Doesn't check condition first)
void getInputData1(void)
{

	char c = 'x';
	int testVariable = 0;
	printf("%c\n", c);
	do{
		testVariable = 999;
		printf("Enter a letter:");
		c = getchar();
		printf("You entered: %c \n",c);
		getchar();
	}while(c!='x');
	printf("\nYou ented x and the loop exited\n");
	printf("testVariable = %d\n", testVariable);

}

//Using WHILE loop (Checks condition first)
void getInputData2(void){
	char c = 'x';
	int testVariable = 0;
	while(c != 'x'){
		testVariable = 999;
		printf("Enter a letter:");
		c = getchar();
		printf("You entered: %c \n",c);
		getchar();
	}
	printf("\nYou entered x and the loop exited\n");
	printf("testVariable = %d\n", testVariable);
}

