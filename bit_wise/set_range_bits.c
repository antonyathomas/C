# include <stdio.h>

int main (void)
{
	int num = 0, start = 0, end = 0, range = 0;

	printf("\nEnter the number:\n");
	scanf("%d",&num);
	printf("Enter the starting position:\n");
	scanf("%d",&start);
	printf("Enter the end position:\n");
	scanf("%d",&end);

	range = (((1<<end) - 1) ^((1<<(start-1)-1)));

	num |= range;

	printf("The result is %d\n",num);
}
