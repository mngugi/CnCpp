#include <stdio.h>
#include <stdlib.h>
/**
* prompt a number
* eneter number
**/

int main() {

int i, j ;


printf("\nEnter a number i : ");
scanf("%d", &i);


printf("Enter a number j : ");
scanf("%d", &j);

printf("%d + %d = %d\n", i,j, i+j);

printf("\nMemory address:", (void *)&i);
printf("\nMemory address:", (void *)&j);

return EXIT_SUCCESS;

}
