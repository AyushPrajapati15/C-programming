// to access and modify the values of these members in the union.
#include <stdio.h>
union codd {
    float f;
    int i;
};
int main() {
    union codd u;
    u.f = 3.14;
    printf("Value of f: %f\n", u.f);
    u.i = 42;
    printf("Value of i: %d\n", u.i);
    u.f = 2.718;
    printf("Value of f: %f\n", u.f);
    printf("Value of i: %d\n", u.i);
    return 0;
}

