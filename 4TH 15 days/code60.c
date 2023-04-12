// Write a C program to rotate a matrix by 90 degrees clockwise or counterclockwise.
#include <stdio.h>
int main() {
  int matrix[100][100], temp[100][100];
  int m, n, choice, i, j;
  printf("Enter the number of rows and columns of the matrix:\n ");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of the matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  printf("The element of the matrix is:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }
  printf("Enter the choice of rotation:\n");
  printf("1. 90 degrees clockwise\n");
  printf("2. 90 degrees counterclockwise\n");
  scanf("%d", &choice);
  if (choice == 1) {
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        temp[j][m - i - 1] = matrix[i][j];
      }
    }
    printf("The matrix after rotating 90 degrees clockwise:\n");
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        printf("%d ", temp[i][j]);
      }
      printf("\n");
    }
  } else if (choice == 2) {
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        temp[n - j - 1][i] = matrix[i][j];
      }
    }
    printf("The matrix after rotating 90 degrees counterclockwise:\n");
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        printf("%d ", temp[i][j]);
      }
      printf("\n");
    }
  } else {
    printf("Invalid choice.\n");
  }

  return 0;
}
