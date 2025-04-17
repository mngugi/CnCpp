/*
*
* If a function contains parameters within its definition, they are required to
* be present when the function is called.
* The example below creates a function for adding and division. 
*
*/

#include <iostream> 
using namespace std;

/**
 *  the function,
 *   Add(), adds two integer parameters together. Parameters are the types or
 *   values located in between the parentheses. Multiple parameters are separated by commas.
 * 
 **/

void Add( double integerJ, double integerI, double integerK) {
    cout << integerI + integerJ - integerK<< endl ; 

}

int main() {

    Add(74,98,45);
    return 0;
}