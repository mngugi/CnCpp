#include <stdio.h>
#include <stdlib.h>

int main() {

int base, height;
double area;

printf("\nEnter the base: ");
if (scanf("%d",&base) !=1) {
printf("Error: Invalid input for base!");
return EXIT_FAILURE;
}

printf("\nEnter height: ");
if (scanf("%d", &height) !=1){
printf("Error: Invalid input for base!");
return EXIT_FAILURE;
}

if (base <= 0 || height <= 0) {
        printf("Error: Base and height must be positive.\n");
        return EXIT_FAILURE;
    }

area = (height * base) / 2.0;
printf("\nThe Area is %.2f\n: ", area);

printf("\n Memory Address location for base: %p \n", (void *) &base);
printf("\n Memory Address location for height: %p \n", (void *) &height);
printf("\n Memory Address location for area: %p \n", (void *) &area);

return EXIT_SUCCESS;





}
