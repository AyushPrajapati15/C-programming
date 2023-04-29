// transpose of a given matric
#include <stdio.h>

#define ROWS 3
#define COLS 4

void transpose(int mat[][COLS], int trans[][ROWS]);

int main() {
    int mat[ROWS][COLS] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12}};

    int trans[COLS][ROWS];

    transpose(mat, trans);

    printf("The transpose of the matrix is:\n");

    for(int i=0; i<COLS; i++) {
        for(int j=0; j<ROWS; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void transpose(int mat[][COLS], int trans[][ROWS]) {
    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}
