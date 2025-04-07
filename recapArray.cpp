/*
* program that declared and initialized an int array named fruits_array. It has 10 items.

*/

#include <iostream>
using namespace std;

int main(){

   string fruits_array[] = {"Apple","Avocado","Banana","Blackberry","Blueberry","Dragon Fruit","Orange","Popo","Pineapple","Strawberry"};
    for (string i : fruits_array) {
        cout << i << " " << endl;
        
    }
    
    return 0 ;
}