# include <stdio.h>

int main (void)
{
	int num = 0, pos = 0;

	printf("\nEnter the number:\n");
	scanf("%d",&num);
	printf("Enter the bit position to clear: ");
	scanf("%d",&pos);
	
	num &= ~(1<<pos);
	printf("The result is %d", num);
}
