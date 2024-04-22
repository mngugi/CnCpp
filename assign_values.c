#include <stdio.h>
#include <stdlib.h>

int main() {

const c = 0.5;
int base, length, height ;
float volume;



printf("\n Enter base: " );
scanf("%d", &base);

printf("\n Enter length: " );
scanf("%d", &length);

printf("\n Enter height: " );
scanf("%d", &height);

volume = 0.5*base*length*height;

printf("\nMemory address of side: %p\n", (void *)&base);
printf("Memory address of area: %p\n", (void *)&length);
printf("\nMemory address of side: %p\n", (void *)&height);
printf("Memory address of area: %p\n", (void *)&volume);



printf("\n Volume: %f\n", volume);

return 0;



}
