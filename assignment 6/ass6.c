#include <stdio.h>
#include <limits.h> // For INT_MIN
#include <string.h> // For strlen()

char* itoa(int value, char *string, int base) {
    if (base < 2 || base > 36) {
        // Base out of range
        return NULL;
    }

    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char buffer[33]; // Buffer to hold the converted number (up to 32 bits plus null terminator)
    int is_negative = 0;
    int i = 0;

    // Handle zero explicitly
    if (value == 0) {
        string[i++] = '0';
        string[i] = '\0';
        return string;
    }

    // Handle negative numbers for base 10
    if (value < 0 && base == 10) {
        is_negative = 1;
        value = -value;
    }

    // Convert the number to the given base
    while (value != 0) {
        buffer[i++] = digits[value % base];
        value /= base;
    }

    // Append negative sign for base 10
    if (is_negative) {
        buffer[i++] = '-';
    }

    // Null-terminate the string
    buffer[i] = '\0';

    // Reverse the buffer and copy it to the output string
    int start = 0;
    int end = i - 1;
    while (start <= end) {
        string[start] = buffer[end];
        string[end] = buffer[start];
        start++;
        end--;
    }
    string[i] = '\0';

    return string;
}

int main() {
    char buffer[33]; // Buffer to hold the string representation

    printf("Base 10: %s\n", itoa(12345, buffer, 10));
    printf("Base 2 : %s\n", itoa(12345, buffer, 2));
    printf("Base 16: %s\n", itoa(12345, buffer, 16));
    printf("Base 36: %s\n", itoa(12345, buffer, 36));
    printf("Negative base 10: %s\n", itoa(-12345, buffer, 10));

    return 0;
}

