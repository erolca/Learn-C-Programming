// 8.4.1. Function calls function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>


void f1();
void f2();


void f1(void)
{
	printf("f1-1 \n");
	f2();
	printf("f1-2 \n");
}
void f2()
{
	printf("f2 \n");
}
int main()
{
	printf("1 \n");
	f1();
	printf("2 \n");
	return 0;
}
//1
//f1 - 1
//f2
//f1 - 2
//2