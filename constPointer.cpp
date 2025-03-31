/**
 * A const pointer is a pointer in which we can change the value pointed by the pointer,
 * but cannot change the variable it points to.
 */
#include <iostream>
using namespace std;

int main()

{

    string fruit1 = "Apple" ;
    string fruit2 = "Orange" ;

    cout << "Initially, fruit1: " << fruit1 << endl;

    // PTR1 is const pointer to fruit1

    string *const PTR1 = &fruit1;

    // change the value of fruit1 using PTR1

    *PTR1 = fruit2 ; 

    cout << "finally , fruit1: " << fruit1 << endl ; 


    return 0;





}