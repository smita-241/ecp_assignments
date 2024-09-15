#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D matrix
int** allocateMatrix(int rows, int cols) {
    // Allocate memory for row pointers
    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) {
        printf("Memory allocation failed for rows\n");
        exit(1);
    }
    
    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for columns\n");
            // Free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            exit(1);
        }
    }
    return matrix;
}

// Function to free the memory allocated for a 2D matrix
void freeMatrix(int** matrix, int rows) {
    // Free each row
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    // Free the row pointers
    free(matrix);
}

int main() {
    int rows = 3, cols = 4;

    // Allocate memory for the matrix
    int** matrix = allocateMatrix(rows, cols);

    // Example usage: Fill the matrix with values and print
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free the memory allocated for the matrix
    freeMatrix(matrix, rows);

    return 0;
}

