#include<stdio.h>
#include<malloc.h>
// #include<stdlib.h>
void main()
{
   int n, *ptr, i;
   printf("Input array size: ");
   scanf("%d",&n);
   
   ptr = (int *)malloc(n*sizeof(int));
   if(ptr==NULL)
   {
      printf("\nNo Allocation of memory");
   }
   else
   {
      printf("\nMemory Allocation Done!");
      printf("\nAddress of first byte = %p", ptr);
      for(i=0; i<n; i++)
      {
         ptr[i] = i+10;
      }
   }
     printf("\nArray Elements: \n");
     for(i=0; i<n; i++)
     {
        printf("%d ", ptr[i]);
       // printf("%p ", ptr+i);
     }      
}