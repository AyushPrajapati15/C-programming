// C program that finds the frequency of each character in a string:
#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

int main() {
  char str[1000];
  int freq[MAX_CHARS] = {0};
  int i;

  printf("Enter a string: ");
  fgets(str, 1000, stdin);

  for (i = 0; str[i] != '\0'; i++) {
    freq[(int) str[i]]++;
  }

  for (i = 0; i < MAX_CHARS; i++) {
    if (freq[i] != 0) {
      printf("'%c' occurs %d times\n", i, freq[i]);
    }
  }

  return 0;
}

