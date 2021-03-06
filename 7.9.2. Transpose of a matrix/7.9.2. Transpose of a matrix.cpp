// 7.9.2. Transpose of a matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>

#define ROW 3
#define COL 3

void dis(int a[][COL], int, int);
void trans(int a[][COL], int, int);

void main()
{
	int a[ROW][COL];
	a[0][0] = 1;    a[0][1] = 2;    a[0][2] = 3;
	a[1][0] = 4;    a[1][1] = 5;    a[1][2] = 6;
	a[2][0] = 7;    a[2][1] = 8;    a[2][2] = 9;

	printf("\nThe matrix is \n");
	dis(a, ROW, COL);
	trans(a, ROW, COL);
	printf("The tranpose of the matrix is\n");
	dis(a, ROW, COL);
	_getch();
}

void dis(int d[3][3], int i, int k)
{
	int j, l;
	for (j = 0; j<i; j++)
	{
		for (l = 0; l<k; l++)
			printf("%d ", d[j][l]);
		printf("\n");
	}
}
void trans(int mat[3][3], int k, int l)
{
	int i, j, temp;
	for (i = 0; i<k; i++)
		for (j = i + 1; j<l; j++)
		{
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
}
//The matrix is
//1 2 3
//4 5 6
//7 8 9
//The tranpose of the matrix is
//1 4 7
//2 5 8
//3 6 9