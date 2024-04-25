#include <stdio.h>
#include <stdlib.h>

int main() {

int base, height;
double area;

printf("\nEnter the base: ");
scanf("%d",&base);

printf("\nEnter height: ");
scanf("%d", &height);

area = (height * base) / 2.0;
printf("\nThe Area is %.2f\n: ", area);

printf("\n Memory Address location for base: %p \n", (void *) &base);
printf("\n Memory Address location for height: %p \n", (void *) &height);
printf("\n Memory Address location for area: %p \n", (void *) &area);

return EXIT_SUCCESS;





}
