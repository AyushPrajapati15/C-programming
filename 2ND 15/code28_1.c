// Wap to count even and odd elements in array in c
#include<stdio.h>
int main ()
{
    int arr[10]={10,20,45,35,68,78,55,46,98,41},i,e=0,o=0;

    for(i=0;i<10;i++)
    {
        if (arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        
    }
    printf("The number of even number in array are %d\n",e);
    printf("The number of odd number in array are %d",o);

    return 0;
}