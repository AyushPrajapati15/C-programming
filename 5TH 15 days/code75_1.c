// Using an enum in a switch statement:
#include <stdio.h>
enum colors {
    RED, GREEN, BLUE
};

void print_color(enum colors c) {
    switch (c) {
        case RED:
            printf("The color is red\n");
            break;
        case GREEN:
            printf("The color is green\n");
            break;
        case BLUE:
            printf("The color is blue\n");
            break;
        default:
            printf("Unknown color\n");
    }
}

int main() {
    enum colors c = GREEN;
    print_color(c);
    return 0;
}
