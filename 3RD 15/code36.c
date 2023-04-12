
//   C program to input and print array elements using pointers
#include <stdio.h>
int main()
{
    int arr[10];
    int  i;
    int * ptr = arr;

    printf("Enter elements in array:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = arr;

    printf("Array elements: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }

    return 0;
}