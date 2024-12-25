#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int insertVal = 20;
    int insertIndex = 3;

    // Print the original array
    std::cout << "Original array:\n";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";

    // Create a new array
    int oldArraySize = sizeof(arr) / sizeof(arr[0]);
    int newArraySize = oldArraySize + 1;
    int newArr[newArraySize];

    // Copy elements to the new array, leaving space for the new element
    for (int i = 0; i < newArraySize; i++) {
        if (i < insertIndex) {
            newArr[i] = arr[i];  // Copy elements before the insertion index
        } else if (i == insertIndex) {
            newArr[i] = insertVal;  // Insert the new value
        } else {
            newArr[i] = arr[i - 1];  // Copy elements after the insertion index
        }
    }

    // Print the new array
    std::cout << "Array after insertion:\n";
    for (int i = 0; i < newArraySize; i++) {
        std::cout << newArr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
