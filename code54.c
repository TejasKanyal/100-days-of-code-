#include <stdio.h>

int main() {
    int i, j;
    int max_stars = 7;

    
    for (i = 1; i <= max_stars; i += 2) { 
        
        for (j = 0; j < (max_stars - i) / 2; j++) {
            printf(" ");
        }
        
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = max_stars - 2; i >= 1; i -= 2) { 
        
        for (j = 0; j < (max_stars - i) / 2; j++) {
            printf(" ");
        }
        
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}