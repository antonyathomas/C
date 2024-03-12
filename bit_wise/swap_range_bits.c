# include <stdio.h>

int main(void)
{
	int num = 0, p1 = 0, p2 = 0, n_bits = 0;
	int mask = 0, xor = 0, x1 = 0, x2 = 0;

	printf("\nEnter the num: ");
	scanf("%d",&num);
	printf("\nEnter position 1: ");
	scanf("%d",&p1);
	printf("\nEnter position 2: ");
	scanf("%d",&p2);
	printf("\nEnter number of bits to swap: ");
	scanf("%d",&n_bits);

	mask = (1<<n_bits)-1;
	x1 = (num>>p1) & mask;
	x2 = (num>>p2) & mask;

	xor = x1 ^ x2;

	xor = (xor<<p1) | (xor<<p2);

	num = num ^ xor;

	printf("\nThe result num is %d\n",num);
}
