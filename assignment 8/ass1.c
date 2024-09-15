#include <stdio.h>

// Define a structure to store student information
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    struct Student student;  // Declare a variable of type Student

    // Accept student information from user
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_number);

    printf("Enter Name: ");
    scanf(" %[^\n]%*c", student.name);  // Allows input of name with spaces

    printf("Enter Marks: ");
    scanf("%f", &student.marks);

    // Print the student information
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.roll_number);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}

