#include <iostream>
using namespace std;

// a constexpr function that
// returns nth fibonacci number
/*
*In the above example, we have created a constant
* expression (in the form of a function) to evaluate
* the nth fibonacci number.
* the constexpr keyword before the return type which 
*tells the compiler that the function to be evaluated at compile time.
*/
constexpr int fib(int n) {

    // returns n if n <= 1
    // else, recursively calls fib(n - 1) + fib(n - 2)
    return n <= 1 ? n: fib(n - 1) + fib(n - 2);   
}

int main() {

    // two constexpr variables that store
    // the return values of constexpr function
    constexpr int fibonacci_five = fib(5);
    constexpr int fibonacci_ten = fib(10);

    cout << "fib(5) : "<< fibonacci_five << endl;
    cout << "fib(10) : "<< fibonacci_ten << endl; 

    return 0;
}