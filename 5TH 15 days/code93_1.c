//Sum of array elements using DMA
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *) malloc(n * sizeof(int));

    printf("Enter the values of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the array is %d\n", sum);
    free(arr);
    return 0;
}
