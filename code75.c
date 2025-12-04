#include <stdio.h>

int main() {

    int a[100][100], b[100][100], sum[100][100];
    int row, col, i, j;

    printf("Enter the number of rows (1-100): ");
    scanf("%d", &row);
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &col);

    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d ", sum[i][j]);
            if (j == col - 1) {
                printf("\n\n");
            }
        }
    }

    return 0;
}