//# DAY-1 
// Programming in 'C' using all increment/decrement operator...(++,--)
#include<stdio.h>
int main()
{
    int n,m,c,d,e,f;
    printf("Enter a number\n");
    scanf("%d",&m);
    printf("Enter a number\n");
    scanf("%d",&n);
    c=n++ + m++;
    d= --n + --m;
    e= n++ - m++;
    f= n-- + m++ - --n + --m;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    return 0;


}


