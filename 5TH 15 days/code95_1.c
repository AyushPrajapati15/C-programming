// program to find the maximum and minimum values in an array using pointers 
#include <stdio.h>

void findMinMax(int *arr, int size, int *max, int *min) {
    if (size == 1) {
        *max = *min = *arr;
        return;
    }

    int mid = size / 2;
    int leftMax, leftMin, rightMax, rightMin;

    findMinMax(arr, mid, &leftMax, &leftMin);
    findMinMax(arr + mid, size - mid, &rightMax, &rightMin);

    if (leftMax > rightMax) {
        *max = leftMax;
    } else {
        *max = rightMax;
    }

    if (leftMin < rightMin) {
        *min = leftMin;
    } else {
        *min = rightMin;
    }
}

int main() {
    int size, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr, size, &max, &min);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
