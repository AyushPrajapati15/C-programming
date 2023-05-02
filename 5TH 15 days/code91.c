// Write a program in C for, How to compare two array is equal in size or not.
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1, size2, i;

    printf("Enter the size of first array: ");
    scanf("%d", &size1);

    printf("Enter the elements of first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &size2);

    printf("Enter the elements of second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    if (size1 == size2) {
        printf("The two arrays are of equal size.\n");
    } else {
        printf("The two arrays are not of equal size.\n");
    }

    return 0;
}
