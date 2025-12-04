#include <stdio.h>

void findFirstAndLastOccurrence(int nums[], int size, int target) {
    int first = -1;
    int last = -1;

    
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (first == -1) { 
                first = i;
            }
            last = i; 
        }
    }

    printf("%d, %d\n", first, last);
}

int main() {
    int nums1[] = {1, 2, 3, 3, 3, 4, 5};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int target1 = 3;
    printf("Array: {1, 2, 3, 3, 3, 4, 5}, Target: 3 -> ");
    findFirstAndLastOccurrence(nums1, size1, target1); 

    int nums2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 25;
    printf("Array: {10, 20, 30, 40, 50}, Target: 25 -> ");
    findFirstAndLastOccurrence(nums2, size2, target2); 

    int nums3[] = {7, 7, 7, 7, 7};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int target3 = 7;
    printf("Array: {7, 7, 7, 7, 7}, Target: 7 -> ");
    findFirstAndLastOccurrence(nums3, size3, target3); 

    int nums4[] = {1, 2, 4, 6, 8};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    int target4 = 1;
    printf("Array: {1, 2, 4, 6, 8}, Target: 1 -> ");
    findFirstAndLastOccurrence(nums4, size4, target4);

    int nums5[] = {1, 2, 4, 6, 8};
    int size5 = sizeof(nums5) / sizeof(nums5[0]);
    int target5 = 8;
    printf("Array: {1, 2, 4, 6, 8}, Target: 8 -> ");
    findFirstAndLastOccurrence(nums5, size5, target5);

    return 0;
}