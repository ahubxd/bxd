#include <stdio.h>
void print(int *a, int n)
{	
	int i = 0;
	for(; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void quicksort(int *a, int n)
{
	int i, j;
	for(i = 2; i < n; i++)
	{
		if(a[i] < a[i-1])
		{
			a[0] = a[i];
			j = i -1;
		}
		do{
			a[j+1] =a[j];
			j--;
		}while(a[0] < a[j]);
		a[j+1] = a[0];
		print(a, n);
	}
}

int main()
{
	int a[] = {9, 30,10, 4, 8,20,5};
	int n = 7;
	quicksort(a, n);
}
