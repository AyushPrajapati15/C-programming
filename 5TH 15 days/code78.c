// Decimal to binary conversion - Write a program to convert a decimal number to its binary representation
#include <stdio.h>
#include <math.h>
int binary(int binary) {
    int decimal = 0, base = 1;

    while (binary > 0) {
        int rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}
void decimal(int decimal) {
    int binary[32], i = 0;

    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int choice, num;
    
    while (1)
    {
    printf("Choose conversion type:\n");
    printf("1. Binary to decimal\n");
    printf("2. Decimal to binary\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &num);
            printf("Decimal equivalent is: %d", binary(num));
            printf("\n");

            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            decimal(num);
            printf("\n");
            break;
        default:
            printf("Invalid choice.");
    }
    }
    return 0;
}
