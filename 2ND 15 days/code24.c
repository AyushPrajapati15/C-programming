// Wap to find the Max & Min value in array 
# include<stdio.h>
int main()
{
    int arr[10]={10,20,30,42,05,45,65,82,48,65};
    int max=arr[0],min=arr[0],i;
    //for printing elements of an array
    printf("The Elements of array are\n");
    for (i=1;i<=9;i++)
    printf("%d\n",arr[i]);
    //max
    for (i=1;i<=9;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    //min
    for (i=1;i<=9;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Minimum is %d\n",min);
    printf("Maximum is %d",max);
    return 0;
}