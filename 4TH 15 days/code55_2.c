// Write a C program to find the sum of elements of the secondarydiagonal of a matrix.
#include <stdio.h>
int main() {
    int matrix[100][100];
    int i, j, n, sum = 0;
    printf("Enter the size of the matrix up to 100\n");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix you entered is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++)
    {
        sum += matrix[i][n - i - 1];
    }
    printf("The sum of the secondary diagonal is %d\n", sum);
    return 0;
}
