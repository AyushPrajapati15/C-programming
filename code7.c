//WAP to check whether a number is positive negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if (n>0)
    {
        printf("%d is a positive number",n);
    }
    else if (n<0)
    {
        printf("%d is negative number",n);
    }
    else if(n==0)
    {
        printf("%d is zero",n);
    }
    else
    printf("Invalid number");
    return 0;
}