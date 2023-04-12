// Write a C program to find the product of elements in the main diagonal of a matrix.
#include <stdio.h>
int main()
{
    int arr[100][100], i, j, n, product=1;
    printf("Enter the size of the matrix\n");
    scanf("%d", &n);
    printf("Enter the elements into the matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered array is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
            if (i == j)
            {
                product *= arr[i][j];
            }
        }
        printf("\n");
    }
    printf("product is %d",product);
    return 0;
}