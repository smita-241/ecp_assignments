#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

// Function to accept a 2-D array from the user
void acceptArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
// Function to print the 2-D array
void printArray(int arr[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("The array is:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    int array[MAX_ROWS][MAX_COLS];

    // Accepting dimensions of the array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Accepting the array elements
    acceptArray(array, rows, cols);

    // Printing the array
    printArray(array, rows, cols);

    return 0;
}

