# include <stdio.h>

int main (void)
{
	int num = 0, pos = 0;

	printf("\nEnter the number:\n");
	scanf("%d",&num);
	printf("Enter the bit position to clear: ");
	scanf("%d",&pos);
	if(pos > 0)
	{
		num &= ~(1<<pos - 1);
		printf("The result is %d", num);
	}
	else
	{
		printf("Enter valid position: position (from 1 to n)\n");
	}

}
