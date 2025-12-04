#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    int i;
    
    answer[0] = 1;
    for (i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    int rightProduct = 1;
    for (i = numsSize - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int *answer = (int*)malloc(numsSize * sizeof(int));

    productExceptSelf(nums, numsSize, answer);

    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d%s", answer[i], (i == numsSize - 1) ? "" : ", ");
    }
    printf("]\n");

    free(answer);
    return 0;
}