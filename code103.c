#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    for (int i = 0; i < numsSize; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivot = pivotIndex(arr, n);
    printf("%d\n", pivot);

    int arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int pivot2 = pivotIndex(arr2, n2);
    printf("%d\n", pivot2);

    int arr3[] = {2, 1, -1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int pivot3 = pivotIndex(arr3, n3);
    printf("%d\n", pivot3);
    
    return 0;
}