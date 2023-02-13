//# DAY-1 
// Programming in 'C' using all Relational operations...(<,<=,>,>=)
#include<stdio.h>
int main()
{
    int first,second,less,greater,lessequal,greaterequal;
    printf("Enter the first number\n");
    scanf("%d",&first);
    printf("Enter the second number\n");
    scanf("%d",&second);
    less=first<second;
    lessequal=first<=second;
    greater=first>second;
    greaterequal=first>=second;
    printf("The < relation between two integer  is %d\n",less);
    printf("The <= relation between two integer  is %d\n",lessequal);
    printf("The > relation between two integer  is %d\n",greater);
    printf("The >= relation between two integer  is %d\n",greaterequal);


    return 0;
}