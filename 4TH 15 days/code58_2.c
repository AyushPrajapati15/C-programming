// C program to sort the elements of a matrix in descending order
#include <stdio.h>
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int matrix[100][100];
    int rows, columns, i, j;
    printf("Enter number of rows:\n ");
    scanf("%d", &rows);
    printf("Enter number of columns: \n");
    scanf("%d", &columns);
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nOriginal matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        sort(matrix[i], columns);
    }
    printf("\nSorted matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
