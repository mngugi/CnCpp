/**
 * The const keyword (which stands for constant) is used to specify that the value of a variable
 *  cannot be changed anywhere in the program, either intentionally or accidentally.
 */
#include <iostream>

int main(){

    // initialize a constant

    const double PI = 3.141;

    // create a read-only reference to PI
    const double &PI_REF = PI;

    cout << "PI" << PI;
    cout << "\nPI_REF: " << PI_REF;


    return 0 ; 




}