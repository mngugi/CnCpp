#include <stdio.h>

#define MAX_ROWS 5
#define MAX_COL_NAME 20

typedef struct {
    int id;
    char name[MAX_COL_NAME];
    int age;
} Person;

void printTableHeader() {
    printf("+----+--------------------+-----+\n");
    printf("| ID | Name               | Age |\n");
    printf("+----+--------------------+-----+\n");
}

void printTableRow(Person person) {
    printf("| %-2d | %-18s | %-3d |\n", person.id, person.name, person.age);
}

void printTableFooter() {
    printf("+----+--------------------+-----+\n");
}

int main() {
    Person table[MAX_ROWS] = {
        {1, "Alice", 23},
        {2, "Bob", 30},
        {3, "Charlie", 22},
        {4, "David", 25},
        {5, "Eve", 28}
    };

    printTableHeader();
    for (int i = 0; i < MAX_ROWS; i++) {
        printTableRow(table[i]);
    }
    printTableFooter();

    return 0;
}
