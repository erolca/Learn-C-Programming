// 11.2.Deallocate Memory( 1 ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>
void main()
{
	int *base;
	int i, j;
	int cnt = 0;
	int sum = 0;
	printf("how many integers you have to store \n");
	scanf_s("%d", &cnt);
	base = (int *)malloc(cnt * sizeof(int));
	printf("the base of allocation is %16lu \n", base);
	if (!base) {
		printf("unable to allocate size \n");
	}
	else
	{
		for (j = 0; j<cnt; j++)
			*(base + j) = 5;
	}
	sum = 0;
	for (j = 0; j<cnt; j++)
		sum = sum + *(base + j);
	printf("total sum is %d\n", sum);
	free(base);
	printf("the base of allocation is %16lu \n", base);
	base = (int *)malloc(cnt * sizeof(int));
	printf("the base of allocation is %16lu \n", base);
	base = (int *)malloc(cnt * sizeof(int));
	printf("the base of allocation is %16lu \n", base);
	base = (int *)calloc(10, 2);
	printf("the base of allocation is %16lu \n", base);
}
//how many integers you have to store
//4321
//the base of allocation is          4016352
//total sum is 21605
//the base of allocation is          4016352
//the base of allocation is          4016352
//the base of allocation is          4033648
//the base of allocation is          4007120