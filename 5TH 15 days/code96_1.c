//  C program to concatenate two strings using pointers 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    if (*str1 == '\0') {
        strcpy(result, str2);
        return;
    }
    
    if (*str2 == '\0') {
        strcpy(result, str1);
        return;
    }

    *result = *str1;
    concatenateStrings(str1 + 1, str2, result + 1);
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}
