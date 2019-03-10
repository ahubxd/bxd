#include<stdio.h>
#include<stdlib.h>
void print(int *a, int len);

void sort(int *a, int n)
{
   int i, j;
   for(i = 0; i < n -1; i++)
   {//round
      int isswap = 0;
      for(j = 0; j < n -1 - i; j++)
      { 
          if(a[j] > a[j + 1] )
          {
              isswap = 1;
              int tmp = a[j + 1];
              a[j + 1] = a[j];
              a[j] = tmp;
          }
      }
      
      if(isswap == 0)
      { 
         return;
      }
      
      print(a, 9);
   }
}

void print(int *a, int n)
{
   int i = 0;
   for(i = 0; i < n; i++)
   {  
      printf("%d ", a[i]);
   } 
   printf("\n");
}

int main()
{
  int arr[]= {22, 34, 3, 32,82,55, 89, 50, 37};
  int n = 9;
  print(arr, 9);
  sort(arr, 9);

  print(arr,9);
  return 0;
}
