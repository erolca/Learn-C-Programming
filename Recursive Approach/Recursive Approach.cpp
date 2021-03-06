// Recursive Approach.cpp : Defines the entry point for the console application.
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
	// Base cases
	if (head == NULL || head->next == NULL)
		return true;

	// Check first two nodes and recursively
	// check remaining.   
	return (head->data > head->next->data &&
		isSortedDesc(head->next));
}

Node *newNode(int data)
{
	Node *temp = new Node;
	temp->next = NULL;
	temp->data = data;
	return temp;
}

// Driver program to test above
int main()
{
	struct Node *head = newNode(7);
	head->next = newNode(5);
	head->next->next = newNode(4);
	head->next->next->next = newNode(3);

	isSortedDesc(head);

	return 0;
}
