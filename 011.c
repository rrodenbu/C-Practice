/*
 ============================================================================
 Name        : 011.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Switch Statements
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void processColor(char c);
void checkTraffic(void);
void stopDriving(void);
void getReady(void);
void startDriving(void);
void trafficLightMalfunction(void);

int main(void)
{
	checkTraffic();
	return 0;

}

void checkTraffic(void)
{

	printf("What color is the traffic light?\n");
	printf("r=red\n y=yellow\n g=green\n:");
	char color;
	color = getchar();
	processColor(color);

}

void processColor(char color)
{

	switch(color){
		case 'r':
			stopDriving();
			break;
		case 'y':
			getReady();
			break;
		case 'g':
			startDriving();
			break;
		default:
			trafficLightMalfunction();
	}


}

void stopDriving(void)
{

	printf("Stop the car now.\n");

}

void getReady(void)
{

	printf("Get ready to drive.\n");

}

void startDriving(void)
{

	printf("Go now.\n");

}

void trafficLightMalfunction(void)
{

	printf("Uh-oh, there is a problem. STOP!\n");

}
