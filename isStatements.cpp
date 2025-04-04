
/**
 * Entry point of the program.
 * 
 * This program prompts the user to enter their exam marks and checks
 * whether the score qualifies for a High Distinction grade.
 * 
 * Grading criteria:
 * - Marks >= 85: High Distinction
 * - Marks < 85: Not High Distinction
 * 
 * int Exit code.
 */
#include <iostream>
using namespace std;

int main(){
    int exam_marks ;
    cout << "Enter exam marks: ";
    cin >> exam_marks ; 

    // check number is positive

    if (exam_marks >= 85) {
        cout << "Grade High Distinction: " << exam_marks << endl;
    }
    else {
        cout << "Grade not High Distinction." << endl;
    }

  return 0; 
}

