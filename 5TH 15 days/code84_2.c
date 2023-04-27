// Right rotation of array element by 2 positions:
#include <stdio.h>

int main() {
    int arr[50], n, i, temp1, temp2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    temp1 = arr[n-2]; 
    temp2 = arr[n-1]; 
    for (i = n - 1; i > 1; i--) {
        arr[i] = arr[i-2]; 
    }
    arr[0] = temp1; 
    arr[1] = temp2; 
    printf("Array after right rotation by 2 positions: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
