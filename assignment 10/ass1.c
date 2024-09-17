#include <stdio.h>

// Function to count the number of '1' bits in a given number
int countOneBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;  // Check if the least significant bit is 1
        num >>= 1;         // Shift the number to the right by 1 bit
    }
    return count;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = countOneBits(number);
    printf("Number of '1' bits in %d is: %d\n", number, result);
    
    return 0;
}

