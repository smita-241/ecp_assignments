#include <stdio.h>
#include <stdbool.h>

// Function to check if a character exists in a string
bool is_in_string(const char *str, char ch) {
    while (*str) {
        if (*str == ch) {
            return true;
        }
        str++;
    }
    return false;
}

// Function to remove all occurrences of any character in string2 from string1
void remove_chars(char *str1, const char *str2) {
    char *src = str1;
    char *dst = str1;

    // Iterate over each character in str1
    while (*src) {
        // If the current character is not in str2, copy it to the destination
        if (!is_in_string(str2, *src)) {
            *dst++ = *src;
        }
        src++;
    }
    // Null-terminate the resulting string
    *dst = '\0';
}

int main() {
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Input the second string (characters to remove)
    printf("Enter the second string (characters to remove): ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove the newline character if present
    str2[strcspn(str2, "\n")] = '\0';

    // Call the function to remove characters
    remove_chars(str1, str2);

    // Print the result
    printf("Resulting string: \"%s\"\n", str1);

    return 0;
}

