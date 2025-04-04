#include <iostream>
using namespace std;

/**
 * Determines the grade category based on exam marks.
 * 
 * marks The exam score entered by the user.
 */
void determineGrade(int marks) {
    if (marks >= 85 && marks <= 100) {
        cout << "Grade: High Distinction" << endl;
    } else if (marks >= 75) {
        cout << "Grade: Distinction" << endl;
    } else if (marks >= 65) {
        cout << "Grade: Credit" << endl;
    } else if (marks >= 50) {
        cout << "Grade: Pass" << endl;
    } else if (marks >= 0) {
        cout << "Grade: Fail" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }
}

int main() {
    int examMarks;
    cout << "Enter exam marks (0-100): ";
    cin >> examMarks;

    determineGrade(examMarks);
    return 0;
}
