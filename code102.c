#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    int low = 0;
    int high = size - 1;
    int ceil_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ceil_index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ceil_index;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int index = findCeilIndex(arr, size, x);

    if (index != -1) {
        printf("Index of the smallest element greater than or equal to %d is: %d\n", x, index);
    } else {
        printf("-1\n");
    }

    x = 20;
    index = findCeilIndex(arr, size, x);
    if (index != -1) {
        printf("Index of the smallest element greater than or equal to %d is: %d\n", x, index);
    } else {
        printf("-1\n");
    }

    return 0;
}