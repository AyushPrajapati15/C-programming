// Define an enum for the four suits in a deck of cards. Write a function that takes a suit as an argument and returns the corresponding string representation of the suit (e.g., "Hearts" for the Hearts suit).
#include <stdio.h>

enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };

const char* suitToString(enum Suit s) {
    switch (s) {
        case HEARTS:
            return "Hearts";
        case DIAMONDS:
            return "Diamonds";
        case CLUBS:
            return "Clubs";
        case SPADES:
            return "Spades";
        default:
            return "Unknown Suit";
    }
}
int main() {
    enum Suit s = HEARTS;
    printf("%s\n", suitToString(s));  // Output: "Hearts"
    return 0;
}
