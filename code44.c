
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0; 

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        sum = 1.0;
    }

    for (i = 2; i <= n; i++) {
        double numerator = (2.0 * i) - 1.0; 
        double denominator = 2.0 * i;       
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms: %f\n", n, sum);

    return 0;
}