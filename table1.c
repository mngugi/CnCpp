#include <stdio.h>

#define MAX_ROWS 5
#define MAX_COL_NAME 20
#define MAX_COL_GENDER 10
#define MAX_COL_COURSE 20

typedef struct {
    int id;
    char first_name[MAX_COL_NAME];
    int age;
    char getnder[MAX_COL_GENDER];
    char course[MAX_COL_COURSE];
} Person;

void printTableHeader() {
    printf("+----+--------------------+-----+------+------------------+\n");
    printf("| ID | Name               | Age | Gender | Course         |\n");
    printf("+----+--------------------+-----+------+------------------+\n");
}

void printTableRow(Person person) {
    printf("| %-2d | %-18s | %-3d | %-10s | %-10s |\n", person.id, person.first_name, person.age, person.gender, person.course);
}

void printTableFooter() {
    printf("+----+--------------------+-----+------+-------+----------+\n");
}

int main() {
    Person table[MAX_ROWS] = {
        {1, "Alice", 23, "Female", "Nursing"},
        {2, "Bob", 30, "Male","Accounts"},
        {3, "Charlie", 22,"Male","Finance"},
        {4, "David", 25, "Male","Programmer"},
        {5, "Eve", 28,"Male","Accounts"}
    };

    printTableHeader();
    for (int i = 0; i < MAX_ROWS; i++) {
        printTableRow(table[i]);
    }
    printTableFooter();

    return 0;
}
