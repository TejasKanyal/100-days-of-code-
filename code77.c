#include <stdio.h>

int main() {
    int n; 
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; 
                break; 
            }
        }
        if (distinct == 0) {
            break; 
        }
    }

    if (distinct == 1) {
        printf("The elements on the main diagonal are distinct.\n");
    } else {
        printf("The elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}