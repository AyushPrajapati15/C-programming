//  Wap to print all negative and positive elements in array
#include<stdio.h>
int main()
{
    int arr[10]={10,-20,45,-35,-68,-78,55,-46,-98,-41};
    int i;
    printf("Negative numbers are \n");
    for (i=0;i<=9;i++)
    {
        if (arr[i]<0)
        {
            printf("%d \n",arr[i]);
        }
    }
    printf("Positive numbers are \n");
    for (i=0;i<=9;i++)
    {
        if (arr[i]>0)
        {
            printf("%d \n",arr[i]);
        }
    }
    return 0;
}