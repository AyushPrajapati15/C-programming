//Program in c to check whether the entered character is alphabet or not
#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character\n");
    scanf("%c",&n);
    if(n>=60&&n<=90)
    {
        printf("%c is a upper case character",n);
    }
    else if(n>=97&&n<=122)
    {
        printf("%c is a Lower case character",n);
    }
    else
    printf("Entered input is not a character");
    return 0;
}