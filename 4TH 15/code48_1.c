// Dynamic memory allocation for an array of integers:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num;
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    num = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}