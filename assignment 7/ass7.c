#include <stdio.h>

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

    return 0;
}

