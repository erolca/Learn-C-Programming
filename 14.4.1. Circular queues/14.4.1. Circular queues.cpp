// 14.4.1. Circular queues.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void insert(int queue[], int *rear, int front, int value)
{
	*rear = (*rear + 1) % MAX;
	if (*rear == front)
	{
		printf("The queue is full can not insert a value\n");
		exit(0);
	}
	queue[*rear] = value;
}

void delete_(int queue[], int *front, int rear, int * value)
{
	if (*front == rear)
	{
		printf("The queue is empty can not delete a value\n");
		exit(0);
	}
	*front = (*front + 1) % MAX;
	*value = queue[*front];
}

int main()
{
	int queue[MAX];
	int front, rear;
	int  value;
	front = 0; rear = 0;

	insert(queue, &rear, front, 1);
	insert(queue, &rear, front, 2);
	insert(queue, &rear, front, 3);
	insert(queue, &rear, front, 4);

	delete_(queue, &front, rear, &value);
	printf("The value deleted is %d\n", value);

	delete_(queue, &front, rear, &value);
	printf("The value deleted is %d\n", value);


	delete_(queue, &front, rear, &value);
	printf("The value deleted is %d\n", value);
	return value;
}
//The value deleted is 1
//The value deleted is 2
//The value deleted is 3