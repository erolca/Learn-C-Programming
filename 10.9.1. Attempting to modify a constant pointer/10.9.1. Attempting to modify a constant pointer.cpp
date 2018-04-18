// 10.9.1. Attempting to modify a constant pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//10.9.1.	Attempting to modify a constant pointer to non-constant data

int main()
{
	int x;
	int y;

	int * const ptr = &x;

	*ptr = 7; /* allowed: *ptr is not const */
			  // ptr = &y; /* error: ptr is const; cannot assign new address */

	return 0;

}