#include <stdio.h>

#define MAX_ROWS 14
#define MAX_COL_NAME 20
#define MAX_COL_GENDER 10
#define MAX_COL_COURSE 20

typedef struct {
    int id;
    char first_name[MAX_COL_NAME];
    int age;
    char gender[MAX_COL_GENDER];
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
        {5, "Eve", 28,"Female","Accounts"},
        {6, "Alexa", 23, "Female", "Nursing"},
        {7, "Bobic", 30, "Male","Accounts"},
        {8, "Cham", 22,"Male","Finance"},
        {9, "Davido", 25, "Male","Programmer"},
        {10,"Mary", 21,"Female","Accounts"},
        {11,"Kristine", 19,"Female","Accounts"},
        {12,"Everlyne", 28,"Female","Security"},
        {13,"Evans", 48,"Male","Accounts"},
        {14,"Walker", 36,"Male","Marketing"}

    };

    printTableHeader();
    for (int i = 0; i < MAX_ROWS; i++) {
        printTableRow(table[i]);
    }
    printTableFooter();

    return 0;
}
