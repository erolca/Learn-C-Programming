// 8.7.3. Functions That Return value.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int getval(void);

int main()
{
	int weight;


	weight = getval();

	printf("\nsome integer val: %d ",weight);
	printf("\n");
	return(0);
}

int getval(void)
{
	char input[20];
	int x;
	printf("some integer:");
	gets_s(input);
	x = atoi(input);
	return(x);
}
//some integer : 123
