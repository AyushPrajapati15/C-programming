// program to implement a linear using pointers using recursion
#include <stdio.h>

int linearSearch(int *arr, int size, int *key) {
    if (size == 0) {
        return -1;
    }

    if (*arr == *key) {
        return 0;
    } else {
        int result = linearSearch(arr + 1, size - 1, key);
        if (result == -1) {
            return -1;
        } else {
            return result + 1;
        }
    }
}

int main() {
    int arr[100], size, key, index;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to be searched: ");
    scanf("%d", &key);

    index = linearSearch(arr, size, &key);

    if (index == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d.\n", index);
    }

    return 0;
}
