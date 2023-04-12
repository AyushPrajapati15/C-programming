// C program to swap the rows of a matrix.
#include <stdio.h>
void swap_rows(int a[3][3], int row1, int row2)
{
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = a[row1][i];
        a[row1][i] = a[row2][i];
        a[row2][i] = temp;
    }
}
int main()
{
    int a[3][3], row1, row2;
    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the two rows to swap (0-2): \n");
    scanf("%d %d", &row1, &row2);
    swap_rows(a, row1, row2);
    printf("The matrix after swapping rows %d and %d:\n", row1, row2);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
