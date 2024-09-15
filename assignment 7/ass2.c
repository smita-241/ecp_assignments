#include <stdio.h>

#define SIZE 3

// Function to add two 3x3 matrices
void addMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
// Function to subtract one 3x3 matrix from another
void subtractMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
// Function to multiply two 3x3 matrices
void multiplyMatrices(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE]) {
    // Initialize all elements of result matrix to 0
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = 0;
        }
    }
    
    // Perform matrix multiplication
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < SIZE; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
// Function to print a 3x3 matrix
void printMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int result[SIZE][SIZE];
    
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Add matrices
    addMatrices(mat1, mat2, result);
    printf("Matrix after addition:\n");
    printMatrix(result);
    
    // Subtract matrices
    subtractMatrices(mat1, mat2, result);
    printf("Matrix after subtraction:\n");
    printMatrix(result);
    
    // Multiply matrices
    multiplyMatrices(mat1, mat2, result);
    printf("Matrix after multiplication:\n");
    printMatrix(result);
    
    return 0;
}

