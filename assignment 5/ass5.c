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

// Function to calculate both maximum and minimum of the array elements
void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] > *max) {
            *max = arr[i];
        }
        if(arr[i] < *min) {
            *min = arr[i];
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
    
    // Print the array elements
    printArray(arr, size);
    
    // Variables to hold maximum and minimum values
    int max, min;
    
    // Call the function to find maximum and minimum
    findMaxMin(arr, size, &max, &min);
    
    // Print the maximum and minimum
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}

