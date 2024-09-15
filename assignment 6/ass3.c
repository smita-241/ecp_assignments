#include <stdio.h>

// Function to remove all occurrences of a given character from a string
void remove_char(char *str, char ch) {
    char *src = str;
    char *dst = str;

    // Iterate over each character in the string
    while (*src) {
        // If the current character is not the one to be removed, copy it to the destination
        if (*src != ch) {
            *dst++ = *src;
        }
        src++;
    }
    // Null-terminate the resulting string
    *dst = '\0';
}

int main() {
    char str[100];
    char ch;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Input the character to remove
    printf("Enter the character to remove: ");
    ch = getchar();

    // Call the function to remove the character
    remove_char(str, ch);

    // Print the result
    printf("String after removing '%c': \"%s\"\n", ch, str);

    return 0;
}

