//# DAY-1 
// Programming in 'C' using all ternary operator...
#include <stdio.h>

int main() 
{
  int age,n;
  printf("Enter your age:\n ");
  scanf("%d", &age);
  (age >= 18) ? printf("You can vote\n") : printf("You cannot vote\n");
  printf("Enter a number\n ");
  scanf("%d", &n);
  (n%2==0) ? printf("%d is Even\n",n) : printf("%d is Odd\n",n);

  return 0;
}






