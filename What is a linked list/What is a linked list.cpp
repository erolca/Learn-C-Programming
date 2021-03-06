// What is a linked list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/*
	A linked list is a set of dynamically allocated nodes, 
arranged in such a way that each node contains one value and one pointer. 
The pointer always points to the next member of the list. If the pointer is NULL,
then it is the last node in the list.
	A linked list is held using a local pointer variable which points to the first item of the list.
If that pointer is also NULL, then the list is considered to be empty.
*/

//Let's define a linked list node:


typedef struct node {
	int val;
	struct node * next;
} node_t;

void print_list(node_t * head) {
	node_t * current = head;

	while (current != NULL) {
		printf("%d\n", current->val);
		current = current->next;
	}
}

int pop(node_t ** head) {
	int retval = -1;
	node_t * next_node = NULL;

	if (*head == NULL) {
		return -1;
	}

	next_node = (*head)->next;
	retval = (*head)->val;
	free(*head);
	*head = next_node;

	return retval;
}

int remove_by_value(node_t ** head, int val) {
	/* TODO: fill in your code here */

	return 1;
}

int main() {

	node_t * test_list =(struct node *) malloc(sizeof(node_t));
	test_list->val = 1;
	test_list->next = (struct node *) malloc(sizeof(node_t));
	test_list->next->val = 2;
	test_list->next->next = (struct node *) malloc(sizeof(node_t));
	test_list->next->next->val = 3;
	test_list->next->next->next = (struct node *) malloc(sizeof(node_t));
	test_list->next->next->next->val = 4;
	test_list->next->next->next->next = NULL;

	remove_by_value(&test_list, 3);

	print_list(test_list);
}
