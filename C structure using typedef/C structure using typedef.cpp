// C structure using typedef.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct b1 {
	char bname[30];
	int ssn;
	int pages;
}book;

book b1 = { "Let Us C",1000,90 };

struct Vehicle
{
	int wheels;
	char vname[20];
	char color[10];
}v1 = { 4,"Nano","Red" };


int main()
{
	printf("\nName of Book : %s", b1.bname);
	printf("\nSSN of Book : %d", b1.ssn);
	printf("\nPages in Book : %d", b1.pages);

	printf("Vehicle No of Wheels : %d", v1.wheels);
	printf("Vehicle Name           : %s", v1.vname);
	printf("Vehicle Color          : %s", v1.color);

	return(0);
}

