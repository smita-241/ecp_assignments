#include <stdio.h>
#include <stdlib.h>

// Function to display the binary representation of a number
void displayBinary(int num) {
    int i;
    // Iterate over each bit from most significant to least significant
    for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Extract the i-th bit
        printf("%d", bit);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    // Check if exactly one argument is passed
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    // Convert the command line argument to an integer
    int number = atoi(argv[1]);
    
    printf("Binary representation of %d: ", number);
    displayBinary(number);
    
    return 0;
}

