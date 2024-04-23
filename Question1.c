#include <stdio.h>
#include <stdlib.h>


int main() {

int a = 15;
int b = 24;
printf("Memory address of variable a: %p\n", (void *)&a);
printf("\nMemory address of variable a: %p\n", (void *)&b);


printf("%d %d\n", b-a+7, b-(a+7));

printf("%d %d\n", b-a-4, b-(a-4));
printf("%d %d\n", b%a/2, b%(a/2));
printf("%d %d\n", b*a/2, b*(a/2));
printf("%d %d\n", b/2*a, b/(a*2));

}
