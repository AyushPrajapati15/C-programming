// Division of two numbers using pointers

#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,*p1,*p2;
 float div;
 printf("Enter 1st number: ");
 scanf("%d",&num1);
 printf("Enter 2nd number: ");
 scanf("%d",&num2);
 p1=&num1;
 p2=&num2;
 div=(float)*p1/ *p2;
 printf("\n\nAnswer:  %f",div);
 getch();
}
