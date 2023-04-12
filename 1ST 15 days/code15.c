//Palindrome number in c
#include<stdio.h>
int main()
{
    int n,r,sum=0,temp=0;
    printf("Enter a number to check whether it is palindrome or not\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if (sum==temp)
    {  
    printf("%d is palindrome",temp);
    }
    else
    printf("%d is not a palindrome number\n",temp);
    return 0;
}