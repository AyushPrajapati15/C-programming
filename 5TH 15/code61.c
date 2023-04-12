// Write a C program to find the product of two matrices using functions.
#include <stdio.h>
void matrix_product(int matrix1[3][2], int matrix2[2][3], int result[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
void print_matrix(int matrix[][3], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix1[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int matrix2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int result[3][3];
    matrix_product(matrix1, matrix2, result);
    printf("The product of the two matrices is:\n");
    print_matrix(result, 3, 3);
    return 0;
}
