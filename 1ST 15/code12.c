//WAP in c to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("%d is prime",n);
    }
    else
    printf("%d is not a prime number",n);
    return 0;
}