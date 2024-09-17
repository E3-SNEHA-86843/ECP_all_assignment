#include<stdio.h>

int binomialCoeffCalc(int n, int k); // function declaration

void printPascalTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        int numCols = i + 1;
        for (int j = 0; j <= i; j++) {
            int binomialCoeff = binomialCoeffCalc(i, j);
            printf("%d ", binomialCoeff);
        }
        printf("\n");
    }
}

int binomialCoeffCalc(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoeffCalc(n - 1, k - 1) + binomialCoeffCalc(n - 1, k);
    }
}

int main() {
    int numRows;
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    printPascalTriangle(numRows);
    return 0;
}
