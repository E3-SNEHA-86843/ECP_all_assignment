#include<stdio.h>
//accept array
void accept2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void print2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
// Function to calculate the sum of elements in a given row
int sumRow(int rows, int cols, int arr[rows][cols], int row) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[row][j];
    }
    return sum;
}

// Function to calculate the sum of elements in a given column
int sumCol(int rows, int cols, int arr[rows][cols], int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][col];
    }
    return sum;
}

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    accept2DArray(rows, cols, arr);
    printf("2-D Array:\n");
    print2DArray(rows, cols, arr);

    int row, col;
    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Enter column number: ");
    scanf("%d", &col);

    printf("Sum of elements in row %d: %d\n", row, sumRow(rows, cols, arr, row));
    printf("Sum of elements in column %d: %d\n", col, sumCol(rows, cols, arr, col));

    return 0;
}
