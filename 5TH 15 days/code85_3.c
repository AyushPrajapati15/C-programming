// C program to delete an element at the end of an array:
#include<stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    size--; 
    printf("Array after deletion:\n");
    for(i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
