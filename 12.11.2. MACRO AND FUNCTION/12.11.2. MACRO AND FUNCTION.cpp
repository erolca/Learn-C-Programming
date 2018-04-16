// 12.11.2. MACRO AND FUNCTION.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define add(x1, y1)  x1 + y1
#define mult(x1,y1)  x1 * y1

//Macro just indicates replacement, not the function call.
int main()
{
	int a, b, c, d, e;
	a = 2;
	b = 3;
	c = 4;
	d = 5;
	e = mult(add(a, b), add(c, d));

	// mult(a+b, c+d)
	// a+b * c+d

	printf("The value of e is %d\n", e);
    return 0;
}

//The value of e is 19

