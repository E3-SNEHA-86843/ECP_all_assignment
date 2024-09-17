#include <stdio.h>
//accept 2d array
void accept2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
// Function to add two 3x3 matrices
void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two 3x3 matrices
void subtractMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two 3x3 matrices
void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a 3x3 matrix
void printMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];

    printf("Enter elements of matrix 1:\n");
    accept2DArray(3, 3, mat1);

    printf("Enter elements of matrix 2:\n");
    accept2DArray(3, 3, mat2);

    printf("Matrix 1:\n");
    printMatrix(mat1);

    printf("Matrix 2:\n");
    printMatrix(mat2);

    printf("Addition of matrices:\n");
    addMatrices(mat1, mat2, result);
    printMatrix(result);

    printf("Subtraction of matrices:\n");
    subtractMatrices(mat1, mat2, result);
    printMatrix(result);

    printf("Multiplication of matrices:\n");
    multiplyMatrices(mat1, mat2, result);
    printMatrix(result);

    return 0;
}
