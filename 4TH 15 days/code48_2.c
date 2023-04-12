// Allocate memory for a two-dimensional array of integers
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int **ptr, rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    ptr = (int**) malloc(rows * sizeof(int*));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < rows; i++) {
        ptr[i] = (int*) malloc(cols * sizeof(int));
        if (ptr[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &ptr[i][j]);
        }
    }
            printf("\nthe matrix is \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf(" %d  ",ptr[i][j]);

        }
        printf("\n");
    }
    return 0;

}