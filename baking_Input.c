
 /*****
Baking :
How much butter is left in a 10-pound tub if 2(2/3)
are used for a wedding cake?

Analyze
- The tub contained 10 pounds of butter.
- 2(2/3) of butter are used for a cake.
- How much butter is left in the tub?

1. Write code that calculates the amount of butter left
2. Enter variable numbers.


******/

#include <stdio.h>
#include <stdlib.h>


int main() {

    double Amt_butterLeft, Amt_butterIntub, Amt_butterUsed;

    printf("\n Amount of butter in the tub: ");
    scanf("%lf", &Amt_butterIntub);

    printf("\n Amount of butter used: ");
    scanf("%lf", &Amt_butterUsed);


    Amt_butterLeft = Amt_butterIntub - Amt_butterUsed;

    printf("\nAmount of butter left: %lf", Amt_butterLeft);
    // print memory locations
    printf("\n Memory Address location for Amount of butter left: %p \n",   (void *) &Amt_butterLeft);
    printf("\n Memory Address location for Amount of butter used: %p \n",   (void *) &Amt_butterUsed);
    printf("\n Memory Address location for Amount of butter in tub: %p \n", (void *) &Amt_butterIntub);


    return EXIT_SUCCESS;


}
