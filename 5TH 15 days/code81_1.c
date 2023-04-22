// Printing krishnamurthy number or strong number in c.   ex:- 145=1!+4!+5!=145
#include <stdio.h>
int factorial(int rem)
{
    if (rem == 0 || rem == 1)
    {
        return 1;
    }
    else
    {
        return rem * factorial(rem - 1);
    }
}
int krishnamurthy(int n)
{
    int rem, temp = 0, sum = 0;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + factorial(rem);
        n = n / 10;
    }
    if (temp == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    while (1)
    {
        int n;
        printf("Enter a number to check whether it is krishna murthy number or not or,Press 0 to exit\n");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("Exited successfully");
            return 0;
        }
        else
        {
            if (krishnamurthy(n))
            {
                printf("%d is krishnamurthy number\n", n);
            }
            else
                printf("%d is not a krishnamurthy number\n", n);
        }
    }
    return 0;
}