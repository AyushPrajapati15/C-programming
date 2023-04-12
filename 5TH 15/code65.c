// Write a C program to find the longest word in a string and display it.
#include <stdio.h>
#include <string.h>
int main() {
  char str[100], longest[100];
  int len, longest_len = 0, i, j, start = 0;
  printf("Enter a string: ");
  scanf("%[^\n]s", str);
  len = strlen(str);
  for (i = 0; i <= len; i++) {
    if (str[i] == ' ' || str[i] == '\0') {
      int word_len = i - start;

      if (word_len > longest_len) {
        longest_len = word_len;

        for (j = 0; j < longest_len; j++) {
          longest[j] = str[start + j];
        }
        longest[longest_len] = '\0';
      }
      start = i + 1;
    }
  } 
  printf("Longest word is: %s\n", longest);

  return 0;
}

