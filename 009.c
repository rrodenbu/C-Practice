/*
 ============================================================================
 Name        : 009.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Mathematical Expressions
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

#define PI 3.14159

int main(void) 
{

	puts("Mathematical Expressions:");
	puts("_________________________");

	// Find area of circle

	float radius = 5.0;
	float area;

	area = pi * radius * radius;
	printf("A circle with radius %f has a area:%f\n", radius, area);

	// Find the two real roots of a quadratic equation

	float a = 2;
	float b = 7;
	float c = 4;

	float discrinate = sqrt(b*b - 4*a*c);
	float root_1 = (-b + discriminate)/(4*a);
	float root_2 = (-b - discriminate)/(4*a);

	printf("Root 1: %f\n", root_1);
	printf("Root 2: %f\n", root_2);

	// Find the volume of a cylinder

	

}