#include "linked_list.h"

void print_list(void)
{
	struct Node *temp = head;

	if(head == NULL)
	{
		printf("\nList is empty");
		return;
	}
	else {
		printf("\n");
		while(temp != NULL){
			printf("%d\t",temp->data);
			temp = temp->next;
		}
	}
	return;
}
