// 8.5.3. Pass variables to function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>

float average(float x, float y)
{
	return (x + y) / 2.0f;
}

int main(void)
{
	float value1 = 1.0F;
	float value2 = 2.0F;
	float value3 = 0.0F;


	value3 = average(value1, value2);
	printf("\nThe average is: %f\n", value3);
	return 0;
}
//The average is : 1.500000