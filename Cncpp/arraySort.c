#include <stdio.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to update a sorted array while keeping it sorted
void updateSortedArray(int A[], int lenFilled, int idx, int val) {
    A[idx] = val; // Assign the new value to the element at index idx

    // Check and swap with previous elements if necessary to maintain sorting
    while (idx > 0 && A[idx - 1] > val) {
        swap(&A[idx - 1], &A[idx]);
        idx--;
    }

    // Check and swap with next elements if necessary to maintain sorting
    while (idx < lenFilled - 1 && A[idx + 1] < val) {
        swap(&A[idx], &A[idx + 1]);
        idx++;
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9}; // Example sorted array
    int lenFilled = 5; // Number of elements filled in the array
    int idx = 2; // Index where the new value will be updated
    int val = 6; // New value to be updated

    // Update the sorted array while keeping it sorted
    updateSortedArray(A, lenFilled, idx, val);

    // Print the updated array
    printf("Updated array:");
    for (int i = 0; i < lenFilled; i++) {
        printf(" %d", A[i]);
    }
    printf("\n");

    return 0;
}
