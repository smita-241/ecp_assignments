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

// Function to sort the array using Selection Sort
void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;
    
    // Loop to iterate over each element of the array
    for(i = 0; i < size-1; i++) {
        minIndex = i; // Assume the current element is the minimum
        
        // Find the index of the minimum element in the unsorted part of the array
        for(j = i+1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the current element
        if(minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    
    // Sort the array using Selection Sort
    selectionSort(arr, size);
    
    // Print the sorted array
    printf("Sorted ");
    printArray(arr, size);
    
    return 0;
}

