// C program to delete a given element from an array:
#include<stdio.h>
#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE], size, i, n, found=0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be deleted: ");
    scanf("%d", &n);

    for(i=0; i<size; i++) {
        if(arr[i] == n) {
            found = 1;
            break;
        }
    }
    if (found==1)
    {
        printf("Element deleted successfully\n");
    }
    else    
    printf("Element not found\n");
    
}
