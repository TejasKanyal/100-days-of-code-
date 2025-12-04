#include <stdio.h>

int main() {
    int arr[100];
    int position;
    int i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0 to %d) of element to delete: ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("You entered a wrong position!\n");
    } else {
        for (i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
