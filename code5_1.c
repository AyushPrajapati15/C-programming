// C program to convert temperature from Fahrenheit to Celsius and Celsius to Fahrenheit
# include<stdio.h>
int main()
{
    float  far,cel;
    char ch;
    printf("Press c to convert temperature from fahrenheit to celsius.\n");
    printf("Press f to convert temperature from celsius to fahrenheit.\n");    
    printf("Enter F or C \n");
    scanf("%c",&ch);
    if (ch=='c' || ch=='C')
    {
        printf("Enter the fahrenheit you want to convert");
        scanf("%f",&far);
        cel=(far-32)*5/9;
        printf("%f fahrenheit to celsius is %f",far,cel);
    }
    else if(ch=='f'||ch=='F')
    {
    printf("Enter the celsius you want to convert");
    scanf("%f",&cel);
    far=(cel*9/5)+32;
    printf("%f celsius to fahrenheit is %f",cel,far);
    }
    else
    printf("Invalid choice");
    return 0;
}