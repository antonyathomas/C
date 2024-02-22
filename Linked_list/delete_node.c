# include "linked_list.h"

void delete_from_head(void)
{
	struct Node *temp = head;

	if(head == NULL){
		printf("\nThe list is empty!!!\n");
	}
	else{
		head = head->next;
		free(temp);
	}
	return;
}

void delete_nth_node(void)
{
	struct Node *cur = head;
	struct Node *temp = head;

	int i, pos;

	if(head == NULL)
		printf("list is empty !!!\n");
	else{
		printf("Enter the node position to be removed: ");
		scanf("%d", &pos);
		if(pos == 1){
			head = head->next;
		}
		else{
			for(i=0; i<pos-2; i++)
			{
				cur = cur->next;
			}
			temp = cur->next;
			cur->next = temp->next;
		}
		free(temp);
	}

	return;
}
