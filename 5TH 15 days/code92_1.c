#include <stdio.h>

int main() {
    int sides;
    printf("Enter the number of sides on the shape (between 3 and 8): ");
    scanf("%d", &sides);

    switch(sides) {
        case 3:
            printf("Triangle\n");
            break;
        case 4:
            printf("Square\n");
            break;
        case 5:
            printf("Pentagon\n");
            break;
        case 6:
            printf("Hexagon\n");
            break;
        case 7:
            printf("Heptagon\n");
            break;
        case 8:
            printf("Octagon\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
