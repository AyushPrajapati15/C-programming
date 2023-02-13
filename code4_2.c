// C program to find out whether a given year is a leap year or not:
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is even \n",num);

    }
    else 
    {
        printf("%d is odd \n",num);
    }
    return 0;
}