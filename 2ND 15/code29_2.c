// Wap to count the number of positive and negative elements in array
#include<stdio.h>
int main()
{
    int arr[20]={10,-20,45,-35,-68,-78,55,46,-98,-41,47,89,-44,25,99,41,-55,18,74,45};
    int i,pos=0,neg=0;
    for (i=0;i<20;i++)
    {
        if (arr[i]>0)
        {
            pos++;
        }
    }
    for (i=0;i<20;i++)
    {
        if (arr[i]<0)
        {
            neg++;
        }
    }
    printf("The total number of positive numbers in the array are %d\n",pos);
    printf("The total number of negative numbers in the array are %d\n",neg);
    return 0;
}