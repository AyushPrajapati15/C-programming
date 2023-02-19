/*Inverted half pyramid of *
* * * * *
* * * *
* * * 
* *
*       */
# include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        // for (j=i;j<=n;j++)  or   for (j=n;j>=i;j--)
        for (j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}