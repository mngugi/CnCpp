#include <stdio.h>
#include <stdlib.h>

int main() {

int a, s ;

int i,j,k;


double average;

printf("\nMemory address of variable a: %p\n", (void *)&a);
printf("\nMemory address of variable s: %p\n", (void *)&s);
printf("\nMemory address of variable i: %p\n", (void *)&i);
printf("\nMemory address of variable j: %p\n", (void *)&j);
printf("\nMemory address of variable k: %p\n", (void *)&k);

printf("Enter side length: ");
scanf("%d", &s);

a = s * s ;

printf("Area  of the square is: %d\n", a);

printf("-----------------------------\n");

printf("\nEnter 3 integers: ");
scanf("%d %d %d", &i, &j, &k);

average = (i + j + k)/3.0;

printf("/n The average is %3.1f\n", average);

return EXIT_SUCCESS;

}
