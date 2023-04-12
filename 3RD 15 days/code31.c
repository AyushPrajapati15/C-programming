// Rotate the array by one position in clock-wise direction.
#include <stdio.h>
int main()
{
    int arr[100];
    int i, temp,n;
    printf("Eter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements into the array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before rotating the array in clockwise\n");
    for (i = 0; i <= n-1; i++)
        printf("%d ", arr[i]);
        temp = arr[n-1];
    for (i = n-1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
        arr[0] = temp;
    printf("\nAfter rotating the array in clockwise direction \n");
    for (i = 0; i <= n-1; i++)
        printf("%d ", arr[i]);
    return 0;
}