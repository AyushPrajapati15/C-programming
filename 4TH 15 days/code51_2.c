// To count the number of occurrences of a number
#include <stdio.h>

int count_occurrences(int arr[], int num) {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10];
    printf("Enter the elements into the array\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d",arr[i]);
    }
    int num = 2;
    int count = count_occurrences(arr, num);
    printf("The number %d occurs %d times in the array.\n", num, count);
    return 0;
}
