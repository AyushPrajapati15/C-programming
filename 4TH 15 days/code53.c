// C program to multiply two matrices of compatible dimensions.
#include <stdio.h>
int main()
{
    int m1[10][10], m2[10][10], res[10][10], row1, col1, row2, col2, i, j, k;
    printf("Enter the number of rows and columns of the first matrix:\n ");
    scanf("%d%d", &row1, &col1);
    printf("Enter the number of rows and columns of the second matrix: \n");
    scanf("%d%d", &row2, &col2);
    if (col1 != row2)
    {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("First matrix is\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("Second matrix is\n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
             printf("%d ", m2[i][j]);
        }
                printf("\n");
    }
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printf("The product of the matrices is:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
