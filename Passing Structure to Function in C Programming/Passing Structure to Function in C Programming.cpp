// Passing Structure to Function in C Programming.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
//-------------------------------------
struct Example
{
	int num1;
	int num2;
}s[3];
//-------------------------------------
void accept(struct Example *sptr)
{
	printf("\nEnter num1 : ");
	scanf_s("%d", &sptr->num1);
	printf("\nEnter num2 : ");
	scanf_s("%d", &sptr->num2);
}
//-------------------------------------
void print(struct Example *sptr)
{
	printf("\nNum1 : %d", sptr->num1);
	printf("\nNum2 : %d", sptr->num2);
}
//-------------------------------------
void main()
{
	int i;
	
	for (i = 0; i<3; i++)
		accept(&s[i]);

	for (i = 0; i<3; i++)
		print(&s[i]);

	_getch();
}