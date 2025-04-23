
/**
 * program to print the value of 1 . 
 */

 #include <iostream>
 using namespace std;
/**
 *
 * 
 * In a for loop, continue skips the current 
 * iteration and the control flow jumps to the update expression.
 */

 int main(){

    for (int i = 1; i <= 5; i ++){
        if (i == 3){
            continue; // break the loop when i is 2
        }
        cout << i << endl; // print the value of i
    }

    return 0;
 }