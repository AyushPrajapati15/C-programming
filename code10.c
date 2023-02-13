//WAP in c to find the n fibonacci series
#include<stdio.h>
int main()
{
    int a,b,c;
    a=0;
    b=1;
    c=a+b;
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}