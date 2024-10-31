#include <stdio.h>

int main(){
    int result;
    int a = 74, b = 98 ;


    asm ("addl %%ebx, %%eax"
        : "=a" (result)
        : "a" (a), "b", result);

    printf("Result is : %d\n", result);
    return 0;

}
