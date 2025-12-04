#include <stdio.h>
#include <math.h>

int find_pivot(int n) {
    int total_sum = (n * (n + 1)) / 2;
    int x_squared = total_sum;
    int x = (int)sqrt(x_squared);

    if (x * x == x_squared) {
        return x;
    } else {
        return -1;
    }
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int pivot = find_pivot(n);
    printf("%d\n", pivot);

    return 0;
}
