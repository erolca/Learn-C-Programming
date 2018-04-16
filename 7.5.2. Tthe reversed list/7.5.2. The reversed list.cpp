// 7.5.2. The reversed list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<stdio.h>
#include<conio.h>

void read(int *, int);
void dis(int *, int);
void inverse(int *, int *, int);

int main() {

	int a[5], b[5];
	read(a, 5);
	dis(a, 5);
	inverse(a, b, 5);
	dis(b, 5);
	_getch();

	return 0;
}

void read(int c[], int i)
{
	int j;
	printf("Enter the list \n");
	for (j = 0; j<i; j++)
		scanf("%d", &c[j]);
	fflush(stdin);
}
void dis(int d[], int i)
{
	int j;
	printf("The list is \n");
	for (j = 0; j<i; j++)
		printf("%d ", d[j]);
	printf("\n");
}
void inverse(int a[], int inverse_b[], int j)
{
	int i, k;
	k = j - 1;
	for (i = 0; i<j; i++)
	{
		inverse_b[i] = a[k];
		k--;
	}
}
//Enter the list
//1
//2
//3
//4
//5
//The list is
//1 2 3 4 5
//The list is
//5 4 3 2 1