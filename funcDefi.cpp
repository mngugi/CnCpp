/**
 * Functions has two parts, 1.header and 2.the body.
 * Functions start with capital letter.alignas.alignas
 * Function body should be enclosed within curly braces {} and
 * indented as a best practice to show association.
 * 
 */

 #include <iostream>
 using namespace std;

 /**
  * * void - Determines whether there is a return value or not for the function.
  * If the function has no return value, use void. If the function returns an
  * integer, use int, etc
  */

  void echoSomething() {

    cout << "Global Warming!" << endl;
    cout << "Global Warming!" << endl;
    cout << "Get it!" << endl;
    cout << "Catch us later" << endl;

    
  }
/* explicitly call the function echoSomrthing()*/
  int main() {

    echoSomething();
    echoSomething();

    return 0; // doesn't cause any change in the program. returns the value if any.
  }
/**
 * function deﬁnitions are read line by line from top to
 * bottom, functions are also read the same way.
 */