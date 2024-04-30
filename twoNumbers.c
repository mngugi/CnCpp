//prompt for two numbers and find their sum
#include <stdio.h>

int main() {
    int a, b, c, d, squared;
    double avg;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    printf("Memory address of variable a: %p\n", (void *)&a);
    printf("Memory address of variable b: %p\n", (void *)&b);
    printf("Memory address of variable c: %p\n", (void *)&c);

    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);

    avg = (a + b + c) / 3.0;
    printf("The average is %.1f\n", avg);

    printf("Enter the number to square: ");
    scanf("%d", &d);

    printf("Memory address of variable d: %p\n", (void *)&d);

    squared = d * d;
    printf("The square of %d is %d\n", d, squared);

    printf("Memory address of variable squared: %p\n", (void *)&squared);

    return 0;
}
