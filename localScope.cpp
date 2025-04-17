/**
 * local scope are declared inside the function. 
 * func1() and func2 are local scope variables.
 * 
 * 
 */

 #include <iostream>
 using namespace std;


 void func1(){
    string your_name = "Bruno Fernandez";
    cout << your_name << endl;

 }

 void func2(){
    string your_name = "Marcus Rashford";
    cout << your_name << endl;
 }

 /**
  * Global scope  - Referencing
  * Global scope variable is when a variable 
  * is declared out side all existing functions.
  * 
  */

 int main(){
    func1();
    func2();

    return 0;
 }