#include <stdio.h>

int main() {
    int result;
    int a = 5, b = 3;

    // Corrected inline assembly syntax
    asm ("addl %%ebx, %%eax"      // Assembly instruction: add b to a
         : "=a" (result)          // Output: result in EAX
         : "a" (a), "b" (b)       // Inputs: a in EAX, b in EBX
    );

    printf("The result is: %d\n", result);
    return 0;
}

