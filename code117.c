#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = m + n;
    int mergedArr[mergedSize];

    mergeSortedArrays(arr1, m, arr2, n, mergedArr);

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
