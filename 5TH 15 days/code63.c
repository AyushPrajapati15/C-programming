/* Here's a C program that creates a union named "myUnion" containing a struct variable and an integer variable, initializes the char array to "hello" and the integer variable to 123, and displays the values of both variables:*/

#include <stdio.h>

union myUnion {
  struct {
    char string[10];
    int number;
  } data;
  int integer;
};

int main() {
  union myUnion u;
  
  u.data.number = 123;
  
  // Initialize character array to "hello"
  for (int i = 0; i < 5; i++) {
    u.data.string[i] = "hello"[i];
  }
  
  printf("\nInteger value: %d\n", u.data.number);
  printf("\nString value: %s\n", u.data.string);
  
  return 0;
}