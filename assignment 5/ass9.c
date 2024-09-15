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

// Function to sort the array using Bubble Sort (necessary for Binary Search)
void bubbleSort(int arr[], int size) {
    int i, j, temp;
    
    // Loop through each element of the array
    for(i = 0; i < size-1; i++) {
        // Compare adjacent elements
        for(j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap the elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to perform Binary Search
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    
    while(low <= high) {
        mid = (low + high) / 2;
        
        if(arr[mid] == key) {
            return mid; // Return the index if the element is found
        } else if(arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    
    return -1; // Return -1 if the element is not found
}

int main() {
    int size, key, index;
    
    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Call the function to accept array elements
    acceptArray(arr, size);
    
    // Sort the array using Bubble Sort
    bubbleSort(arr, size);
    
    // Print the sorted array
    printf("Sorted ");
    printArray(arr, size);
    
    // Input the element to search
    printf("Enter the number to search: ");
    scanf("%d", &key);
    
    // Call the function to perform Binary Search
    index = binarySearch(arr, size, key);
    
    // Print the result
    if(index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}

