// Wap to interchange the largest and the smallest number in the array
#include <stdio.h>

int main() {
    int arr[100], n, i, largest, smallest, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the index of the largest and smallest numbers
    largest = smallest = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] > arr[largest]) {
            largest = i;
        }
        if (arr[i] < arr[smallest]) {
            smallest = i;
        }
    }

    // Interchange the largest and smallest numbers
    temp = arr[largest];
    arr[largest] = arr[smallest];
    arr[smallest] = temp;

    // Output the modified array
    printf("The modified array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
