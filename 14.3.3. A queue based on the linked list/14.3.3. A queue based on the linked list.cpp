// 14.3.3. A queue based on the linked list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

# include <stdio.h>
# include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

void insert(struct node **front, struct node **rear, int value)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	if (temp == NULL)
	{
		printf("No Memory available Error\n");
		exit(0);
	}
	temp->data = value;
	temp->link = NULL;
	if (*rear == NULL)
	{
		*rear = temp;
		*front = *rear;
	}
	else
	{
		(*rear)->link = temp;
		*rear = temp;
	}
}

void delete_(struct node **front, struct node **rear, int *value)
{
	struct node *temp;
	if ((*front == *rear) && (*rear == NULL))
	{
		printf(" The queue is empty cannot delete Error\n");
		exit(0);
	}
	*value = (*front)->data;
	temp = *front;
	*front = (*front)->link;
	if (*rear == temp)
		*rear = (*rear)->link;
	free(temp);
}

void main()
{
	struct node *front = NULL, *rear = NULL;
	int n, value;

	insert(&front, &rear, 1);
	insert(&front, &rear, 2);
	insert(&front, &rear, 3);
	insert(&front, &rear, 4);

	delete_(&front, &rear, &value);
	printf("The value deleted is %d\n", value);

	delete_(&front, &rear, &value);
	printf("The value deleted is %d\n", value);

	delete_(&front, &rear, &value);
	printf("The value deleted is %d\n", value);

}
//The value deleted is 1
//The value deleted is 2
//The value deleted is 3