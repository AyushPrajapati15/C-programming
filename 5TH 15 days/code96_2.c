// program to find the power of a number using pointers
#include <stdio.h>

int power(int *base, int *exponent) {
    if (*exponent == 0) {
        return 1;
    }

    return *base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(&base, &exponent);

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
