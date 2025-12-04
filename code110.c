#include <stdio.h>
#include <stdlib.h>

int* maxSlidingWindow(int* arr, int n, int k, int* returnSize) {
    if (k <= 0 || n == 0 || k > n) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = n - k + 1;
    int* result = (int*)malloc(*returnSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    int* dq = (int*)malloc(n * sizeof(int));
    if (dq == NULL) {
        free(result);
        *returnSize = 0;
        return NULL;
    }

    int front = 0;
    int rear = 0;
    int result_index = 0;

    for (int i = 0; i < n; i++) {
        if (front < rear && dq[front] == i - k) {
            front++;
        }

        while (front < rear && arr[dq[rear - 1]] <= arr[i]) {
            rear--;
        }

        dq[rear] = i;
        rear++;

        if (i >= k - 1) {
            result[result_index++] = arr[dq[front]];
        }
    }

    free(dq);

    return result;
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int resultSize = 0;
    int* max_elements = maxSlidingWindow(arr, n, k, &resultSize);

    printf("Maximum elements for window size %d:\n", k);
    if (max_elements) {
        print_array(max_elements, resultSize);
        free(max_elements);
    }

    int arr2[] = {4, 2, 8, 1, 9, 3};
    int n2 = 6;
    int k2 = 4;
    resultSize = 0;
    int* max_elements2 = maxSlidingWindow(arr2, n2, k2, &resultSize);

    printf("\nMaximum elements for window size %d:\n", k2);
    if (max_elements2) {
        print_array(max_elements2, resultSize);
        free(max_elements2);
    }

    return 0;
}