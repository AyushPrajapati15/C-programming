// Program using dynamic memory allocation using array and printing the sum,average and multiplication in c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0, mul = 1;
    float avg = 0;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (i = 0; i < n; i++)
    {
        avg = sum / n;
    }
    for (i = 0; i < n; i++)
    {
        mul *= arr[i];
    }

    printf("The sum of all the integers in the array is: %d\n", sum);
    printf("The average of all the integers in the array is: %f\n", avg);
    printf("The multiplication of all the integers in the array is: %d\n", mul);

    free(arr);

    return 0;
}
