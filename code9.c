// sum of n natural numbers.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (i= 0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of %d naturals is %d",n,sum);
    


    return 0;
}