# include <stdio.h>
# include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *top = NULL;

void push (void)
{
	int d = 0;
	struct Node *temp = top;

	printf("Enter the value to be pushed: ");
	scanf("%d",&d);
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = d;
	temp -> next = NULL;

	if(top == NULL)
		top = temp;
	else{
		temp -> next = top;
		top = temp;
	}

	return;
}

void pop(void)
{
	struct Node * temp = top;

	if(top == NULL)
		printf("\nStack is Empty!!!\n");
	else {
		temp = top;
		top = top -> next;
		printf("Pop'ed element is %d\n", temp -> data);
		free(temp);
	}

	return;
}

void print_stack(void)
{
	struct Node *temp = top;
	if(top == NULL)
		printf("Stack is Empty!!!\n");
	else{
		printf("\n");
		while(temp != NULL){
			printf("%d\t",temp->data);
			temp = temp->next;
		}
	}

	return;
}

int main(void)
{
	int ch = 0;

	do{
		printf("\nEnter your choise:\n0 -> Exit\n1 -> Push Element\n2 -> Pop Element\n3 -> Print Stack\n");
		scanf("%d",&ch);

		switch(ch){
			case 0:
				printf("Exit!!!\n");
				return 0;
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				print_stack();
				break;
		}
	}while(ch != 0);
}
