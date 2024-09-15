#include <stdio.h>

// Function to accept array elements from the user
void acceptArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

// Function to print array elements
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to reverse the array elements
void reverseArray(int arr[], int size) {
    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        // Swap elements
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int size;
    
    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Call the function to accept array elements
    acceptArray(arr, size);
    
    // Print the original array
    printf("\nOriginal ");
    printArray(arr, size);
    
    // Call the function to reverse the array elements
    reverseArray(arr, size);
    
    // Print the reversed array
    printf("Reversed ");
    printArray(arr, size);
    
    return 0;
}

