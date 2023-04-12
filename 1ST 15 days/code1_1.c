//# DAY-1 
// Programming in 'C' using all arithmetic operations..(+,-,*,/,%)
#include<stdio.h>
#include<math.h>
int main()
{
    int first,second,add,sub,mul,div,modulo;
    printf("Enter the First number\n");
    scanf("%d",&first);
    printf("Enter the asecond number\n");
    scanf("%d",&second);
    add=first+second;
    sub=first-second;
    mul=first*second;
    div=first/second;
    modulo=first%second;
    printf("The Addition of %d and %d id %d\n",first,second,add);
    printf("The Substraction of %d and %d id %d\n",first,second,sub);
    printf("The Multiplication of %d and %d id %d\n",first,second,mul);
    printf("The Division of %d and %d id %d\n",first,second,div);
    printf("The Modulo of %d and %d id %d\n",first,second,modulo);
    return 0;
}
