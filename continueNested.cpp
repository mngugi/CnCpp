
/**
 * break is used with nested loops, break terminates the inner loop.
 */
#include <iostream>
using namespace std;
/**

 */
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 3) {
                continue; // continue the inner loop when j is 2
            }
            cout << "i: " << i << ", j: " << j << endl; // print the value of i and j
        }
    }

    return 0;
}   