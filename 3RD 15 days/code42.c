// // WAp to find the second largest element in an array
#include <stdio.h>
int main() {
    int arr[10], i, largest, secondLargest;
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    secondLargest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    printf("The second largest element is: %d", secondLargest);
    return 0;
}
