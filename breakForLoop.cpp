
/**
 * program to print the value of 1 . 
 */

 #include <iostream>
 using namespace std;
/**
 * This means, when i is equal to 3,
 *  the break statement terminates the loop. 
 * Hence, the output doesn't include values greater than or equal to 3.
 */
 int main(){

    for (int i = 1; i <= 5; i ++){
        if (i == 3){
            break; // break the loop when i is 2
        }
        cout << i << endl; // print the value of i
    }

    return 0;
 }