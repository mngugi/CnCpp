#include <vector>

int main() {
    vector<Student> students;

    students.push_back(Student("Bruno", 852369, "Data Science", 3.7, 35, 2028));
    students.push_back(Student("Alice", 123456, "Cyber Security", 3.9, 22, 2026));
    students.push_back(Student("Bob", 654321, "AI", 3.6, 24, 2027));

    for (Student s : students) {
        s.printDetails();
        cout << "----------------------" << endl;
    }

    return 0;
}
