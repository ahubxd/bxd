#include<stdio.h>
void print(int *a, int len)
{
    int i = 0;
    for(i = 0; i < len; i++)
       printf("%d ", a[i]);
    printf("\n");
}

void inseartion_sort(int *a, int len)
{
   int i, j;
   for(i = 1; i < len; i++)
   {
      int tmp =  a[i];
      for(j = i; j > 0 && a[j - 1] > tmp; j--)
      {
          a[j] = a[j - 1];
      }
      a[j] = tmp;
      print(a, len);
   }
}

int main()
{
   int a[] = {10, 8, 20, 5, 90,15,7};
   int len = sizeof(a) / sizeof(int);
   inseartion_sort(a, len);
}
