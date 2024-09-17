#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student details
struct Student {
    int rollNo;
    char name[100];
    float marks;
};

// Function to write student records to a file
void write_student_record(FILE *file, struct Student student) {
    // Use fprintf to write student details to file in a formatted manner
    fprintf(file, "%d %s %.2f\n", student.rollNo, student.name, student.marks);
}

// Function to read student records from a file
void read_student_record(FILE *file) {
    struct Student student;
    
    // Use fscanf to read formatted data from the file
    while (fscanf(file, "%d %s %f", &student.rollNo, student.name, &student.marks) != EOF) {
        // Display the student record
        printf("Roll No: %d\n", student.rollNo);
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n", student.marks);
        printf("----------------------\n");
    }
}

int main() {
    FILE *file;
    struct Student student;
    int choice, n, i;
    char filename[100];

    // Get the file name
    printf("Enter the filename to store student records: ");
    scanf("%s", filename);

    // Menu-driven program for writing and reading records
    do {
        printf("\nMenu:\n");
        printf("1. Write student records to file\n");
        printf("2. Read student records from file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Open file in append mode to add records
                file = fopen(filename, "a");
                if (file == NULL) {
                    printf("Error: Could not open file.\n");
                    return 1;
                }

                printf("Enter number of students to record: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    printf("\nEnter details of student %d\n", i + 1);
                    printf("Enter Roll No: ");
                    scanf("%d", &student.rollNo);
                    printf("Enter Name: ");
                    scanf("%s", student.name);
                    printf("Enter Marks: ");
                    scanf("%f", &student.marks);

                    // Write student record to file
                    write_student_record(file, student);
                }

                fclose(file);
                printf("Student records written successfully.\n");
                break;

            case 2:
                // Open file in read mode to read records
                file = fopen(filename, "r");
                if (file == NULL) {
                    printf("Error: Could not open file.\n");
                    return 1;
                }

                printf("\nReading student records from file:\n");
                read_student_record(file);

                fclose(file);
                break;

            case 3:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

