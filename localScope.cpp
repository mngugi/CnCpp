/**
 * local scope are declared inside the function. 
 * func1() and func2 are local scope variables.
 * 
 */

/**
  * Global scope  - Referencing
  * Global scope variable is when a variable 
  * is declared out side all existing functions.
  * 
  */

  /***
   * Introducing const
   * If you want a global variable to remain unchanged throughout the
   * program, you can declare the variable as const. const variables are also
   * referred to as constants.
   * 
*/

 #include <iostream>
 using namespace std;

const string IamCONSTANT = "I never change!" ;

string fruits = "Healthy Foods"; // global scope variable

void foods(){
    cout << fruits << endl;
  }
// local scope variable
 void func1(){
    string your_name = "Bruno Fernandez";
    cout << your_name << endl;

 }

 void func2(){
    string your_name = "Marcus Rashford";
    cout << your_name << endl;
 }

 void call_Constant(){
    
    cout << IamCONSTANT << endl;
 }

 int main(){
    func1();
    func2();
    
    cout << "---------------" << endl;

    foods();
    cout << "---------------" << endl;
    call_Constant();

    return 0;
 }