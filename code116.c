#include <stdio.h>
#include <stdlib.h>

void find_two_sum(int* nums, int nums_size, int target) {
    

    for (int i = 0; i < nums_size; i++) {
        for (int j = i + 1; j < nums_size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; 
            }
        }
    }

    printf("-1 -1\n");
}

int main() {
   
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: nums = {2, 7, 11, 15}, target = 9\nOutput: ");
    find_two_sum(nums1, size1, target1); 

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: nums = {3, 2, 4}, target = 6\nOutput: ");
    find_two_sum(nums2, size2, target2); 

    int nums3[] = {3, 3};
    int target3 = 6;
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Input: nums = {3, 3}, target = 6\nOutput: ");
    find_two_sum(nums3, size3, target3); 

    return 0;
}
