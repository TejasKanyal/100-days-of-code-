#include <stdio.h>

int main() {
    int arr[100];
    int n, k, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;

    int temp[100]; 


    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
