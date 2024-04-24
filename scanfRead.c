#include <stdio.h>
#include <stdlib.h>

/**
* prompt a number
* enter number
**/

int main() {

int i, j ;


printf("\nEnter a number i : ");
scanf("%d", &i);


printf("Enter a number j : ");
scanf("%d", &j);

printf("%d + %d = %d\n", i,j, i+j);

printf("\nMemory address of i: %p", (void *)&i);
printf("\nMemory address of j: %p\n", (void *)&j);


return EXIT_SUCCESS;

}
