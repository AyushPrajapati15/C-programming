// Write a C program to remove all occurrences of a given character from a string.
#include <stdio.h>
#include <string.h>

void removeChar(char str[], char c) {
  int len = strlen(str);
  int i, j=0;
  for (i = 0; i < len; i++) {
    if (str[i] != c) {
      str[j] = str[i];
      j++;
    }
  }
  str[j] = '\0';
}
int main() {
  char str[100], c;
  printf("Enter a string: ");
  scanf("%[^\n]s", str);
  printf("Enter a character to remove: ");
  scanf(" %c", &c);
  removeChar(str, c);

  printf("Resulting string: %s\n", str);

  return 0;
}

