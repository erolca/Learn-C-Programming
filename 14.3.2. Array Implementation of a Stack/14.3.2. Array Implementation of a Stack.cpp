// 14.3.2. Array Implementation of a Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void insert(int queue[], int *rear, int value)
{
	if (*rear < MAX - 1)
	{
		*rear = *rear + 1;
		queue[*rear] = value;
	}
	else
	{
		printf("The queue is full can not insert a value\n");
		exit(0);
	}
}

void delete_(int queue[], int *front, int rear, int * value)
{
	if (*front == rear)
	{
		printf("The queue is empty can not delete a value\n");
		exit(0);
	}
	*front = *front + 1;
	*value = queue[*front];
}

void main()
{
	int queue[MAX];
	int front, rear;
	int n, value;
	front = rear = -1;

	insert(queue, &rear, 1);
	insert(queue, &rear, 2);

	delete_(queue, &front, rear, &value);
	printf("The value deleted is %d\n", value);
}
//The value deleted is 1