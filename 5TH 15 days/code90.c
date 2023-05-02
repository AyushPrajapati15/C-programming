// Write a program to reverse a string without using any string functions.
#include <stdio.h>

void reverse_string(char* str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}


void reverse_string(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
