#include <stdio.h>
#include <stdlib.h>

int main() {

char item[50];

printf("Enter Item Name: ");
fgets(item, sizeof(item), stdin);
printf("Item, %s\n", item);

printf("\nmemory location address: %p", (void *)&item);
return EXIT_SUCCESS;




}
