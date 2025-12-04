#include <stdio.h>
#include <stdlib.h>

int* findFirstNegative(int* arr, int n, int k, int* returnSize) {
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
        if (arr[i] < 0) {
            dq[rear] = i;
            rear++;
        }

        if (front < rear && dq[front] == i - k) {
            front++;
        }

        if (i >= k - 1) {
            if (front < rear) {
                result[result_index++] = arr[dq[front]];
            } else {
                result[result_index++] = 0;
            }
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
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int resultSize = 0;
    int* first_negatives = findFirstNegative(arr, n, k, &resultSize);

    printf("First negative elements for window size %d:\n", k);
    if (first_negatives) {
        print_array(first_negatives, resultSize);
        free(first_negatives);
    }

    int arr2[] = {2, 4, 6, 8, 10};
    int n2 = 5;
    int k2 = 2;
    resultSize = 0;
    int* first_negatives2 = findFirstNegative(arr2, n2, k2, &resultSize);

    printf("\nFirst negative elements for window size %d:\n", k2);
    if (first_negatives2) {
        print_array(first_negatives2, resultSize);
        free(first_negatives2);
    }

    return 0;
}