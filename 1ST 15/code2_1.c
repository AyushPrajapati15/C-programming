//# DAY-1 
// Programming in 'C' using all bitwise (&,|,^) and Logical operator...(&&,||)
#include<stdio.h>
int main()
{
    int first,second,a,o,x,la,lo;
    printf("Enter the first number\n");
    scanf("%d",&first);
    printf("Enter the second number\n");
    scanf("%d",&second);
    a=first&second;
    o=first|second;
    x=first^second;
    la=first&&second;
    lo=first||second;
    printf("The & relation between two integer  is %d\n",a);
    printf("The | relation between two integer  is %d\n",o);
    printf("The ^ relation between two integer  is %d\n",x);
    printf("The && relation between two integer  is %d\n",la);
    printf("The || relation between two integer  is %d\n",lo);

    return 0;
}


