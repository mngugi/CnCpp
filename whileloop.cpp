/**
 * A while loop evaluates the condition
 * If the condition evaluates to true, the code inside the while loop is executed.
 * The condition is evaluated again.
 * This process continues until the condition is false.
 * When the condition evaluates to false, the loop terminates.
 * 
 * 
 */


 #include <iostream>

 using namespace std;
 
 int main() {
     int i = 1;
     int j = 0;
     int sum = 0;
 
     // Print numbers 1 to 10
     while (i <= 10) {
         cout << i << endl;
         ++i;
     }
 
     cout << "==============" << endl;
 
     // Prompt user to enter numbers until a negative one is entered
     cout << "Enter numbers to sum (negative number to stop):" << endl;
 
     while (true) {
         cout << "Enter number: ";
         cin >> j;
 
         if (j < 0) break;
 
         sum += j;
     }
 
     cout << "\nThe sum is: " << sum << endl;
 
     return 0;
 }
 

