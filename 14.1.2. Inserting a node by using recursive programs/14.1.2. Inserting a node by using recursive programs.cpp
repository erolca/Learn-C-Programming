// 14.1.2. Inserting a node by using recursive programs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

# include <stdio.h>
# include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *insert(struct node *p, int n)
{
	struct node *temp;
	if (p == NULL)
	{
		p = (struct node *)malloc(sizeof(struct node));
		if (p == NULL)
		{
			printf("Error\n");
			exit(0);
		}
		p->data = n;
		p->link = NULL;
	}
	else {
		p->link = insert(p->link, n); //recursive function
	}
	return (p);
}
void printlist(struct node *p)
{
	printf("The data values in the list are\n");
	while (p != NULL)
	{
		printf("%d\t", p->data);
		p = p->link;
	}
}
int main()
{
	int n = 10;
	struct node *start = NULL;

	while (n-- > 0)
	{
		start = insert(start, n);
	}
	printf("The created list is\n");
	printlist(start);
	return 0;
}
//The created list is
//The data values in the list are
//9       8       7       6       5       4       3       2       1       0