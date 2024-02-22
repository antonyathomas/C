# include "linked_list.h"

struct Node *head = NULL;

int main()
{
	int data = 0;
	int ch = 0;
	int n = 0;

	do{
		printf("\nEnter your choise:\n0 -> Exit\n1 -> print list\n2 -> insert node from front\n3 -> insert node at end\n4 -> delete node from head\n5 -> delete n'th node\n6 -> reverse linked list\n");
		scanf("%d",&ch);
		if(ch == 3 || ch == 2)
		{
			printf("\nEnter the data to inserted: ");
			scanf("%d",&data);
		}
		switch(ch){
			case 0:
				printf("\nDoing nothing!!!");
				return;
			case 1:
				print_list();
				break;
			case 2:
				insert_node_front(data);
				break;
			case 3:
				insert_node_tail(data);
				break;
			case 4:
				delete_from_head();
				break;
			case 5:
				delete_nth_node();
				break;
			case 6:
				reverse_linked_list();
				break;

		}
	}while(ch != 0);
}
