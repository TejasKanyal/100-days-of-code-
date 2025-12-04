#include <stdio.h>
#include <stdlib.h>

int findMajority(int* nums, int n) {
    int count = 0;
    int candidate = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 1;
        }
    }
    int majority = findMajority(nums, n);
    printf("%d\n", majority);
    free(nums);
    return 0;
}