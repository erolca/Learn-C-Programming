// 10.9.2.	Attempting to modify data through a non-constant pointer to constant data. : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void f(const int *xPtr);

int main()
{
	int y;

	f(&y);

	return 0;
}

void f(const int *xPtr)
{
	//*xPtr = 100;  /* error: cannot modify a const object */
}