// 10.9.3. Using a non-constant pointer to non-constant data.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); /* prototype */

int main()
{
	char string[] = "characters and abcde";

	printf("The string before conversion is: %s", string);
	convertToUppercase(string);
	printf("\nThe string after conversion is: %s\n", string);

	return 0;

}

void convertToUppercase(char *sPtr)
{
	while (*sPtr != '\0') {
		if (islower(*sPtr)) {
			*sPtr = toupper(*sPtr);
		}
		++sPtr;
	}
}
//The string before conversion is : characters and abcde
//The string after conversion is : CHARACTERS AND ABCDE