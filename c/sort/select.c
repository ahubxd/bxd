#include<stdio.h>

void swap(int *a, int *b)
{
   int tmp = *a;
   *a = *b;
   *b = tmp;
}

void print(int *a, int len)
{
    int i = 0;
    for(; i < len; i++)
    {
       printf("%d ", *(a + i));
    }
    printf("\n");
}

void selection_sort(int *a, int len)
{
   int i, j;
   for(i = 0; i < len -1; i++)
   { 
       int min = i;
       for(j = i + 1; j < len; j++)
       {
          if(a[j] < a[min])
          { 
              min = j;
          }
       }
       
       if(i == min)
           return;
 
       swap(&a[min], &a[i]);
       print(a, len);
   }
}

int main()
{
    int a[] = {10, 8, 20 ,5 , 90, 15, 7,8};

    int len = sizeof(a) / sizeof(int);
    selection_sort(a, len);
    return 0;
}
