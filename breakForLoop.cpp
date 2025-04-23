
/**
 * program to print the value of 1 . 
 */

 #include <iostream>
 using namespace std;

 int main(){

    for (int i = 1; i <= 5; i ++){
        if (i == 2){
            break; // break the loop when i is 2
        }
        cout << i << endl; // print the value of i
    }

    return 0;
 }