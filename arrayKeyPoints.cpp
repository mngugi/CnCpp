
/****
 * @file arrayKeyPoints.cpp
 * @brief This program demonstrates how to access elements in an array.
 * @details
 * 1. The program defines an array of strings called bools with 3 elements.
 * 2. 
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int integers[1];

bool bools[3] = {true, false, true};
double doubles[3] = {1.1, 2.2, 3.3};

int main(){

    cout << bools[0] << endl; // accessing the first element

    cout << bools[1] << endl; // accessing the second element
    cout << bools[2] << endl; // accessing the third element
    
    cout << doubles[0] << endl; // accessing the first element
    
return 0;
}