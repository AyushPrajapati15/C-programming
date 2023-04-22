// Printing random values using dynamic memory allocation in c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *arr;
    arr = (int *)malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 ;
    }

    printf("The values of the array are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
