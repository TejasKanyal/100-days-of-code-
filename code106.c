#include <stdio.h>

int main() {
    int n, i, j;
   

    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    int next_greater;
    for (i = 0; i < n; i++) {
        next_greater = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
    
        printf("%d", next_greater);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("\n");
    return 0;
}
