// Iterative Approach.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;


/* Linked list node */
struct Node
{
	int data;
	struct Node* next;
};

// function to Check Linked List is 
// sorted in descending order or not
bool isSortedDesc(struct Node *head)
{
	if (head == NULL)
		return true;

	// Traverse the list till last node and return
	// false if a node is smaller than or equal
	// its next.
	for (Node *t = head; t->next != NULL; t = t->next)
		if (t->data <= t->next->data)
			return false;
	return true;
}

Node *newNode(int data)
{
	Node *temp = new Node;
	temp->next = NULL;
	temp->data = data;

	return temp;
}

int main()
{
	struct Node *head = newNode(7);
	head->next = newNode(5);
	head->next->next = newNode(4);
	head->next->next->next = newNode(3);

	isSortedDesc(head);

	

	return 0;
}

