#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int total_sum, array_sum = 0;
    
    total_sum = n * (n + 1) / 2;
    
    
    for (int i = 0; i < n - 1; i++) {
        array_sum += arr[i];
    }
    
    return total_sum - array_sum;
}

int main() {
    int n;
    printf("Enter the size of the expected complete range (e.g., if array has 4 elements, n is 5): ");
    scanf("%d", &n);

    int arr_size = n - 1;
    int arr[arr_size];

    printf("Enter the %d integers (between 0 and %d, all unique except one missing): ", arr_size, n);
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("The missing number is %d\n", missing);
    
    return 0;
}
