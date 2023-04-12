#include <stdio.h>
union Data {
  int value;
  float price;
};

int main() {
  union Data data;
  printf("Enter a value: ");
  if (scanf("%d", &data.value) == 1) {
    printf("Value as int: %d\nValue as float: %f\n", data.value, data.price);
  }
  else {
    printf("Enter a price: ");
    scanf("%f", &data.price);
    printf("Price as float: %f\nPrice as int: %d\n", data.price, data.value);
  }
  return 0;
}