#include <stdio.h>
#include <stdlib.h>

int findRepeatedElement(int arr[], int n) {
    int* freq = (int*)calloc(n, sizeof(int));
    int repeatedElement = -1;
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 0) {
            freq[arr[i]] = 1;
        } else {
            repeatedElement = arr[i];
            break;
        }
    }
    free(freq);
    return repeatedElement;
}

int main() {
    int arr[] = {1, 3, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int repeated = findRepeatedElement(arr, n);
    if (repeated != -1) {
        printf("%d\n", repeated);
    } else {
        printf("No repeated element found\n");
    }
    return 0;
}
