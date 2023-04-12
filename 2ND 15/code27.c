#include <stdio.h>

int main()
{
    int arr[10]={10,20,54,26,89,44,25,65,47,85}, n, largest, second_largest;

    // Find the largest element in the array
    largest = arr[0];
    for(int i=1; i<9; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    // Find the second largest element in the array
    second_largest = arr[0];
    for(int i=1; i<9; i++)
    {
        if(arr[i] > second_largest && arr[i] < largest)
            second_largest = arr[i];
    }

    printf("The second largest element in the array is: %d\n", second_largest);

    return 0;
}
