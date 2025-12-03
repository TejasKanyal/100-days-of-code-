#include <stdio.h>

int main() {
    int n;
    int product = 1; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i; 
        }
    }

    printf("The product of even numbers from 1 to %d is: %d\n", n, product);

    return 0; 
}