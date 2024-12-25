#include <iostream>

int main() {
    int arr[] = {1,2,3,4,5};
    int insertVal = 20;
    int insertIndex = 3;
// print the original array
    for (int i = 0; i < sizeof(arr) / (arr[0]); i++ ) {
    std::cout << arr[i] << std::endl;

    }
    std::cout << "\n";

// create a new array
    int newArraySize = sizeof(arr) / sizeof(arr[0]) + 1;
    int newArr[newArraySize]


    return 0;

 }

