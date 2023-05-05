// C program to compute the average of an array using pointers
#include <stdio.h>

double computeAverage(int *arr, int size) {
    if (size == 1) {
        return *arr;
    }

    double sum = *arr + computeAverage(arr + 1, size - 1);

    return sum / size;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    double avg = computeAverage(arr, size);

    printf("Average of the array: %lf\n", avg);

    return 0;
}
