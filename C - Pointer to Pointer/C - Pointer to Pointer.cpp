// C - Pointer to Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>



void exp(int **p)
{
	int  *ptr;
	int val;
	val = 10;
	ptr = &val;
	(*p) = ptr;
	//**p = 20;

}

int main() {

	int  var;

	// pointer for var
	int  *ptr;

	// double pointer for ptr2
	int  **pptr;

	//var = 3000;
	//exp(&ptr);

	// storing address of var in ptr2
	ptr = &var;

	// Storing address of ptr2 in ptr1
	pptr = &ptr;


	// Displaying value of var using
	// both single and double pointers
	printf("Value of var = %d\n", var);
	printf("Value available at *ptr = %d\n", *ptr);
	printf("Value available at **pptr = %d\n", **pptr);
	printf("Adress available at &ptr = %p\n", ptr);
	printf("Value available at &pptr = %p\n", pptr);

	return 0;
}
