#include <stdio.h>

int main() {
    int matrix[10][10]; 
    int i, j, rows, cols, sum = 0;

    printf("Enter the number of rows and columns for a square matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Error: The matrix is not square.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        sum += matrix[i][i]; 
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}