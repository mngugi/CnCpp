#include <stdio.h>
#include <stdlib.h>

/*
 * This program calculates the area of a square.
 * It takes the length of a side as input and outputs the area.
 */

int main() {
    int area, side;

    // Prompt the user to enter the length of a side
    printf("\nEnter Length of side: ");
    scanf("%d", &side);

    // Calculate the area of the square
    area = side * side;

    // Output the area
    printf("\nArea of square is %d\n", area);

    exit(EXIT_SUCCESS);
}
