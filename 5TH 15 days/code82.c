// Write a C program to find the sum of all elements of a 4-dimensional array of size 4x4x4x4.
#include <stdio.h>

int main()
{
    int arr[2][2][2][2];
    int i, j, k, l;
    int sum = 0;
    printf("Enter the elements into the array\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                for (l = 0; l < 2; l++)
                {
                    scanf("%d", &arr[i][j][k][l]);
                }
            }
        }
    }
    printf("The elements of the array is\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                for (l = 0; l < 2; l++)
                {
                    printf("%d ", arr[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                for (l = 0; l < 2; l++)
                {
                    sum += arr[i][j][k][l];
                }
            }
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
