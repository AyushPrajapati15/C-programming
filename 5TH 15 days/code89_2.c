//the function takes 3 positive integer 'a','b','div, input.Implement the function and return the count of all those  number which are divisible by div
# include<stdio.h>
int FindNumberDivisible(int a,int b,int div)
{
    int count=0;
    for ( int i = a; i <= b; i++)
{
    if (i%div==0)
    {
        count++ ;
        printf("%d ",i);
       
    }
}
       printf("\n there are %d numbers divisible by %d ",count,div);
    return count;
}
int main  ()
{
    int a,b,div;
    printf("Enter the starting number\n");
    scanf("%d",&a);
    printf("Enter the ending number\n");
    scanf("%d",&b);
    printf("Enter the number you want to get the divisible's\n");
    scanf("%d",&div);
    FindNumberDivisible(a,b,div);
    return 0;
}
