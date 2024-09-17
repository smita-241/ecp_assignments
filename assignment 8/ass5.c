#include <stdio.h>
#include <string.h>

// Define a structure to hold student information
typedef struct {
    int rollNumber;
    char name[50];
} Student;

// Function to sort students by roll number (ascending)
void sortByRollNumber(Student students[], int size) {
    Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (students[i].rollNumber > students[j].rollNumber) {
                // Swap students[i] and students[j]
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

// Function to sort students by name (alphabetical order)
void sortByName(Student students[], int size) {
    Student temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                // Swap students[i] and students[j]
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

// Function to print student information
void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
    }
}

int main() {
    Student students[] = {
        {1003, "Alice"},
        {1001, "Charlie"},
        {1002, "Bob"}
    };
    int size = sizeof(students) / sizeof(students[0]);

    printf("Students sorted by roll number:\n");
    sortByRollNumber(students, size);
    printStudents(students, size);

    printf("\nStudents sorted by name:\n");
    sortByName(students, size);
    printStudents(students, size);

    return 0;
}

