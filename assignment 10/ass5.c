#include <stdio.h>
#include <ctype.h> // For isalpha function

// Function to check if the character is an alphabet and perform XOR with 32
void checkAndXor(char ch) {
    if (isalpha(ch)) {
        // Perform XOR with 32
        char result = ch ^ 32;

        // Print results
        printf("Character: %c\n", ch);
        printf("Character after XOR with 32: %c\n", result);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    checkAndXor(ch);
    
    return 0;
}

