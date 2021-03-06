// 8.5.4. Use pointer as function parameter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int change(int* pnumber);              /* Function prototype              */

int main(void)
{
	int number = 10;
	int *pnumber = &number;
	int result = 0;

	result = change(pnumber);
	//result = change(&number);
	printf("\nIn main, result = %d\tnumber = %d", result, number);
	return 0;
}

int change(int *pnumber)
{
	*pnumber *= 2;
	printf("\nIn function change, *pnumber = %d\n", *pnumber);

	return *pnumber;
}

//In function change, *pnumber = 20
//
//In main, result = 20    number = 20