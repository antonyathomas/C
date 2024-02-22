#include "linked_list.h"

void insert_node_front(int d)
{
	struct Node *new_node = NULL;
	new_node = (struct Node *)malloc(sizeof(struct Node));
	new_node -> data = d;
	new_node -> next = NULL;

	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		new_node -> next = head;
		head = new_node;
	}
	return;
}

void insert_node_tail(int d)
{
	struct Node *temp = NULL;
	struct Node *new_node = NULL;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node -> data = d;
	new_node -> next = NULL;

	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return;
}
