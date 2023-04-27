// C program to insert an element at the end of an array:
#include<stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i, n,k;

    printf("Enter the size of the array:\n ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the no of elements you want to enter\n");
    scanf("%d",&k);
    printf("Enter the new element to be inserted: \n");
    for ( i = 0; i < k; i++)
    {
        
    scanf("%d", &n);

    arr[size] = n; 
    size++; 
    }
    
    printf("Array after insertion:\n");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
