// count the number of occurrences of a given character in a string.
#include <stdio.h>
#include <string.h>

int count(char str[], char ch) {
    int a = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            a++;
        }
    }
    return a;
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    int total = count(str, ch);
    printf("Number of occurrences of %c in %s: %d\n", ch, str, total);
    
    return 0;
}
