#include <stdio.h>

void main() {
    int row, col;

    printf("Enter the number of row: ");
    scanf("%d", &row);

    printf("Enter the number of column: ");
    scanf("%d", &col);

    int sum = 0;
    int matrix[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter the element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d\n", sum);
}
