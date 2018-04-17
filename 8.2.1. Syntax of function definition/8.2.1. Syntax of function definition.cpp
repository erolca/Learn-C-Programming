// 8.2.1. Syntax of function definition.cpp : Defines the entry point for the console application.
//
/*
The general format of a function is

<Return type>   <Function name>   <Parameter list>
{
	local definitions;
	statements;
	Return value;

}
*/

#include "stdafx.h"

#include <stdio.h>

int f1(int j, int f) {
	int k;
	k = j + f;
	return k;
}

int main() {
	int i = 3;
	int j = 6;

	int k = f1(i, j);

	printf("%d", k);
	return 0;
}
//9