// Create an enum for the different types of shapes (e.g., square, rectangle, triangle, circle). Write a program that prompts the user to enter the dimensions of a shape and then prints out the type of shape based on those dimensions.
#include <stdio.h>

enum Shape { SQUARE, RECTANGLE, TRIANGLE, CIRCLE };

int main() {
    enum Shape s;
    float a, b, c;

    printf("Enter the dimensions of the shape:\n");
    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c (enter 0 for shapes with only two dimensions): ");
    scanf("%f", &c);

    if (c == 0) {
        if (a == b) {
            s = SQUARE;
        } else {
            s = RECTANGLE;
        }
    } else if (a == b && b == c) {
        s = TRIANGLE;
    } else {
        s = CIRCLE;
    }

    switch (s) {
        case SQUARE:
            printf("Shape: Square\n");
            break;
        case RECTANGLE:
            printf("Shape: Rectangle\n");
            break;
        case TRIANGLE:
            printf("Shape: Triangle\n");
            break;
        case CIRCLE:
            printf("Shape: Circle\n");
            break;
        default:
            printf("Unknown Shape\n");
            break;
    }

    return 0;
}
