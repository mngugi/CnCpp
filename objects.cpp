
/***
 * @ClassName 
 * 1. All objects are created inside classes. The first step is use the keyword class.
 * 2. Give the class a name which is used to construct an object.
 * 3. The keyword public: is needed in order to provide access to object attributes that
 *  you define later on.
 * 4. Give your object as many attributes as needed in order to make full use of your object.
 * 5. All attributes go within curly braces {} after the class name declaration.
 * Make sure to end the closing curly brace with a semi-colon ;.
 */

 
// define an object called student. 
// student information or attributes 
/**
* 
* @Name
* @Student ID number
* @Major
* @GPA
* @Age
* @Year of graduation
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int studentID;
    string major;
    double GPA;
    int age;
    double yearOfGraduation;

    // Constructor
    Student(string n, int id, string m, double gpa, int a, double yGrad) {
        name = n;
        studentID = id;
        major = m;
        GPA = gpa;
        age = a;
        yearOfGraduation = yGrad;
    }

    // Method to print student details
    void printDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID Number: " << studentID << endl;
        cout << "Major: " << major << endl;
        cout << "GPA: " << GPA << endl;
        cout << "Age: " << age << endl;
        cout << "Year of Graduation: " << yearOfGraduation << endl;
    }
};

int main() {
    Student bruno("Bruno Fernandez", 852369, "Data Science", 3.7, 35, 2028);
    bruno.printDetails();

    return 0;
}