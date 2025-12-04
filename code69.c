#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int n, i;
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Enter more than two elements.\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    if (secondlargest == INT_MIN)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", secondlargest);

    return 0;
}
