// Write a C program to check if a matrix is symmetric or not.
#include <stdio.h>
int main()
{
    int matrix[100][100],n,i, j, symmetric = 1;
    printf("Enter the size of the matrix up to 100\n");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }
    if (symmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}
