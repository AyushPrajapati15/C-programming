// IF 'n' is a multiple of 3, print 1. 
// If 'n' is a multiple of 5, print 2.
// If 'n' is a multiple of both 3 and 5. print 3.
// If none of the above rules match, print 0
#include<stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
if((n%3==0)&&(n%5!=0)){
printf("%d is divisible by 3\n",n);
printf("1");
}
else if ((n%3!=0)&&(n%5==0))
{
printf("%d is divisible by 5\n",n);
    printf("2");
}
else if ((n%3==0)&&(n%5==0))
{
printf("%d is divisible by 3 and 5\n",n);
    printf("3");
}
else
{
printf("%d is not divisible by 3 or 5\n",n);
    printf("0");
}
return 0;
}


