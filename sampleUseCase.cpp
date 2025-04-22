#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define the Student class
class Student {
    public:
        Student(string name, int id, string major, double gpa, int age, int graduationYear) {
            this->name = name;
            this->id = id;
            this->major = major;
            this->gpa = gpa;
            this->age = age;
            this->graduationYear = graduationYear;
        }

        void printDetails() const {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Major: " << major << endl;
            cout << "GPA: " << gpa << endl;
            cout << "Age: " << age << endl;
            cout << "Graduation Year: " << graduationYear << endl;
        }

    private:
        string name;
        int id;
        string major;
        double gpa;
        int age;
        int graduationYear;
};

int main() {
    vector<Student> students;

    students.push_back(Student("Bruno", 852369, "Data Science", 3.7, 35, 2028));
    students.push_back(Student("Alice", 984556, "Cyber Security", 3.9, 22, 2026));
    students.push_back(Student("Bob", 654321, "AI", 3.6, 24, 2027));

    for (const Student& s : students) {
        s.printDetails();
        cout << "----------------------" << endl;
    }

    return 0;
}