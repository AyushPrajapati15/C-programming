// Enter an element into an array and find the average 
#include <stdio.h>
int main() {
    int n, i;
    float num[10], sum = 0, avg;
    printf("Enter the  elements into array: \n");
    for (i = 0; i < 10; ++i) 
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg = sum / 10;
    printf("Average = %f", avg);
    return 0;
}