#include <iostream>
using namespace std;

int main()
{  
    // initialize a const NUMBER_MONTHS

    const int NUMBER_MONTHS = 12 ; 

    // MONTHS_PTR is a pointer to int const
    /**
     * A pointer to a const is a pointer variable that points to a constant variable. These pointers
     * allow us to change the address the pointer is pointing to,
     * don't allow us to change the value stored in those constant variables.
     */ 
     const int *MONTHS_PTR = &NUMBER_MONTHS ; 

     // creat  a second pointer to Const, i.e HALF_YEAR

     const int HALF_YEAR = 6;
     
     // now create *MONTH_PTR pointer to Const &HALF_YEAR
     /**
      * change the address pointed by MONTHS_PTR to point to some other variable without any error.
      */

     MONTHS_PTR =  &HALF_YEAR; 

     cout << endl;

     cout << "Total months: " << NUMBER_MONTHS << endl;
     cout << "Halfy an year: " << HALF_YEAR << endl;

     // print the value that MONTH_PTR is currently pointing 
     
     cout << "MONTHS_PTR is pointing to: " << *MONTHS_PTR << endl;


     return 0;


}
