
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

 class  ClassName{
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

 public:
    string name;
    int studentID;
    string major;
    double GPA;
    int age;
    double yearOfGraduation;

    // constructor

    Student Bruno;
    Bruno.name = "Bruno Fernamdez";
    Bruno.studentID= 852369;
    Bruno.major = "Data Science";
    Bruno.GPA = 3.7;
    Bruno.age = 35;
    Bruno.yearOfGraduation = 2028;

    cout << "Student Name: " << Bruno.name << endl;
    cout << "student ID Number: " << Bruno.studentID << endl;
    cout << "Major: " << Bruno.major << endl;
    cout << "GPA: " << Bruno.GPA << endl;
    cout << "Age: " << Bruno.age << endl;
    cout << "Year of Graduation: " << Bruno.yearOfGraduation << endl;

};    

int main() {
    Bruno();

    return 0;
}

