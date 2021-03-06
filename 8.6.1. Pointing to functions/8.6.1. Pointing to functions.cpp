// 8.6.1. Pointing to functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int sum(int x, int y)
{
	return x + y;
}


int product(int x, int y)
{
	return x * y;
}


int difference(int x, int y)
{
	return x - y;
}


int main(void)
{
	int a = 10;
	int b = 5;
	int result = 0;
	int(*pfun)(int, int);              /* Function pointer declaration      */

	pfun = sum;
	result = pfun(a, b);                /* Call sum() through pointer        */
	printf("\npfun = sum             result = %d", result);

	pfun = product;
	result = pfun(a, b);                /* Call product() through pointer    */
	printf("\npfun = product         result = %d", result);

	pfun = difference;
	result = pfun(a, b);                /* Call difference() through pointer */
	printf("\npfun = difference      result = %d\n", result);
	return 0;
}
//pfun = sum             result = 15
//pfun = product         result = 50
//pfun = difference      result = 5