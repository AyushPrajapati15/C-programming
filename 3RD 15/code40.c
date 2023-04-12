// Write a ‘C’ Program to compute the sum of all elements stored in an array using pointers.
#include<stdio.h>
void main() {
   int arr[10];
   int i, sum = 0;
   int *ptr;
   printf("\nEnter 10 elements : \n");
   for (i = 0; i < 10; i++)
      scanf("%d", &arr[i]);
   ptr = arr;
   for (i = 0; i < 10; i++) {
      sum = sum + *ptr;
      ptr++;
   }
   printf("The sum of array elements : %d", sum);
}
