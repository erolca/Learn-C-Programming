// 12.11.1. MACRO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define CUBE(x)  x*x*x
#include <stdio.h>

int main()
{
	int k = 5;
	int j = 0;
	j = CUBE(k);

	printf("value of j is %d\n", j);
    return 0;
}

//value of j is 125