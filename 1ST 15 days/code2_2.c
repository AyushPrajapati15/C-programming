//# DAY-1 
// Programming in 'C' using all assignment operator...(=.+=,-=,/=,%=,*=)
#include<stdio.h>
int main()
{
    int first,second,a,b,c,d,e,f;
    printf("Enter the first number\n");
    scanf("%d",&first);
    printf("Enter the second number\n");
    scanf("%d",&second);
    a=first=second;
    b=first+=second;
    c=first-=second;
    d=first/=second;
    e=first%=second;
    f=first*=second;
    printf("The  = relation between two integer  is %d\n",a);
    printf("The += relation between two integer  is %d\n",b);
    printf("The -= relation between two integer  is %d\n",c);
    printf("The /= relation between two integer  is %d\n",d);
    printf("The %= relation between two integer  is %d\n",e);
    printf("The *= relation between two integer  is %d\n",f);
    return 0;
}
