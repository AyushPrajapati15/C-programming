// Given an array of size N-1 such that it only contains distinct integers in the
// range of 1 to N. Find the missing element.

//////////////////////////////////////////////////////////////////
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 5};
    int a, i, c = 0;
    for (a=1;a<=5;a++)
    for (i = 0; i <= 4; i++)
    {
        if (arr[i] == a)
        {
            c++;
        }
        else
            printf("%d is missing\n", arr[a]);
    }
    return 0;
}
