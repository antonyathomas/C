#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(void)
{
	int d;
	struct Node *temp = front;

	printf("Enter the data to be enqueued: \n");
	scanf("%d", &d);
	temp = (struct Node *) malloc(sizeof(struct Node));
	temp -> data = d;
	temp -> next = NULL;

	if(front == NULL){
		front = temp;
		rear = front;
	} else {
		rear -> next = temp;
		rear = temp;
	}
	return;
}

void dequeue(void)
{
	struct Node *temp = front;

	if (front == NULL)
	{
		printf("The Queue is Empty!!!!\n");
	}
	else
	{
		front = front->next;
		printf("The Element dequeued is %d\n", temp->data);
		free(temp);
	}

	return;
}

void print_queue()
{
	struct Node *temp = front;
	if(front != NULL){
		printf("\n");
		while(temp != NULL)
		{
			printf("%d\t",temp->data);
			temp = temp -> next;
		}
	} else {
		printf("Qeueue is empty!!!\n");
	}

	return;
}

int main()
{
	int d = 0;
	int ch = 0;


	do{
		printf("\nEnter the operation to be performed: \n0 -> Exit\n1 -> enqueue\n2 -> dequeue\n3 -> print qeueue\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				printf("Exit!!!\n");
				return 0;
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				print_queue();
				break;

		}
	}while(ch != 0);

}
