// Write a C program to find the transpose of a matrix and find its sum.
#include <stdio.h>
int main()
{
    int rows, cols, i, j, matrix[3][3], transpose[3][3], sum_matrix[3][3];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    printf("Transpose:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum_matrix[i][j] = matrix[i][j] + transpose[j][i];
        }
    }
    printf("Sum of the matrix and its transpose:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
