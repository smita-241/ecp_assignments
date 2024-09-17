#include <stdio.h>

// Function to swap two integers using XOR
void swap(int *a, int *b) {
    if (a != b) { // Check if pointers are not pointing to the same location
        *a = *a ^ *b; // Step 1: a = a ^ b
        *b = *a ^ *b; // Step 2: b = (a ^ b) ^ b = a
        *a = *a ^ *b; // Step 3: a = (a ^ b) ^ a = b
    }
}

int main() {
    int x, y;
    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

