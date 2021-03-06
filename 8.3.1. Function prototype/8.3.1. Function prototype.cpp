// 8.3.1. Function prototype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

int change(int number);                /*Function prototype */

int main(void)
{
	int number = 10;
	int result = 0;

	result = change(number);
	printf("\nIn main, result = %d\tnumber = %d", result, number);
	return 0;
}

int change(int number)
{
	number = 2 * number;
	printf("\nIn function change, number = %d\n", number);
	return number;
}
//In function change, number = 20
//In main, result = 20    number = 10