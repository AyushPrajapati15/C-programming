// C program to insert an element at a given location in an array:
#include<stdio.h>
#define MAX_SIZE 100
int main() {
    int arr[MAX_SIZE], size, i, n, position,k;

    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the no of elements you want to enter \n");
    scanf("%d",&k);
    for ( i = 0; i < k; i++)
    {
    printf("Enter the new element to be inserted: \n");
    scanf("%d", &n);
    

    printf("Enter the position where the new element to be inserted: \n");
    scanf("%d", &position);


    for(i=size-1; i>=position-1; i--) {
        arr[i+1] = arr[i];
    }

    arr[position-1] = n;
    size++;
    }

    printf("Array after insertion:\n");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
