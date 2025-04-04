#include <iostream>
using namespace std;

int main(){
    int Exam_marks ;
    cout << "Enter exam marks: ";
    cin >> Exam_marks ; 

    // check number is positive

    if (Exam_marks >= 85) {
        cout << "Grade High Distinction: " <<  Exam_marks << endl;
    }

  return 0; 
}

