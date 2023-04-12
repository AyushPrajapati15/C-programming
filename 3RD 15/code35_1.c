//  C program to add two number using pointers, function
#include <stdio.h>
void add(int *num1,int *num2);
int main()
{
    int num1, num2, sum;
    printf("Enter 1st number: \n");
    scanf("%d", &num1);
    printf("Enter 2nd number: \n");
    scanf("%d",&num2);
    add(&num1,&num2);
    // printf("Sum = %d", sum);
    return 0;
}
void add(int * num1, int * num2)
{
    int sum;
    sum=*num1+*num2;
    printf("the sum of two numbers is %d",sum);
}