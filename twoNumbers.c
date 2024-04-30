//prompt for two numbers and find their sum
#include <stdio.h>
int main() {
int a, b;

printf("\nMemory address of variable a: %p\n", (void *)&a);
printf("Memory address of variable a: %p\n", (void *)&b);

printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("%d + %d = %d\n", a, b, a + b);


}
