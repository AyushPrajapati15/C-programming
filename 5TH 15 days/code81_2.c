// Printing perfect number or strong number in c.   ex:- 6=1+2+3=6     
// the sum of its proper divisors (excluding itself)
#include <stdio.h>
int perfect(int n)
{
    int sum = 0, i;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (n == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

int main()
{
    while (1)
    {
        int n;
        printf("Enter a number to check whether it is perfect number or not or,Press 0 to exit\n");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("Exited successfully");
            return 0;
        }
        else
        {
            if (perfect(n))
            {
                printf("%d is perfect number\n", n);
            }
            else
                printf("%d is not a perfect number\n", n);
        }
    }
    return 0;
}