//prompt for two numbers and find their sum
#include <stdio.h>
int main() {
int a, b, c, d, squared;

double avg;
printf("\nMemory address of variable a: %p\n", (void *)&a);
printf("Memory address of variable b: %p\n", (void *)&b);
printf("Memory address of variable c: %p\n", (void *)&c);
printf("Memory address of variable avg: %p\n", (void *)&avg);
printf("Memory address of variable squared: %p\n", (void *)&squared);

printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);

printf("Enter second number: ");
scanf("%d", &c);

printf("%d + %d + %d = %d\n", a, b, c, a+b+c);

printf("Enter 3 integers: ");
scanf("%d %d %d", &a,&b,&c);

avg = (a+b+c) / 3.0;
printf("\n The average is %3.1f\n", avg);

printf("\nEnter the Square number: ");
scanf("%d ", &d);

squared = d*d;
printf("\n The Square of %d is %d\n :", d, squared ); 

return EXIT_SUCCESS;


}
