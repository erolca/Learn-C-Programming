// C size of structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>

 struct  book {
	char bname[30];
	int ssn;
	int pages;
};

struct book b1 = { "Let Us C",1000,90 };







int main()
{
	printf("\nSize of Structure : %d", sizeof(b1));
	return(0);
}