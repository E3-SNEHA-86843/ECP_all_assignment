#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2-dimensional matrix
int **allocateMatrixMemory(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free memory allocated for a 2-dimensional matrix
void freeMatrixMemory(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows = 3;
    int cols = 4;
    int **matrix = allocateMatrixMemory(rows, cols);

    // Use the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free the memory
    freeMatrixMemory(matrix, rows);

    return 0;
}
