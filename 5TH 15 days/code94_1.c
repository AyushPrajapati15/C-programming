// C program to print the elements of an array using pointers.
#include <stdio.h>
# define s 5

void printArray(int *arr, int size) {
    if (size == 0) {
        return;
    }

    printf("%d ", *arr);
    printArray(arr + 1, size - 1);
}

int main() {
    int arr[s],i;
    printf("Enter the array elements\n");
    for ( i = 0; i < s; i++)
    {
    scanf("%d",&arr[i]);
    }
    

    printf("Array elements: ");
    printArray(arr, 5);

    return 0;
}
