// C program to swap two number using call by reference
#include <stdio.h>
void swap(int * num1, int * num2);
int main()
{
    int num1, num2;
    printf("Enter 1st number: \n");
    scanf("%d", &num1);
    printf("Enter 2nd number: \n");
    scanf("%d",&num2);
    printf("Before swapping the numbers are\n ");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n\n", num2);
    swap(&num1, &num2);
    printf("After swapping the numbers are\n");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n\n", num2);
    return 0;
}
void swap(int * num1, int * num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;
}