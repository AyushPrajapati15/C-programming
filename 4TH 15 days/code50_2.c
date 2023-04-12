// program to print number pattern using recursion:#include <stdio.h>
#include<stdio.h>

void pattern(int n) {
    if (n == 0) {
        return;
    }
    pattern(n - 1);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}

