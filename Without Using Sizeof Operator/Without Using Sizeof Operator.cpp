// Without Using Sizeof Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>

struct strc
{
	int a1, a2;
	char s1;
	int *ptr;
	int arr[5];
};


struct strc a[2];
void main()
{
	int *start, *last;
	
	start = &a[1].a1;
	last = &a[0].a1;
	printf("\nSize of Structure : %d Bytes", start - last);
}