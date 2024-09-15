#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

// Function to calculate the sum of elements in a given row
int sumOfRow(int arr[MAX_ROWS][MAX_COLS], int row, int cols) {
    int sum = 0;
    for (int j = 0; j < cols; ++j) {
        sum += arr[row][j];
    }
    return sum;
}
// Function to calculate the sum of elements in a given column
int sumOfColumn(int arr[MAX_ROWS][MAX_COLS], int col, int rows) {
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        sum += arr[i][col];
    }
    return sum;
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
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int row, col;
    printf("Enter the row index to find the sum (0 to %d): ", rows - 1);
    scanf("%d", &row);
    printf("Enter the column index to find the sum (0 to %d): ", cols - 1);
    scanf("%d", &col);

    if (row >= 0 && row < rows) {
        int rowSum = sumOfRow(array, row, cols);
        printf("Sum of elements in row %d is %d\n", row, rowSum);
    } else {
        printf("Invalid row index.\n");
    }

    if (col >= 0 && col < cols) {
        int colSum = sumOfColumn(array, col, rows);
        printf("Sum of elements in column %d is %d\n", col, colSum);
    } else {
        printf("Invalid column index.\n");
    }

    return 0;
}

