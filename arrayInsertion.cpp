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

// copy elements from old array to new array , leaving space for new element
    for (int i = insertIndex + 1 ; i < newArraySize; i++)
        newArr[i] = array[i - 1];

    // print new array
    std::cout << "Array after insertion:\n";
    for (int i = 0; i < newArraySize; i++) {
        std::cout << newArray[i] << " ";
    }

    return 0;

 }

