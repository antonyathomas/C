#include <stdio.h>

int main(void)
{
	int num=0, p1=0, p2=0, p1_val, p2_val;

	printf("\nEnter the numer: ");
	scanf("%d",&num);
	printf("\nEnter position 1: ");
	scanf("%d",&p1);
	printf("\nEnter position 2: ");
	scanf("%d",&p2);

	p1_val = (num >> p1) & 1;
	p2_val = (num >> p2) & 1;

	int x = p1_val ^ p2_val;

	x = x<<(p1) | x<<(p2);
	num = num ^ x;
	printf("\n%d\n",num);

	return 0;
}
