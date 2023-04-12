// Find the first non-repeating element in a given array arr of N integers.
// Note: Array consists of only positive and negative integers and not zero.
#include <stdio.h>
int main()
{
    int arr[] = {-1, 2, -1, 3, 2}, i, j, count = 0;
    printf("The elements of array before are \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        count=0;
        for (j = 0; j < 5; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                count = 1;
            }
        }
        if (count == 0)
        {
            printf("\n%d is the non repeating element", arr[i]);
            break;
        }
    }
    if (count == 1)
    {
        printf("No non repeating elements found");
    }
    return 0;
}
