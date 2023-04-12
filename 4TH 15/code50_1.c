// Program to find the power of a number using recursion:
#include<stdio.h>

int power(int n, int r) {
    if (r == 0) {
        return 1;
    }
    else {
        return n * power(n, r - 1);
    }
}

int main() {
    int n, r;
    printf("Enter base: ");
    scanf("%d", &n);
    printf("Enter exponent: ");
    scanf("%d", &r);
    printf("%d raised to the power %d is %d\n", n, r, power(n, r));
    return 0;
}
