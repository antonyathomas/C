#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, int n)
{
	int i = 0;
	
	printf("\n");
	for(i=0; i<n; i++)
		printf("%d\t",array[i]);
	return;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	return;
}

int partition(int *array, int low, int high)
{
	int i = low - 1, j = 0;
	int pivot = array[high];

	for(j=low; j<high; j++)
	{
		if(array[j]<=pivot)
		{
			i++;
			swap(&array[i],&array[j]);
		}
	}
	swap(&array[i+1],&array[high]);

	return i+1;
}

void quick_sort(int *array,int low, int high)
{
	int pi = 0;

	if(low < high)
	{
		pi = partition(array, low, high);
		quick_sort(array,low,pi-1);
		quick_sort(array,pi+1,high);
	}
	else
		return;
}

int main(void)
{
	int array[] = {5,7,3,8,1,4,9,2,6};
	int size = sizeof(array)/sizeof(array[0]);

	printf("\narray before sorting !!!\n");
	print_array(array, size);

	quick_sort(array,0,size-1);

	printf("\narray after sorting !!!\n");
	print_array(array, size);

	return 0;
}
