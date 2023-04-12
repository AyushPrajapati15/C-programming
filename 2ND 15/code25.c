// Wap to interchange the First and Last element of array
#include<stdio.h>
int main()
{
    int arr[5]={11,25,32,45,98},i,temp;
    printf("Before interchange the elements are \n");
    for (i=0;i<=4;i++)
    {
    printf("%d\n",arr[i]);
    }
        temp=arr[0];
        arr[0]=arr[4];
        arr[4]=temp;
    printf("After interchange the ellements are\n");
    for (i=0;i<=4;i++)
    {
    printf("%d\n",arr[i]);
    }
    return 0;
}