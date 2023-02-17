//WAP to Swap 2 numbers without using third variable in c
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is :%d ,b is :%d",a,b);
    return 0;
}