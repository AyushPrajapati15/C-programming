// C program for matrix addition
#include<stdio.h>
int main()
{
    int a[5][5]={{1,2,3,4,5},{6,4,7,5,4},{5,7,6,1,2},{1,2,8,9,4},{4,5,6,7,1}},b[5][5]={{1,2,3,4,5},{6,4,7,5,4},{5,7,6,1,2},{1,2,8,9,4},{4,5,6,7,1}},c[5][5],i,j;
    printf("1st matrix is\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
        
    }
    printf("2nd matrix is\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d ",b[i] [j]);
        }
            printf("\n");
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            c[i][j]=a[i][j]+b[i] [j];
        }
    }
    printf("sum of two matrix is\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d ",c[i] [j]);
        }
              printf("\n");
        
    }
    return 0;
    
}