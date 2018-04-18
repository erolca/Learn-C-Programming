// 10.9.4. A non-constant pointer to constant data.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void printCharacters(const char *sPtr);

int main()
{
	char string[] = "print characters of a string";

	printf("The string is:\n");
	printCharacters(string);
	printf("\n");

	return 0;

}

void printCharacters(const char *sPtr)
{
	for (; *sPtr != '\0'; sPtr++) {
		printf("%c", *sPtr);
	}

}
//The string is :
//print characters of a string