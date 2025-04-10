/**
 * A while loop evaluates the condition
 * If the condition evaluates to true, the code inside the while loop is executed.
 * The condition is evaluated again.
 * This process continues until the condition is false.
 * When the condition evaluates to false, the loop terminates.
 * 
 * 
 */


#include <iostream>

using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << i << " ";
        ++i;
    }
    
    
    return 0;
}

