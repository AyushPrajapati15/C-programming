// Write a C program to find the sum of each row and column of a matrix
#include <stdio.h>
int main() {
  int matrix[3][3], i, j, row_sum,n, col_sum;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
  printf("Matrix:\n");
  for(i = 0; i < 3; i++) {
    row_sum = 0;
    for(j = 0; j < 3; j++) {
      printf("%d  ", matrix[i][j]);
      row_sum += matrix[i][j];
    }
    printf("= %d\n", row_sum);
  }
        printf("|  |  |\n");
  for(i = 0; i < 3; i++) {
    col_sum = 0;
    for(j = 0; j < 3; j++) {
      col_sum += matrix[j][i];
    }
        printf("%d ", col_sum);
  }
  return 0;
}
