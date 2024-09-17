#include <stdio.h>

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

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Binary representation of %d: ", number);
    displayBinary(number);
    
    return 0;
}

