# include "linked_list.h"

void reverse_print(struct Node *temp)
{
	if(temp == NULL)
		return;
	reverse_print(temp->next);
	printf("%d\t", temp->data);
}
