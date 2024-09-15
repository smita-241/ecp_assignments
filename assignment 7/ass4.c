#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 100

// Function to accept student names
void acceptNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        // Remove newline character if present
        names[i][strcspn(names[i], "\n")] = '\0';
    }
}

// Function to print student names
void printNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    printf("\nStudent Names:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to sort student names
void sortNames(char names[MAX_STUDENTS][MAX_NAME_LENGTH]) {
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < MAX_STUDENTS - 1; i++) {
        for (int j = i + 1; j < MAX_STUDENTS; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];

    // Accept names from user
    acceptNames(names);

    // Sort names
    sortNames(names);

    // Print names
    printNames(names);

    return 0;
}

