#include <stdio.h>

// Define a structure to store student information
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Function to accept student information from the user
void accept_student_info(struct Student *student) {
    printf("Enter Roll Number: ");
    scanf("%d", &student->roll_number);

    printf("Enter Name: ");
    scanf(" %[^\n]%*c", student->name);  // Allows input of name with spaces

    printf("Enter Marks: ");
    scanf("%f", &student->marks);
}

// Function to print student's information
void print_student_info(struct Student student) {
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    struct Student student;  // Declare a variable of type Student

    // Call function to accept student information
    accept_student_info(&student);

    // Call function to print student information
    print_student_info(student);

    return 0;
}

