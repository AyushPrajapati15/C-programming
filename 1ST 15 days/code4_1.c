// C program to find the greatest number among three numbers using if else statement
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Enter the third number\n");
    scanf("%d",&num3);
    if (num1>num2&&num1>num3)
    {
        printf("Num 1 is greatest\n");

    }
    else if (num2>num1&&num2>num3)
    {
        printf("Num 2 is greatest\n");
    }
    else
    {
        printf("Num 3 is greatest\n");
    }
    return 0;
}