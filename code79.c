#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    int i = 0, j = 0; 
    int isUp = 1;     

    
    for (int count = 0; count < rows * cols; count++) {
        printf("%d ", matrix[i][j]);

        if (isUp) {
            
            if (i == 0 || j == cols - 1) {
                isUp = 0;
                if (j == cols - 1) {
                    i++; 
                } else {
                    j++; 
                }
            } else {
                i--; 
                j++; 
            }
        } else {
            
            if (j == 0 || i == rows - 1) {
                isUp = 1;
                if (i == rows - 1) {
                    j++; 
                } else {
                    i++; 
                }
            } else {
                i++; 
                j--; 
            }
        }
    }
    printf("\n");

    return 0;
}