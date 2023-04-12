// C program to find the reverse of a number using recursion
#include<stdio.h>
int reverse(int num, int rev);

int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num, rev);
    printf("Reverse of %d is %d\n", num, rev);
    return 0;
}

int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    } else {
        rev = rev * 10 + (num % 10);
        return reverse(num / 10, rev);
    }
}

