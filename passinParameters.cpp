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

void AddSub( double integerJ, double integerI, double integerK) {
    

    cout << "Add Subtraction Answer is: " << integerI + integerJ - integerK << endl ; 
    // add two variables and subtract the third one.

}

void AddSubDivide(double integerJ, double integerI, double integerK, int integer_M){

    // use a try and catch exception to handle a division by 0.
    try
    {
        /* code */
        if (integer_M == 0){

            throw runtime_error("Cannot Divide by Zero!!");
        }
        else {
            cout << "Add Subtract Divide: " << (integerI + integerJ - integerK )/ integer_M << endl; 
        }
    }
    catch(const runtime_error& e ) /** catch(runtime_error) → catch (const runtime_error& e) to access the exception object and call e.what(). */
    {
        cout << e.what() << '\n';
    }
}    
//  lets add an array function that prints elements in the array[].

void namesArray(string array[], int size){
    for (int i = 0 ; i < size ; i++ ){
        cout << array[i] << endl;

  }

}

int main(){

    AddSub(74,98,45);
    AddSubDivide(74,45,98,0);

    cout << "----------------\n" << endl;

    string names[] = {"Peter", "Beth", "Sam"};
    int len = sizeof(names) / sizeof(names[0]);
    namesArray(names, len);


    return 0;
}