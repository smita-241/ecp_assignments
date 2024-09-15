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

// Function to remove duplicate elements and return the number of unique elements
int removeDuplicates(int arr[], int size) {
    if(size == 0) return 0;

    int uniqueCount = 1; // At least one element is always unique

    // Traverse the array and keep only unique elements
    for(int i = 1; i < size; i++) {
        int isDuplicate = 0;
        // Check if the current element already exists in the unique part of the array
        for(int j = 0; j < uniqueCount; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        // If it's not a duplicate, add it to the unique part of the array
        if(!isDuplicate) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }
    
    return uniqueCount; // Return the count of unique elements
}

int main() {
    int size;
    
    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Call the function to accept array elements
    acceptArray(arr, size);
    
    // Remove duplicates and get the count of unique elements
    int uniqueSize = removeDuplicates(arr, size);
    
    // Print the array with unique elements
    printf("Array after removing duplicates: ");
    printArray(arr, uniqueSize);
    
    // Print the number of unique elements
    printf("Number of unique elements: %d\n", uniqueSize);
    
    return 0;
}

