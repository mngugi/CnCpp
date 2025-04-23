
/**
 * break is used with nested loops, break terminates the inner loop.
 */
#include <iostream>
using namespace std;
/**
 * This means, when i is equal to 3,
 *  the break statement terminates the inner loop. 
 * Hence, the output doesn't include values greater than or equal to 3.
 */
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                break; // break the inner loop when j is 2
            }
            cout << "i: " << i << ", j: " << j << endl; // print the value of i and j
        }
    }

    return 0;
}   