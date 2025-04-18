#include <iostream>
using namespace std;

// Function that returns an integer
int add(int a, int b) {
    return a + b;
}

// Function that adds 5 to the number

int AddFive( int number){
// return the integer added to 100    
    return number + 5 ;

}

// Function that returns a string
string greet(string name) {
    return "Hello, " + name + "!";
}

int main() {
    // Example of returning an integer
    int result = add(5, 7);
    cout << "The sum is: " << result << endl;

    // Example of returning a string
    string message = greet("Sigma");
    cout << message << endl;

    cout << "--------------------" << endl;

    AddFive(100);

    cout << "------------------" << endl; 

    int newNumber = AddFive(100);
    cout << newNumber << endl; 

    return 0;
}