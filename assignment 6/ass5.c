#include <stdio.h>
#include <ctype.h> // For isdigit()

int atoi(const char* string) {
    int result = 0;  // Initialize result to 0
    int sign = 1;    // Assume positive number

    // Check if the string is NULL
    if (string == NULL) {
        return 0;
    }

    // Check for sign of the number
    if (*string == '-') {
        sign = -1;  // If negative sign, set sign to -1
        string++;    // Move to the next character
    } else if (*string == '+') {
        string++;    // Move to the next character if positive sign
    }

    // Convert string to integer
    while (*string) {
        if (!isdigit(*string)) {
            // If character is not a digit, break out
            break;
        }
        result = result * 10 + (*string - '0');  // Accumulate result
        string++;  // Move to the next character
    }

    return sign * result;  // Return the result with the appropriate sign
}

int main() {
    // Test the atoi function
    const char* numStr1 = "12345";
    const char* numStr2 = "-6789";
    const char* numStr3 = "+123";
    const char* numStr4 = "abcd";  // Non-numeric input

    printf("String: %s, Integer: %d\n", numStr1, atoi(numStr1));
    printf("String: %s, Integer: %d\n", numStr2, atoi(numStr2));
    printf("String: %s, Integer: %d\n", numStr3, atoi(numStr3));
    printf("String: %s, Integer: %d\n", numStr4, atoi(numStr4));  // Should be 0

    return 0;
}

