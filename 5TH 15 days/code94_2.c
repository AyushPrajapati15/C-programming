//  C program to swap two integers using pointers. 
#include <stdio.h>

void swap(int *x, int *y) {
    if (*x == *y) {
        return;
    }

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}