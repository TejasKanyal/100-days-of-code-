#include <stdio.h>
void main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is -> ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int count = 0, number;
    printf("Enter a number from this array: ");
    scanf("%d", &number);

    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }

    printf("The frequency of %d is %d\n", number, count);
}
