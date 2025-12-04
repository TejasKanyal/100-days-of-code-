#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findKthSmallest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compare);
    printf("%d\n", arr[k - 1]);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    if (k >= 1 && k <= n) {
        findKthSmallest(arr, n, k);
    } else {
        printf("Invalid k value\n");
    }
    return 0;
}
