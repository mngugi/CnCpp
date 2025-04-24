
/**
 * @file arrsyAccess.cpp 
 * @brief This program demonstrates how to access elements in an array.
 * @details
 * 1. The program defines an array of strings called names with 5 elements. 
 */
#include <iostream>
using namespace std;

int main(){

    string names[5] = {"Allan", "Bob", "Charlie", "David", "Edward"};
   // int scores[5] = {71, 42, 99, 85, 60};

    cout << "Allan: " << names[0] << endl; // accessing the first element

    return 0;
}