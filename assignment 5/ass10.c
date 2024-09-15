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

// Function to search for a given number using Linear Search and return the address of the element
int* linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return &arr[i]; // Return the address of the element if found
        }
    }
    return NULL; // Return NULL if the element is not found
}

int main() {
    int size, key;
    int *result;
    
    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Call the function to accept array elements
    acceptArray(arr, size);
    
    // Print the array
    printArray(arr, size);
    
    // Input the element to search
    printf("Enter the number to search: ");
    scanf("%d", &key);
    
    // Call the function to perform Linear Search
    result = linearSearch(arr, size, key);
    
    // Print the result
    if(result != NULL) {
        printf("Element %d found at address %p with value %d.\n", key, (void*)result, *result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}

