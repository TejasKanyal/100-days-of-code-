#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maxSubArraySum(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }
    return max_so_far;
}

int main() {
    int arr1[] = {1, 2, 3, -2, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Test 1: {1, 2, 3, -2, 5}\n");
    printf("%d\n", maxSubArraySum(arr1, n1));
    
    int arr2[] = {-2, -3, -1, -5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("\nTest 2 (All Negative): {-2, -3, -1, -5}\n");
    printf("%d\n", maxSubArraySum(arr2, n2));
    
    int arr3[] = {-1, 2, 3, -2, -5, 10, -1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("\nTest 3: {-1, 2, 3, -2, -5, 10, -1}\n");
    printf("%d\n", maxSubArraySum(arr3, n3));

    return 0;
}