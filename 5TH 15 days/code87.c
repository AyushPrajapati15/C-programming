// program to find the highest frequency element in an array:
#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int n, maxFreq = 0, mode, i, j;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        freq[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                freq[i]++;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            mode = arr[i];
        }
    }
    printf("The element with highest frequency is %d\n", mode);

    return 0;
}
