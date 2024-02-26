# include <stdio.h>


void binary(int num)
{
	int num_bits = sizeof(int) * 8;
	int bi = 0, i = 0;

	printf("\nNumber = %d",num);
	printf("\nbinary equivalent = ");
	for(i=num_bits; i>=0; i--){
		bi = num>>i&1;
//		if(bi == 1)
		printf("%d",bi);
	}
	printf("\n");

}

int main(void)
{
	int num = 0;
	printf("\nEnter any number: ");
	scanf("%d",&num);

	binary(num);
}
