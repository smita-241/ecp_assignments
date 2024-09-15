#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two strings for sorting
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {
    // Check if at least one name is provided
    if (argc < 2) {
        printf("No names provided. Usage: %s name1 name2 ... nameN\n", argv[0]);
        return 1;
    }

    // Display the names
    printf("List of names:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    // Sort the names using qsort
    qsort(&argv[1], argc - 1, sizeof(char *), compareStrings);

    // Display the sorted names
    printf("\nSorted list of names:\n");
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}

