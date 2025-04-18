#include <iostream>
using namespace std;

// Function that returns an integer
int add(int a, int b) {
    return a + b;
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

    return 0;
}