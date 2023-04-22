// Sure! Here's an example C program that uses a structure to find the Fibonacci series:
#include <stdio.h>
struct Fibonacci
{
    int current;
    int previous;
};

struct Fibonacci next_fibonacci(struct Fibonacci *f)
{
    struct Fibonacci next;
    next.current = f->current + f->previous;
    next.previous = f->current;
    return next;
}

int main()
{
    struct Fibonacci fibonacci;
    fibonacci.current = 1;
    fibonacci.previous = 0;
    struct Fibonacci *fibonacci_ptr = &fibonacci;

    printf("%d\n%d\n", fibonacci.previous, fibonacci.current);
    for (int i = 2; i < 10; i++)
    {
        struct Fibonacci next = next_fibonacci(fibonacci_ptr);
        printf("%d\n", next.current);
        *fibonacci_ptr = next;
    }
    return 0;
}
