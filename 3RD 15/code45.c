// Find the Largest Element using DMA
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n,i;
  int *ptr;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Allocating memory for n elements
  ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL) {
    printf("Error!!! memory not allocated.");
    exit(1);
  }

  // Storing numbers entered by the user.
  for ( i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", ptr + i);
  }

  // Finding the largest number
  for ( i = 1; i < n; ++i) {
    if (*ptr < *(ptr + i)) {
      *ptr = *(ptr + i);
    }
  }
  printf("Largest number = %d", *ptr);

  return 0;
}