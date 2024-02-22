# include "linked_list.h"

void reverse_linked_list()
{
	struct Node *cur = head;
	struct Node *prev = NULL;
	struct Node *next = head;

	if(head == NULL)
		printf("The list is Empty!!!\n");
	else {
		while(cur != NULL)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		head = prev;
	}

	return;
}
