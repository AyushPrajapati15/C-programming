#include <stdio.h>

union Value {
  float real;
  int integer;
};

int main() {
  union Value value;
  char type;
  printf("Enter a value (i or f): ");
  scanf("%c", &type);
  if (type == 'i') {
    printf("Enter an integer value: ");
    scanf("%d", &value.integer);
    printf("Value as integer: %d\nValue as float: %f\n", value.integer, value.real);
  }
  else if (type == 'f') {
    printf("Enter a float value: ");
    scanf("%f", &value.real);
    printf("Value as float: %f\nValue as integer: %d\n", value.real, value.integer);
  }
  return 0;
}