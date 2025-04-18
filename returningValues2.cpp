
/**
 * Functions to return ints, doubles, strings,and vectors. 
 * parameter i as the first integer
 * parameter j as th second integer
 * return sum(i,j)
 * 
 */

 /**
 * Functions to return ints, doubles, and strings.
 */

#include <iostream>
#include <string>  // for std::string
using namespace std;

int returnSum(int i, int j) {
    return i + j;
}

double returnDouble(double i, double j) {
    return i + j;  // Return type changed to double
}

string returnString(string i, string j) {
    return i + j;  // Return type changed to string
}

int main() {
    cout << "Sum: " << returnSum(9, 8) << endl;
    cout << "Double Sum: " << returnDouble(1.2, 3.5) << endl;
    cout << "Concatenated String: " << returnString("10", "36") << endl;

    return 0;
}
