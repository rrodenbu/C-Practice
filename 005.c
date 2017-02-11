/*
 ============================================================================
 Name        : 005.c
 Author      : Riley Rodenburg
 Source      : Lynda Tutorial: Isac Artzi
 Description : Void Data Type& Pointers Intro
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

	void* foo;    // declare foo, a pointer to a void object
	&foo;   	  // the memory address of foo
	*foo;	      // de-reference the pointer - gives the void object (value)

	return 0;

}