
/**
* a function that takes in 4 doubles as parameters.
* These parameters represent two sets of coordinate points labeled as x1, y1,
* x2, and y2. The function will then use these points to calculate the slope that
* their line creates and then prints that slope to the user.
* 
*/

#include <iostream>
using namespace std;
// function header GetSlope
// 
void  GetSlope( double x1, double x2, double y1, double y2) {
    cout << (y2 - y1) / (x2 - x1) ;
    

}

int main() {
    // declare the variables
    double x1, x2, y1, y2 ;

    cout << "Enter the first x1 coordinate:" << endl;
    cin >> x1; 

    cout << "Enter the first x2 coordinate:" << endl;
    cin >> x2; 

    cout << "Enter the first y1 coordinate:" << endl;
    cin >> y1; 

    cout << "Enter the first y2 coordinate:" << endl;
    cin >> y2; 

    // call the function to call get the slope.
    cout << "the Slope is \n " << endl; // print the slope.

    GetSlope(x1,x2,y1,y2);
    
    return 0 ; 
 
}


