// 14.1.1. Linked Lists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

/*
Each element in a linked list can be placed anywhere in memory.
The elements are linked with each other using an explicit link field.
To access the element you can use the starting pointer of the list.
*/
struct node
{
	int data;
	struct node *link;
};



struct node *insert(struct node *p, int n) {
	struct node *temp;
	if (p == NULL) {
		p = (struct node *)malloc(sizeof(struct node));

		if (p == NULL) {
			printf("Error\n");
			exit(0);
		}
		p->data = n;
		p->link = p;
	}
	else {
		temp = p;
		while (temp->link != p)
			temp = temp->link;
		temp->link = (struct node *)malloc(sizeof(struct node));
		if (temp->link == NULL) {
			printf("Error\n");
			exit(0);
		}
		temp = temp->link;
		temp->data = n;
		temp->link = p;
	}
	return (p);
}

/*************PRINTLIST**********************/
void printlist(struct node *p)
{
	struct node *temp;
	temp = p;
	printf("The data values in the list are\n");
	if (p != NULL)
	{
		do
		{
			printf("%d\t", temp->data);
			temp = temp->link;
		} while (temp != p);
	}
	else
		printf("The list is empty\n");
}

/*
Given a linked list head pointer, compute
and return the number of nodes in the list.
*/
int Length(struct node* head) {
	struct node* current = head;
	int count = 0;
		
	if (head != NULL)
	{
		do
		{
			count++;
			current = current->link;
		} while (current != head);
	}
	return count;
}


int  main(void)
 {
	//int n;
	//int x;
	struct node *start = NULL;
	int Lenght_;

	start = insert(start, 1);
	start = insert(start, 2);
	start = insert(start, 3);
	start = insert(start, 4);

	Lenght_=Length(start);

	printf("The created list is\n");
	printlist(start);

	return 0;
}
//The created list is
//The data values in the list are
//1       2       3       4