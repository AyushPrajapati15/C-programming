// convert binary to decimal
#include <stdio.h>
#include <math.h>
int convert( long);
int main() {
  long n;
  printf("Enter a binary number: ");
  scanf("%d", &n);
  printf("%d in binary = %d in decimal", n, convert(n));
  return 0;
}
int convert(long n) {
  int x = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    x += rem * pow(2, i);
    ++i;
  }
  return x;
}