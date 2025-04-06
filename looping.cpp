/**
* initialization - initializes variables and is executed only once
* condition - if true, the body of for loop is executed
* if false, the for loop is terminated
* update - updates the value of initialized variables and again checks the condition
 * Program to print numbers from 1 to 10
 */

 #include <iostream>

using namespace std;



int main(){
    int number, sum ; 
    cout << "Enter a number: ";
    cin >> number;

    for(int j = 0 ; j <=10; ++j){
       sum += 1 ; 
       cout << "Sum is: "<< sum << endl ;
}
    return 0;


}

/**
 * Add two variables num and sum. The sum variable is assigned with 0 
 * and the num variable is assigned with the value provided by the user.
 */