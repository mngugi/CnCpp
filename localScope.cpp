/**
 * local scope are declared inside the function. 
 * func1() and func2 are local scope variables.
 * 
 * 
 */
/**
  * Global scope  - Referencing
  * Global scope variable is when a variable 
  * is declared out side all existing functions.
  * 
  */

 #include <iostream>
 using namespace std;

 
string fruits = "Healthy Foods";

void foods(){
    cout << fruits << endl;
  }

 void func1(){
    string your_name = "Bruno Fernandez";
    cout << your_name << endl;

 }

 void func2(){
    string your_name = "Marcus Rashford";
    cout << your_name << endl;
 }

 int main(){
    func1();
    func2();
    cout << '---------------' << endl;
    foods();

    return 0;
 }