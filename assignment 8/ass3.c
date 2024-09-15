#include <stdio.h>

// Define a structure to store student information
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Function to accept an array of students' information from the user
void accept_students_info(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Enter Name: ");
        scanf(" %[^\n]%*c", students[i].name);  // Allows input of name with spaces

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to print an array of students' information
void print_students_info(struct Student students[], int n) {
    printf("\nStudents Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Declare an array of Student structures

    // Call function to accept array of student information
    accept_students_info(students, n);

    // Call function to print the array of student information
    print_students_info(students, n);

    return 0;
}

