// C array of pointer to structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>

struct stud
{
	int roll;
	char name[10];
}*ptr[10];

typedef struct addr {
	char name[40];
	char street[40];
	char city[40];
	char state[3];
	char zip[10];
};


int main()
{
	int i;


	printf("Enter the Student Details : ");

	for (i = 0; i<3; i++)
	{
		ptr[i] = (struct stud *) malloc(sizeof(struct stud));

		printf("\nEnter the Roll Number : ");
		scanf_s("%d", &ptr[i]->roll);
		printf("\nEnter the Name : ");
		scanf_s("%s", ptr[i]->name);
	}

	printf("\nStudent Details are : ");

	for (i = 0; i<3; i++)
	{
		printf("\nRoll Number : %d", ptr[i]->roll);
		printf("\nName : %s", ptr[i]->name);
	}

	return(0);
}